#pragma once
#include "figure2d.h"
#include <string>
using std::string;

class Rectangle:public Figure2D{
	double base, height;
  public:
	Rectangle(double, double);
	virtual ~Rectangle();
	virtual string toString()const;
	double area()const;
	double perimeter()const;
	bool tall()const;
};
