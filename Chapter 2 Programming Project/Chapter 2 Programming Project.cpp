//This program will estimate the distance to be travel on a tank of gas

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

//Global Constants
const int sizeTank = 20;
const float cityMPG = 23.5;
const float highwayMPG = 28.9;

//This Function ask user if they are driving on city or highway roads.
int inputTravelLocation() {
	std::string travelLocation;
	std::cout << "Are you traveling on 'City' roads or 'Highway' roads? \n"
			<< "Type 'City' or 'Highway for max distance estimation.' \n"
			<< "Type 'exit' to exit program.\n";
	while (true) {
		
		//reads the input and lowercase the input string to avoid case issues
		std::getline(std::cin, travelLocation);
		std::transform(travelLocation.begin(), travelLocation.end(), travelLocation.begin(), ::tolower);
		
		//Compares the input to the string and returns with the corresponding mpg or exit value
		if (travelLocation == "city") {
			return cityMPG;
		}
		else if (travelLocation == "highway") {
			return highwayMPG;
		}
		else if (travelLocation == "exit") {
			return -1;
		}
		//if the input is not any of the keyterms, this else statement will ask for new input
		else {
			std::cout << "Invalid input. Please type 'city', 'highway' or 'exit'. \n";
		}
	}
}

//the function to calculate the max difference.
float calculateDistance(float fuelEfficiency) {
	return fuelEfficiency * sizeTank;
}

//the Main function
int main() {
	while (true) {
		float fuelEfficiency = inputTravelLocation();
		//if the fuelEfficiency value matches the exit value then the program will quit
		if (fuelEfficiency == -1) {
			break;
		}
		//outputs the final values
		float maxDistance = calculateDistance(fuelEfficiency);
		std::cout << "You can travel " << maxDistance << " miles until the car run out of fuel." << std::endl;
	}
	return 0;
}