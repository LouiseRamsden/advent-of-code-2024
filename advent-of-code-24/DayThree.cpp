#include "DayThree.h"


int DayThree::parseMul(std::string mulExp) 
{
	std::regex intRegex("(-?\\d+)");
	int a, b;
	std::smatch res;
	std::string::const_iterator searchStart(mulExp.cbegin());
	std::regex_search(searchStart, mulExp.cend(), res, intRegex);
	a = stoi(res[0].str());
	searchStart = res.suffix().first;
	std::regex_search(searchStart, mulExp.cend(), res, intRegex);
	b = stoi(res[0].str());
	return a * b;
}

uint32_t DayThree::p1(std::ifstream& in) 
{
	int result = 0;
	std::regex mulRegex("mul\\((\\d{1,3}),\\s*(\\d{1,3})\\)");
	std::smatch res;
	std::string str;
	while (std::getline(in, str)) 
	{
		std::string::const_iterator searchStart(str.cbegin());
		while (std::regex_search(searchStart, str.cend(), res, mulRegex))
		{
			result += parseMul(res[0].str());
			searchStart = res.suffix().first;
		}
	}
	
	return result;
}
uint32_t DayThree::p2(std::ifstream& in) 
{
	int result = 0;
	std::regex mulRegex("mul\\((\\d{1,3}),\\s*(\\d{1,3})\\)");
	std::smatch res;
	std::string str;
	while (std::getline(in, str))
	{
		std::string::const_iterator searchStart(str.cbegin());
		while (std::regex_search(searchStart, str.cend(), res, mulRegex))
		{
			result += parseMul(res[0].str());
			searchStart = res.suffix().first;
		}
	}

	return result;
}