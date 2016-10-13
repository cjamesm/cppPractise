// stanfordPractise.cpp : Defines the entry point for the console application.
// int celsiusToFahrenheitConvertor();
// int metersToFeetAndInchesConvertor();
// int computeGaussSum()
// int weirdOddNumberSum()
// 

#include "stdafx.h"
#include <iostream>
using namespace std;
const double INCH_TO_METERS_FACTOR = 0.0254;
const int FOOT_TO_INCHES_FACTOR = 12;

int main()
{
	return 0;
}



int gimmeLargestNumber()
{
	int i;
	int largestNumber = 0;
	cout << "Keep hitting numbers until you get bored and then hit 0, then I'll give you the largest, because I'm nice like that." << endl;
	while (true)
	{
		cin >> i;
		if (i == 0)
		{
			cout << "The sentinel was triggered. GLARG." << endl;
			break;
		}
		if (i > largestNumber)
			largestNumber = i;
	}
	cout << "The largest number ended up being: " << largestNumber << endl;
	return 0;
}






int weirdOddNumberSum()
{
	int input;
	cout << "Stick in a number to see the sum of the first N odd numbers... (yeah I know it's weird." << endl;
	cin >> input;
	
	int result = 0;


	for (int i = 0; input > 0; input--, i++)
	{
		result += 1 + 2 * i;
	}

	cout << "And that magical number you've all been waiting for is: " << result << ", so we can all die happy now." << endl;

	return 0;
}





int computeGaussSum()
{
	int limit = 100;
	int result = 0;

	for (int i = 1; i <= limit; i++)
	{
		result += i;
	}

	cout << "Sum from 1 to " << limit << " is " << result << endl;

	return 0;
}




int metersToFeetAndInchesConvertor()
{
	int i;

	cout << "Enter number of meters to find in feet and inches: " << endl;
	cin >> i;

	double rawInches = i / INCH_TO_METERS_FACTOR;
	int feetResult = rawInches / FOOT_TO_INCHES_FACTOR;
	double inchesResult = rawInches - feetResult*FOOT_TO_INCHES_FACTOR;

	cout << "That's this many inches: " << rawInches << "! Now in feet and inches: " << feetResult << " feet, "
		<< inchesResult << " inches." << endl;



	cout << "Hit a key to exit." << endl;
	cin >> i;

	return 0;
}



int celsiusToFahrenheitConvertor()
{
	int i;
	cout << "Enter number to convert from C to F: " << endl;
	cin >> i;

	double result = 9.0*i / 5 + 32.0;

	cout << "Result in Fahreheit is.... " << result << ", baby." << endl;

	cout << "Hit a key to exit." << endl;
	cin >> i;

    return 0;
}

