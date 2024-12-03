#pragma once
#include "stl.h"

struct TwinVectors
{
	std::vector<int> rowA;
	std::vector<int> rowB;
};

class Day1 
{
	

	TwinVectors splitInput(std::ifstream& in); 
public:
	uint32_t p1(std::ifstream& in);
	uint32_t p2(std::ifstream& in);
};