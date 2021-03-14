#include "Circle.h"


Circle::Circle(double D):Ellipse(D,D)
{
	_name = "Circle";
	r_D = D;

}
double Circle::CalculateP() const
{
	return r_D*PI;
}
double Circle::CalculateS() const
{
	return pow(r_D,2) * PI;
}