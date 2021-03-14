#pragma once
#include "Quand.h"

class Rectangle : public Quand {

public :
	Rectangle(double a, double b);
protected:
	double side_a, side_b;
};