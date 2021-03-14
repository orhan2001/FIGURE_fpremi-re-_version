#include "ETriangle.h"

ETriangle::ETriangle(double a):ITriangle(a,a)
{
	_name = "ETriangle";
	side_a = a;
}

//double ETriangle::CalculateP() const
//{
//	return 3*side_a;
//}
//
//double ETriangle::CalculateS() const
//{
//	return (pow(side_a,2)*sqrt(3))/4;
//}