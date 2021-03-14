#pragma once
#include "Figure.h" 
using namespace std;



class Quand : public Figure {
public:
	Quand(double a,double b,double c, double d);
					
	double CalculateS() const override;
	double CalculateP() const override;
protected:
	double side_a, side_b,side_c, side_d;


};