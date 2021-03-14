#include "Triangle.h"
#include <iostream>
#include <cmath>

using namespace std;


Triangle::Triangle(double a, double b, double c)
{
	_name = "Triangle";
	side_a = a;
	side_b = b;
	side_c = c;
}





double Triangle::CalculateP() const 
{

	return side_a + side_b + side_c ;
}


double Triangle::CalculateS() const
{
	double const  p = CalculateP() / 2;
	return sqrt(p*(p-side_a)*(p-side_b)*(p-side_c));
}
