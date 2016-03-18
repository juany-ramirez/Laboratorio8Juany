#pragma once
#include "obras.h"

#include <string>
using std::string;

class Obra{
	string nombre, autor, fecha;
  public:
	Obra(string, string, string);
	virtual ~Obra();
	virtual string toString()const;
	
};
