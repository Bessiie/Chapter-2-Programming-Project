
#include <iostream>

int main() {
	float sizeFuelTank = 20;
	float distanceOnCityMPG = 23.5 * sizeFuelTank;
	float distanceOnHighwayMPG = 28.9 * sizeFuelTank;
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