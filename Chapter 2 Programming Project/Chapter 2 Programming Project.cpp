#include <iostream>


int main() {
	float riseRate = 1.5;
	
	float levelIn5Years = riseRate * 5;
	float levelIn7Years = riseRate * 7;
	float levelIn10Years = riseRate * 10;

	std::cout 
		<< "In 5 years the ocean level will be " 
		<< levelIn5Years 
		<< " higher than the current ocean level." 
		<< std::endl;
	std::cout 
		<< "In 7 years the ocean level will be " 
		<< levelIn7Years 
		<< " higher than the current ocean level." 
		<< std::endl;
	std::cout
		<< "In 10 years the ocean level will be "
		<< levelIn10Years
		<< " higher than the current ocean level."
		<< std::endl;
	return 0;
}