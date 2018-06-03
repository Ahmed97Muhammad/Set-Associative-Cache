#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;


typedef unsigned int uint;

typedef struct cacheLine 
{
	uint 	tag;
	uint	index;
	uint	offset;
} CacheLine;

typedef struct cache
{
	bool	valid;
	uint	padding: 3; //limiting to 3 bits
	uint	tag;
} Cache;

ref class Assoc
{
public:
	static uint getN(uint startPoint, uint cacheBlockSize);
	static uint getN(uint cacheBlockSize);
	static uint createMask(uint retval, uint current, uint length, uint offset);
	static uint createMask(uint length, uint offset);
	static void memAccess(const CacheLine param, uint accessAt, CacheLine *result);
	static bool cacheSetIsValid(Cache **cache, uint nAssociativity, CacheLine request);
	static bool cacheSetTagMatch(Cache **cache, uint nAssociativity, CacheLine request);
	static void insertIntoCache(Cache **cache, uint nAssociativity, CacheLine request);
protected:
private:
};
