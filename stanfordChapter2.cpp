//stanfordChapter2.cpp: where I have my chapter 2 fun.
// 	int usingTheFeetInchesConvertorAddressVersion()

#include "stdafx.h"
#include <iostream>

using namespace std;

int metersToFeetAndInchesConvertor(int numMetres, double & feet, double & inches);

int main()
{
	return 0;
}








int usingTheFeetInchesConvertorAddressVersion()
{
	int metres;
	cout << "Enter metres." << endl;
	cin >> metres;
	double f, i;

	metersToFeetAndInchesConvertor(metres, f, i);

	cout << "That's " << f << " feet and " << i << " inches." << endl;


	return 0;
}



int metersToFeetAndInchesConvertor(int numMetres, double & feet, double & inches)
{
	const double INCH_TO_METERS_FACTOR = 0.0254;
	const int FOOT_TO_INCHES_FACTOR = 12;
	//int i;

	cout << "Enter number of meters to find in feet and inches: " << endl;
	//cin >> i;

	double rawInches = numMetres / INCH_TO_METERS_FACTOR;
	feet = int(rawInches / FOOT_TO_INCHES_FACTOR);
	inches = rawInches - feet*FOOT_TO_INCHES_FACTOR;

	cout << "That's this many inches: " << rawInches << "! Now in feet and inches: " << feet << " feet, "
		<< inches << " inches." << endl;

	return 0;
}
