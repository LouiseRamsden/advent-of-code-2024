#include "DayOne.h"
#include <sstream>
#include <algorithm>


uint32_t DayOne::p1(std::ifstream& in) 
{
	std::string str;
	std::vector<int> rowA;
	std::vector<int> rowB;
	uint32_t result = 0;

	//Splits column into two separate vectors
	while(std::getline(in,str))
	{
		std::stringstream ss(str);
		std::string temp;
		std::getline(ss,temp,' ');
		rowA.push_back(stoi(temp));
		std::getline(ss, temp, ' ');
		std::getline(ss, temp, ' ');
		std::getline(ss, temp, ' ');
		rowB.push_back(stoi(temp));
	}

	//sorts both vector
	std::stable_sort(rowA.begin(), rowA.end());
	std::stable_sort(rowB.begin(), rowB.end());

	for (int i = 0; i < rowA.size(); i++) 
	{
		result += std::abs(rowA[i] - rowB[i]);
	}

	return result;

}

uint32_t DayOne::p2(std::ifstream& in) 
{
	std::string str;
	std::vector<int> rowA;
	std::vector<int> rowB;
	uint32_t result = 0;

	//Splits each column into two separate vectors
	while (std::getline(in, str))
	{
		std::stringstream ss(str);
		std::string temp;
		std::getline(ss, temp, ' ');
		rowA.push_back(stoi(temp));
		std::getline(ss, temp, ' ');
		std::getline(ss, temp, ' ');
		std::getline(ss, temp, ' ');
		rowB.push_back(stoi(temp));
	}

	//sorts both vectors
	std::stable_sort(rowA.begin(), rowA.end());
	std::stable_sort(rowB.begin(), rowB.end());

	for (int i = 0; i < rowA.size(); i++)
	{
		result += rowA[i] * std::count(rowB.begin(), rowB.end(), rowA[i]);
	}

	return result;
}
