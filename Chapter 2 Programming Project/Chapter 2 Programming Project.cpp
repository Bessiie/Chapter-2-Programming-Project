#include <iostream>
#include <iomanip>


const float surveyedCustomers = 16500;
const float percentMultipleWeeklyPurchasers = .15;
const float percentCitrusLovers = .58;

// Function to calculate the total number of customers who purchase one or more energy drinks per week
float totalMultipleWeeklyPurchasers() {
	return surveyedCustomers * percentMultipleWeeklyPurchasers;
}

// Function to calculate the total number of citrus lovers among multiple weekly purchasers
float totalCitrusLovers(float MultipleWeeklyPurchasers) {
	return MultipleWeeklyPurchasers * percentCitrusLovers;
}

//Main function for output
int main() {
	float MultipleWeeklyPurchasers = totalMultipleWeeklyPurchasers();
	float CitrusLovers = totalCitrusLovers(MultipleWeeklyPurchasers);
	// Set the output precision to 0 decimal places (rounding to nearest whole number)
	std::cout << std::fixed << std::setprecision(0);
	// Output the results to the console
	std::cout 
		<< "The total amount of people who purchase one or more energy drinks per week: " << MultipleWeeklyPurchasers << "\n"
		<< "The total amount of CitrusLovers: " << CitrusLovers << std::endl;
	return 0;
}