#pragma once
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

struct TwinVectors
{
	std::vector<int> rowA;
	std::vector<int> rowB;
};

class DayOne 
{
	

	TwinVectors splitInput(std::ifstream& in); 
public:
	uint32_t p1(std::ifstream& in);
	uint32_t p2(std::ifstream& in);
};