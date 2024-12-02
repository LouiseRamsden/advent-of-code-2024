#include "DayTwo.h"

uint32_t DayTwo::p1(std::ifstream& in) 
{
	std::string str;
	int safeCount = 0;
	while (std::getline(in, str)) 
	{
		int unsafeFlag = 0;
		std::stringstream ss(str);
		std::vector<int> vec;
		std::string temp;
		while (std::getline(ss, temp, ' '))
		{
			vec.push_back(stoi(temp));
		}
		if (!std::is_sorted(vec.begin(), vec.end()))
		{
			std::reverse(vec.begin(), vec.end());
			if (!std::is_sorted(vec.begin(), vec.end()))
				continue;
		}
		for (int i = 0; i < vec.size() -1; i++) 
		{
			if (std::abs(vec[i] - vec[i + 1]) > 3 || std::abs(vec[i] - vec[i + 1]) == 0) 
			{
				unsafeFlag = 1;
			}
		}
		if(unsafeFlag == 0)
			safeCount++;

		
	}
	return safeCount;
}
uint32_t DayTwo::p2(std::ifstream& in) 
{
	std::string str;
	int safeCount = 0;
	while (std::getline(in, str))
	{
		int unsafeFlag = 0;
		std::stringstream ss(str);
		std::vector<int> vec;
		std::string temp;
		while (std::getline(ss, temp, ' '))
		{
			vec.push_back(stoi(temp));
		}
		if (!std::is_sorted(vec.begin(), vec.end()))
		{
			std::reverse(vec.begin(), vec.end());
			if (!std::is_sorted(vec.begin(), vec.end()))
				continue;
		}

	}
}