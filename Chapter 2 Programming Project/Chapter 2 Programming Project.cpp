#include <iostream>

const int surveyedCustomers = 16500;
const float percentMultipleWeeklyPurchasers = .15;
const float percentCitrusLovers = .58;

float totalMultipleWeeklyPurchasers() {
	return surveyedCustomers * percentMultipleWeeklyPurchasers;
}

float totalCitrusLovers(float MultipleWeeklyPurchasers) {
	return MultipleWeeklyPurchasers * percentCitrusLovers;
}

int main() {
	float MultipleWeeklyPurchasers = totalMultipleWeeklyPurchasers();
	float CitrusLovers = totalCitrusLovers(MultipleWeeklyPurchasers);
	std::cout << "The total amount of people who purchase one or more energy drinks per week: " << MultipleWeeklyPurchasers << "\n"
		<< "The total amount of CitrusLovers: " << CitrusLovers << std::endl;
}