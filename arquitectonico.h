#pragma once
#include "obras.h"

#include <string>
using std::string;

class Arquitectonico:public Obra{
	string terreno;
  public:
	Arquitectonico(string, string, string, string);
	virtual ~Arquitectonico();
	virtual string toString()const;
};