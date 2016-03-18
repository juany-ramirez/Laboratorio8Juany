#pragma once
#include "obras.h"

#include <string>
using std::string;

class Pintura:public Obra{
	string lienzo, tecnica;
  public:
	Pintura(string, string, string, string, string );
	virtual ~Pintura();
	virtual string toString()const;
};