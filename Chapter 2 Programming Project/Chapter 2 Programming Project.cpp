//This program will estimate the distance to be travel on a tank of gas

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

const int sizeTank = 20;
const float cityMPG = 23.5;
const float highwayMPG = 28.9;

int inputTravelLocation() {
	std::string travelLocation;
	std::cout << "Are you traveling on 'City' roads or 'Highway' roads? \n"
			<< "Type 'City' or 'Highway for max distance estimation.' \n"
			<< "Type 'exit' to exit program.\n";
	while (true) {
		std::getline(std::cin, travelLocation);
		std::transform(travelLocation.begin(), travelLocation.end(), travelLocation.begin(), ::tolower);
		if (travelLocation == "city") {
			return cityMPG;
		}
		else if (travelLocation == "highway") {
			return highwayMPG;
		}
		else if (travelLocation == "exit") {
			return -1;
		}
		else {
			std::cout << "Invalid input. Please type 'city', 'highway' or 'exit'. \n";
		}
	}
}

float calculateDistance(float fuelEfficiency) {
	return fuelEfficiency * sizeTank;
}


int main() {
	while (true) {
		float fuelEfficiency = inputTravelLocation();
		if (fuelEfficiency == -1) {
			break;
		}
		float maxDistance = calculateDistance(fuelEfficiency);
		std::cout << "You can travel " << maxDistance << " miles before your engine explodes" << std::endl;
	}
	return 0;
}