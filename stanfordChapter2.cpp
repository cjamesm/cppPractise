//stanfordChapter2.cpp: where I have my chapter 2 fun.
// 	int usingTheFeetInchesConvertorAddressVersion()

#include "stdafx.h"
#include <iostream>

using namespace std;

int metersToFeetAndInchesConvertor(int numMetres, double & feet, double & inches);

int roundToNearestInteger(double);

int windChillMain();
double windChill(double, double);

int main()
{
	windChillMain();
	return 0;
}

int windChillMain()
{
	double temperature, windSpeed;
	cout << "Enter some lovely numbers to check the wind chill. First the temperature." << endl;
	cin >> temperature;
	cout << "Now enter the wind speed." << endl;
	cin >> windSpeed;

	cout << "So the wind chill for those is: " << roundToNearestInteger(windChill(temperature, windSpeed)) << " arbitrary units." << endl;

	cout << "Have a good day." << endl;

	cout << "Now, here's a table. Enjoy it, for it may be your last." << endl;
	for (int i = 0; i < 65; i += 5)
	{
		for (int j = 45; j > -50; j -= 5)
		{
			if (i == 0 && j == 45)
			{
				cout << "WC\t";
			}
            else if (i == 0)
			{
				cout << j << " ";
			}
			else if (j == 45)
			{
				cout << i << "\t";
			}
			else
			{
				cout << roundToNearestInteger(windChill(j, i)) << " ";
			}
		}
		cout << endl;
	}


	return 0;

}


double windChill(double t, double v)
{
	double returnValue;

	if (v <= 0)
	{
		return t;
	}
	if (t > 40)
	{
		cerr << "This is my first error to cerr. EXITING" << endl;
		exit(EXIT_FAILURE);
	}
	double arbitraryVNumber = pow(v, 0.16);
	returnValue = 35.74 + 0.6215*t - 35.75*arbitraryVNumber + 0.4275*t*arbitraryVNumber;

	return returnValue;
}

int roundANumber()
{
	double fp;
	cout << "Enter a floating point number to round to nearest int." << endl;
	cin >> fp;

	cout << "Your number is " << fp << " and the nearest int is " << roundToNearestInteger(fp) << endl;

	return 0;

}



int roundToNearestInteger(double x)
{
	if (x < 0)
	{
		return int(x - 0.5);
	}
	else
	{
		return int(x + 0.5);
	}
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
