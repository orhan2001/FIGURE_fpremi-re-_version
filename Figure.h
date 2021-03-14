#pragma once
#include <iostream>
#include <string>
using namespace std;
class Figure {
public: 

	virtual double CalculateS() const = 0;
	virtual double CalculateP() const = 0;


	
	string getName() const ;



protected:
	string _name;
};

