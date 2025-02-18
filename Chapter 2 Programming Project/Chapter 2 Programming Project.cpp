#include <iostream>
#include <limits>

void clearinputs() {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int currentYear = 2025;
float oceanlvlIncrease = 1.5;

int calcYearDiff()	{
	int targetYear;
	std::cout << "Enter target year for ocean level increase prediction.\n";

	while (true) {
		if (std::cin >> targetYear) {
			if (targetYear >= currentYear) {
				return targetYear - currentYear;
			} else {
				clearinputs();
				std::cout << "Target year must be greater than current year. Please enter valid target year.\n";
			}
		} else {
			clearinputs();
			std::cout << "Invalid input. Please enter a valid year.\n";
		}
	}
}

float calcPredictedOceanLevel(int yearDifference) {
	return yearDifference * oceanlvlIncrease;
}

int main() {
	int yearDifference = calcYearDiff();
	float predictedOceanLevel = calcPredictedOceanLevel(yearDifference);
	std::cout << "The ocean level will be " << predictedOceanLevel
		<< " cm higher than the current level in "
		<< (currentYear + yearDifference) << "." << std::endl;
	return 0;
}