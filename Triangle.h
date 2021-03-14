#pragma once
#include "Figure.h"
using namespace std;

class Triangle : public Figure {

public:
	Triangle(double a, double b, double c);

	double CalculateP() const override;
	double CalculateS() const override;



protected:

	double side_a;
	double side_b;
	double side_c;
};