#pragma once

#include <string>
using std::string;

class Figure2D{
  public:
	Figure2D();
	virtual ~Figure2D();
	virtual string toString()const;
	virtual double area()const=0;
	virtual double perimeter()const=0;
};
