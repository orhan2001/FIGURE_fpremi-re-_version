#pragma once
#include "Figure.h"
#include <cmath>
using namespace std;

class Ellipse : public Figure {
public:
	Ellipse(double a,double b);
	double CalculateS() const override;
	double CalculateP() const override;

protected:
	double R_a, R_b;
	const double PI = 3.141592653589793238463;





};