#include "figure2d.h"
#include "rectangle.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Rectangle::Rectangle(double base, double height):base(base), height(height){
}
Rectangle::~Rectangle(){
}
string Rectangle::toString()const{
	stringstream ss;
	ss << "Rectangle";
	return ss.str();
}
double Rectangle::area()const{
	return base * height;
}
double Rectangle::perimeter()const{
	return 2 * base + 2 * height;
}
bool Rectangle::tall()const{
	return base < height;
}
