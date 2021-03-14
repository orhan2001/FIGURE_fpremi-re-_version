#pragma once
#include "Ellipse.h"

using namespace std;

class Circle : public Ellipse {
public:
	Circle(double D);
	double CalculateS() const override;
	double CalculateP() const override;
protected:
	double r_D;


};