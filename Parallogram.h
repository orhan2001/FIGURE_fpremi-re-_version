#pragma once
#include "Quand.h"

class Paralleogram : public Quand {

public: 
	Paralleogram(double a ,double b);
	
protected:
	double side_a, side_b;
};