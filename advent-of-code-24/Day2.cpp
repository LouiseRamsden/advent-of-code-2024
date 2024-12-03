#include "Day2.h"

bool Day2::isSafe(std::vector<int>& inVec)
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

uint32_t Day2::p1(std::ifstream& in) 
{
	std::string str;
	int safeCount = 0;
	while (std::getline(in, str)) 
	{
		//Make temporary stream, vector and string
		std::stringstream ss(str);
		std::vector<int> vec;
		std::string temp;
		//populate vector from string and stream
		while (std::getline(ss, temp, ' '))
		{
			vec.push_back(stoi(temp));
		}
		//if safe then incrememnt safe count
		if (isSafe(vec))
			safeCount++;
	}
	return safeCount;
}
uint32_t Day2::p2(std::ifstream& in) 
{
	std::string str;
	int safeCount = 0;
	while (std::getline(in, str))
	{
		//Make temporary stream, vector and string
		std::stringstream ss(str);
		std::vector<int> vec;
		std::string temp;
		//populate vector from string and stream
		while (std::getline(ss, temp, ' '))
		{
			vec.push_back(stoi(temp));
		}
		
		//if initial vector is safe then increment safe count
		if (isSafe(vec)) 
		{
			safeCount++;
		}
		else 
		{
			//for each item in the vector test a new vector with one item missing, if that vector is safe,
			//increment safe count and exit loop
			for (int i = 0; i < vec.size(); i++)
			{
				std::vector<int> tempVec;
				for (int j = 0; j < vec.size(); j++)
				{
					if (j == i)//skip that item of the vector to make a vector without it
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