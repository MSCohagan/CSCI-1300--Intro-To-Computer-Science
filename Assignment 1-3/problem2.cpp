//Michael Cohagan
//CSCI 1300 - Assignment 3 - Problem 2
//Karthik 

#include <iostream>

using namespace std;

// energyCalculator function to accept user input
// Double values for r for more accuracy
// A, r, H, and PR are stored in the main function
// and run when energyCalculator is called
double energyCalculator(double A, double r, double H, double PR)
{
	
	//Declaration of variables
	double average_energy = A * r * H * PR;
	
	// We return average_energy with the
	// value stored after calculation
	return average_energy;


}
// Using the same inputs for A, H, and PR as the previous 
// function, this function sets r equal to the efficiency value
// and calculates the energy average as r changes in the while loop
// below. This function is void because the cout statement returns
// the value to the main function. 
void printEnergy(double A, double r, double H, double PR ){
	
	//Use of double values for more accuracy 
	double efficiency_value = r;
	double annual_energy_ave = A * r * H * PR;
	cout << " The average annual solar energy for an efficiency of " << efficiency_value 
	<< " is " << annual_energy_ave << " kWh." << endl;
	
	
	
}
// This function calculates the number of houses supported 
// by gathering the average energy from the calculate energy
// function and dividing it by the average annual energy usage
// in Colorado annually 
// Calculate as int because there are no partial households
int calculateNumberHousesSupported(double average_energy, double coloradoAverage){
	
	// Double values are required here because the values 
	// going into the calculation are already 
	// of the double data type
	double number_houses_supported = average_energy / coloradoAverage;
	return number_houses_supported;
	
	
}

	
	
int main(){
	// Delcaration of variables
	// Variables assigned by user input
	double A, r, H, average_energy;
	cout << "Input area of solar array in meters squared: ";
	cin >> A;
	cout << "Input solar panel efficiency as percentage: ";
	cin >> r; 
	cout << "Input average solar radiation: ";
	cin >> H;
	
	double PR = .75;
	0
	0
	// Reinitialize Average Energy to run function
	average_enregy = energyCalculator(A, r, H, PR);
	cout << "The average annual solar energy production is " << average_energy << " kWh." << endl;
	
	// This while loop augments the value of r
	// that is run in the function printEnergy
	r = .1; 
	while(r < .36)
	{
		printEnergy(A, r, H, PR);
		r = r + .05;
	}
		
	// Move on to the function calculateNumberHousesSupported
	// use average energy from energyCalculator
	// Assign the average usage of energy in Colorado 
	double coloradoAverage = 8500;
	int number_houses_supported = calculateNumberHousesSupported(average_energy, coloradoAverage);
	cout << number_houses_supported << " houses can be supported. " << endl;
	

}