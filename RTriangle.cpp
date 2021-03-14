#include "Triangle.h"
#include "RTriangle.h"
#include "Figure.h"


using namespace std;
 
RTriangle::RTriangle(double a, double b) :Triangle(a, b, sqrt((a* a) + (b * b)))
{
	_name = "RTriangle" ;
	side_a = a;
	side_b = b ;
	
}
//
//double RTriangle::CalculateS() const
//{
//	return (side_a*side_b)/2;
//}
//
//double RTriangle::CalculateP() const
//{
//	double c = sqrt((side_a * side_a) + (side_b * side_b));
//	return  side_a + side_b + c ;
//}


