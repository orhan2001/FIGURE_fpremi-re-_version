#include "Quand.h"
Quand::Quand(double a, double b, double c, double d)
{
	_name = "Quand";
	side_a = a;
	side_b = b;
	side_c = c;
	side_d = d;
}

double Quand::CalculateP() const
{
	return side_a + side_b +side_c +side_d;
}
double Quand::CalculateS() const
{
	double p = CalculateP() / 2;
	return sqrt((p-side_a)*(p-side_b)*(p-side_c)*(p-side_d)) ;
}