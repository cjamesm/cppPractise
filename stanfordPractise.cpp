// stanfordPractise.cpp : Defines the entry point for the console application.
// int celsiusToFahrenheitConvertor();
// int metersToFeetAndInchesConvertor();
// int computeGaussSum()
// int weirdOddNumberSum()
// int gimmeLargestNumber()
// int averageList()
// int primeFactorisation()
// int hofstadter()
// int leibniz()
// int piCircleMethod()
// 



#include "stdafx.h"
#include <iostream>

using namespace std;

const double INCH_TO_METERS_FACTOR = 0.0254;
const int FOOT_TO_INCHES_FACTOR = 12;
const int SENTINEL = -1;




int main()
{


	return 0;
}









int piCircleMethod()
{
	double piEstimate = 0.0;
	int radius = 2, numberOfRectangles = 50000;
	double w = double(radius) / numberOfRectangles;
	
	cout << "Here we're going to calculate pi by looking at the area of a circle, radius " << radius << "." << endl;
	cout << "There are " << numberOfRectangles << " rectangles of " << w << " width." << endl;

	for (int i = 1; i < numberOfRectangles; i++)
	{
		double x = w * i;
		double h = sqrt(radius*radius - x*x);

		piEstimate += h*w;

	}
	cout << "Then if everything hasn't gone horrible wrong, we should have pi!" << endl;

	cout << "So here it is... pi=" << piEstimate << ". Was it right? You decide!" << endl;
	
	return 0;
}

int leibniz()
{
	//Did I really do the type conversion right here? I mean, Leibniz ain't accurate but only accurate to 3dp?!
	cout << "I distinctly remember doing this one at my course at uni! Here we go." << endl;
	
	double sum = 0;

	for (int i = 0; i < 10000; i++)
	{
		double term = 1.0 / (1.0 + 2*i);

		if (i % 2 == 0)
		{
			sum += term;
		}
		else
		{
			sum -= term;
		}
	}
	cout << "pi/4 is " << sum << " so pi=" << sum * 4 << ", isn't it" << endl;
	
	return 0;
}

int hofstadter()
{
	int n, iterations = 0;

	cout << "Enter a number to make it hailstone!" << endl;
	cin >> n;

	while (n != 1)
	{
		if (n % 2 == 0)
		{
			//Ooh that's an interesting bug... if we put the expression in the cout line, it seems to evaluate
			// right to left and so the value of n is broken afterwards! Easiest thing to do: split the statements.
			//cout << n << " is even so we divide it by 2 to make " << (n /= 2) << "!" << endl;
			cout << n << " is even so we divide it by 2 to make ";
			cout << (n /= 2) << "!" << endl;
		}
		else
		{
			cout << n << " is odd so we multiply by 3 and add 1 to make ";
			cout << (n = n * 3 + 1) << "!" << endl;
		}
		iterations++;
	}
	cout << "We've now reached 1 so we can stop! Phew! It only took " << iterations << " iterations!" << endl;


	return 0;
}


int primeFactorisation()
{
	int n;
	cout << "Enter a number to get the prime factorisation." << endl;
	cin >> n;
	cout << "The number is: " << n << ", so here we go." << endl;

	int currentNumber = 2;
	while (n != 1)
	{
		if (n % currentNumber == 0)
		{ 
			n /= currentNumber;
			cout << currentNumber;
			cout << (n != 1 ? " x " : "\n");
			
		}
		else
		{
			currentNumber++;
		}
	}
	return 0;
}




int reverseDigits()
{
	int result = 0, n;
	cout << "Gimme an integer, I'll give the digits in reverse order" << endl;
	cin >> n;
	while (n > 0)
	{
		result *= 10;
		result += n % 10;
		n /= 10;

	}
	cout << "result: " << result << endl;
	return 0;
}

int averageList()
{
	cout << "This program finds the average of a list of numbers." << endl;
	cout << "Use " << SENTINEL << " to signal the end." << endl;
	int total = 0, cardinality = 0;
	while (true)
	{
		int value;
		cout << " ? ";
		cin >> value;
		if (value == SENTINEL) break;
		total += value;
		cardinality++;
	}
	cout << "The average is " << total / cardinality << endl;
	return 0;
}









int gimmeLargestNumber()
{
	int i;
	int largestNumber = 0, secondLargest = 0;
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
		{
			secondLargest = largestNumber;
			largestNumber = i;
		}
	}
	cout << "The largest number ended up being: " << largestNumber << " and the second largest: " << secondLargest << endl;
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

