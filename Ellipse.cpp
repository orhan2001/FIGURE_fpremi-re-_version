#include "Ellipse.h"
#include <iostream>

using namespace std;


Ellipse::Ellipse(double a, double b)
{
	_name = "Ellipse";
	R_a = a;
	R_b = b;

}

double Ellipse::CalculateS() const
{
	return PI*R_a*R_b;
}

double Ellipse::CalculateP() const
{
	return 2*PI*sqrt((pow(R_a,2) + pow(R_b, 2))/2);
}