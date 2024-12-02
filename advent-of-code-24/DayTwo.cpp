#include "DayTwo.h"

bool DayTwo::isSafe(std::vector<int>& inVec)
{
	if (!std::is_sorted(inVec.begin(), inVec.end()))
	{
		std::reverse(inVec.begin(), inVec.end());
		if (!std::is_sorted(inVec.begin(), inVec.end()))
			return false;
	}
	for (int i = 0; i < inVec.size() - 1; i++)
	{
		if (std::abs(inVec[i] - inVec[i + 1]) > 3 || std::abs(inVec[i] - inVec[i + 1]) == 0)
		{
			return false;
		}
	}
	return true;
}

uint32_t DayTwo::p1(std::ifstream& in) 
{
	std::string str;
	int safeCount = 0;
	while (std::getline(in, str)) 
	{
		std::stringstream ss(str);
		std::vector<int> vec;
		std::string temp;
		while (std::getline(ss, temp, ' '))
		{
			vec.push_back(stoi(temp));
		}
		if (isSafe(vec))
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
		
		if (isSafe(vec)) 
		{
			safeCount++;
		}
		else 
		{
			for (int i = 0; i < vec.size(); i++)
			{
				std::vector<int> tempVec;
				for (int j = 0; j < vec.size(); j++)
				{
					if (j == i)
					{
						continue;
					}
					tempVec.push_back(vec[j]);
				}
				if (isSafe(tempVec)) 
				{
					safeCount++;
					break;
				}
			}
		}
	}
	return safeCount;
}