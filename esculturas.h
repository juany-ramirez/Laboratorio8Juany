#pragma once
#include "obras.h"

#include <string>
using std::string;

class Escultura:public Obra{
	double peso;
	string material;
  public:
	Escultura(string, string, string, double, string);
	virtual ~Escultura();
	virtual string toString()const;
};