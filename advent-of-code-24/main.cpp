#include "aoc24.h"
#include <fstream>
#include <iostream>
#include <string>

int main() 
{

	std::ifstream inFile("input.txt");
	DayOne d1;
	std::cout << d1.p2(inFile);
}