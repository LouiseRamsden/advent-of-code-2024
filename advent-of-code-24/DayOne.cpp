#include "DayOne.h"
#include <sstream>
#include <algorithm>


DayOne::TwinVectors DayOne::splitInput(std::ifstream& in) 
{
	std::string str;
	TwinVectors outStruct = {};

	//Splits each column into two separate vectors in the TwinVector Struct
	while (std::getline(in, str))
	{
		std::stringstream ss(str);
		std::string temp;
		std::getline(ss, temp, ' ');
		outStruct.rowA.push_back(stoi(temp));
		std::getline(ss, temp, ' ');//Gross
		std::getline(ss, temp, ' ');//Gross
		std::getline(ss, temp, ' ');//Gross
		outStruct.rowB.push_back(stoi(temp));
	}
	return outStruct;
}

uint32_t DayOne::p1(std::ifstream& in) 
{
	//Make both vectors
	TwinVectors vecs = splitInput(in);
	
	//sorts both vector
	std::stable_sort(vecs.rowA.begin(), vecs.rowA.end());
	std::stable_sort(vecs.rowB.begin(), vecs.rowB.end());

	uint32_t result = 0;

	//adds the absolute value of the difference of each cell of two sorted vectors to the result
	for (int i = 0; i < vecs.rowA.size(); i++) 
	{
		result += std::abs(vecs.rowA[i] - vecs.rowB[i]);
	}

	return result;

}

uint32_t DayOne::p2(std::ifstream& in) 
{
	//Make both vectors
	TwinVectors vecs = splitInput(in);

	uint32_t result = 0;

	//Multiplies RowA by the amount of times it occurs in row B then adds to result
	for (int i = 0; i < vecs.rowA.size(); i++)
	{
		result += vecs.rowA[i] * std::count(vecs.rowB.begin(), vecs.rowB.end(), vecs.rowA[i]);
	}

	return result;
}
