#pragma once
#include "ITriangle.h"

class ETriangle : public ITriangle {
public:
	ETriangle(double a);
	/*double CalculateP() const override;
	double CalculateS() const override;*/
protected:
	double side_a;

};