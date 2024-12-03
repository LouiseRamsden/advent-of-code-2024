#include "aoc24.h"
#include "stl.h"

int main() 
{
	std::ifstream inFile("input.txt");
	

	//DAY ONE!
	//DayOne d1;
	//std::cout << d1.p1(inFile);
	//std::cout << d1.p2(inFile);

	//DAY TWO!
	//DayTwo d2;
	//std::cout << d2.p1(inFile);
	//std::cout << d2.p2(inFile);

	//DAY THREE!
	Day3 d3;
	//std::cout << d3.p1(inFile);
	std::cout << d3.p2(inFile);



//	auto start = std::chrono::high_resolution_clock::now();
//	std::ios_base::sync_with_stdio(false);
//	
//	auto end = std::chrono::high_resolution_clock::now();
//
//	double timeTaken = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
//	timeTaken *= 1e-9;
//
//	std::cout << "\n Time taken is : " << std::fixed << timeTaken << std::setprecision(9);
//	std::cout << " sec " << "\n";
	
}