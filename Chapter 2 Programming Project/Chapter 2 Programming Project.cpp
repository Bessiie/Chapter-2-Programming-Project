#include <iostream>
#include <limits>
#include <string>

//Declare Global constants
const int currentYear = 2025;
const float oceanlvlIncrease = 1.5;

//This Function ask user for the target year for estimation and calculate the difference inbetween the current and target year.
int calcYearDiff()	{
	int targetYear;
	std::cout << "Enter target year for ocean level increase prediction or type 'exit'.\n";

	//This while loop checks if the input value is valid.
	while (true) {
		if (std::cin >> targetYear) {
			if (targetYear > currentYear) { //the target year must be larger than the current year.
				return targetYear - currentYear;//return the difference inbetween the current and target year.
			} else {//clears inputs and outputs error message then ask for reinput
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Target year must be greater than current year. Please enter valid target year or type 'exit'.\n";
			}
		} else {//if a string was input then this else statement will check if 'exit' input
			std::string input;
			std::cin.clear();
			std::getline(std::cin, input);
			if (input == "exit") {
				return -1;//the exit value
			}
			else {
				std::cout << "Invalid input. Please enter a valid year or type 'exit'.\n";//error statement incase the input was not an 'exit' string or an integer above 2025
			}
		}
	}
}
//Function calculates the predicted ocean level
float calcPredictedOceanLevel(int yearDifference) {
	return yearDifference * oceanlvlIncrease;
}

int main() {
	while (true) {
		int yearDifference = calcYearDiff();
		if (yearDifference == -1) {// if exit value matchs this program will quit
			break;
		}
		//outputs the values
		float predictedOceanLevel = calcPredictedOceanLevel(yearDifference);
		std::cout << "The ocean level will be " << predictedOceanLevel
			<< " cm higher than the current level in "
			<< (currentYear + yearDifference) << "." << std::endl;
	}
	return 0;
}