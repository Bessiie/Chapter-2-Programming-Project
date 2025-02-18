#include <iostream>
#include <limits>
#include <string>

int currentYear = 2025;
float oceanlvlIncrease = 1.5;

int calcYearDiff()	{
	int targetYear;
	std::cout << "Enter target year for ocean level increase prediction or type 'exit'.\n";

	while (true) {
		if (std::cin >> targetYear) {
			if (targetYear >= currentYear) {
				return targetYear - currentYear;
			} else {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Target year must be greater than current year. Please enter valid target year or type 'exit'.\n";
			}
		} else {
			std::string input;
			std::cin.clear();
			std::getline(std::cin, input);
			if (input == "exit") {
				return -1;
			}
			else {
				std::cout << "Invalid input. Please enter a valid year or type 'exit'.\n";
			}
		}
	}
}

float calcPredictedOceanLevel(int yearDifference) {
	return yearDifference * oceanlvlIncrease;
}

int main() {
	while (true) {
		int yearDifference = calcYearDiff();
		if (yearDifference == -1) {
			break;
		}
		float predictedOceanLevel = calcPredictedOceanLevel(yearDifference);
		std::cout << "The ocean level will be " << predictedOceanLevel
			<< " cm higher than the current level in "
			<< (currentYear + yearDifference) << "." << std::endl;
	}
	return 0;
}