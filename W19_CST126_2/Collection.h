#pragma once
#include "Bottle.h"

class Collection
{
public:
	Collection(std::ifstream file);
	double getTotalValue() const;
	void printCollection() const;

private:
	Bottle bottles[30];
	int bottleCount;
};
