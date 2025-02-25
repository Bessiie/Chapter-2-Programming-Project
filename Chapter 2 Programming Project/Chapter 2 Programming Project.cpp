#include <iostream>

//constant for fuel tank size
float sizeFuelTank = 20;
float mpgCity = 23.5;
float mpgHighway = 28.9;

int main() {

//Calculates and assigns to distance
	float distanceOnCityMPG = mpgCity * sizeFuelTank;
	float distanceOnHighwayMPG = mpgHighway * sizeFuelTank;

//Display output
	std::cout
		<< "You would be able to travel "
		<< distanceOnCityMPG
		<< " miles on city roads until you run out of fuel."
		<< std::endl;
	std::cout
		<< "You would be able to travel "
		<< distanceOnHighwayMPG
		<< " miles on highway roads until you run out of fuel."
		<< std::endl;
	return 0;
}