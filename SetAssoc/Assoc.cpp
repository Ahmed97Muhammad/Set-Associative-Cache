#include "Assoc.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <ctime>
using namespace std;


typedef unsigned int uint;

uint Assoc::getN(uint startPoint, uint cacheBlockSize) {
	if(cacheBlockSize & 1 == 1)
		return startPoint;
	return getN(startPoint + 1, cacheBlockSize >> 1);
} 
//function overridinng
uint Assoc::getN(uint cacheBlockSize) {
	return getN(0, cacheBlockSize);
} 

uint Assoc::createMask(uint retval, uint current, uint length, uint offset) {
	if(current == length)
		return ( retval - 1 ) << offset;
	else return createMask(retval << 1, current + 1, length, offset);
} 
//func overriding
uint Assoc::createMask(uint length, uint offset) {
	return createMask(1, 0, length, offset);
}

void Assoc::memAccess(const CacheLine param, uint accessAt, CacheLine *result) {
	time_t now = time(0);
	tm *ltm = localtime(&now);
	ofstream os; //Object to write on files
	os.open("Log.txt", std::ios_base::app);
	os<<1 + ltm->tm_hour << ":"<< 1 + ltm->tm_min << ":"<< 1 + ltm->tm_sec << " ";
	os<<"[ACC:";
	uint offset = 32 - param.tag; //6
	result->tag = ( accessAt & createMask(param.tag, offset) ) >> offset;
	result->index = ( accessAt & createMask(param.index, param.offset) ) >> param.offset;
	result->offset = ( accessAt & createMask(param.offset, 0) );
	os<<accessAt<<"]";
	os.close();
}

bool Assoc::cacheSetIsValid(Cache **cache, uint nAssociativity, CacheLine request) {
	ofstream os; //Object to write on files
	os.open("Log.txt", std::ios_base::app);
	for(uint i = 0; i < nAssociativity; ++i) {
		if(cache[request.index][i].valid) {
			os<<" [VLD:1]";
			return true;
		}
	}
	os<<" [VLD:0]";
	return false;
	os.close();
}

bool Assoc::cacheSetTagMatch(Cache **cache, uint nAssociativity, CacheLine request) {
	ofstream os; //Object to write on files
	os.open("Log.txt", std::ios_base::app);
	for(uint i = 0; i < nAssociativity; ++i) {
		if(cache[request.index][i].tag == request.tag) {
			os<<" [TAG:1]"<<endl;
			return true;
		}
	}
	os<<" [TAG:0]";
	return false;
	os.close();
}

void Assoc::insertIntoCache(Cache **cache, uint nAssociativity, CacheLine request) {
	ofstream os; //Object to write on files
	os.open("Log.txt", std::ios_base::app);
	for(uint i = 0; i < nAssociativity; ++i) {
		if(cache[request.index][i].valid == false) {
			cache[request.index][i].valid = true;
			cache[request.index][i].tag = request.tag;
			os<<" [INSRT]"<<endl;
			return;
		}
	}
	// using random replacement method for simplicity
	srand(time(NULL));
	if(nAssociativity > 1)
		--nAssociativity;
	uint replacementIndex = ( rand() % nAssociativity );
	cache[request.index][replacementIndex].tag = request.tag;
	os<<" [RPLCE]";
	os<<endl;
	os.close();
}