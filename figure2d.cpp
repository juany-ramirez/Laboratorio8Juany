#include "figure2d.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Figure2D::Figure2D(){}
Figure2D::~Figure2D(){}
string Figure2D::toString()const{
	stringstream ss;
	ss << "Figure2D @ " << this;
	return ss.str();
}
