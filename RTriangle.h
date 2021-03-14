#pragma once
#include "Triangle.h"
#include "Figure.h"

class RTriangle :public Triangle{

public: 
	RTriangle(double a, double b);

	/*double  CalculateP() const override;
	double  CalculateS() const override;*/

protected:
	double side_a, side_b;
};