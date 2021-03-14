#include "ITriangle.h"
#include <cmath>

ITriangle::ITriangle(double a, double b):Triangle(a,a,b)
{
	_name = "ITriangle";
	side_a = a;
	side_b = b;
}


//double ITriangle::CalculateP() const
//{
//	return 2*side_a + side_b;
//}
//
//double ITriangle::CalculateS() const
//{
//	return (side_b/4)*sqrt(4*pow(side_a,2) - pow(side_b,2));
//}
//

