#include "obras.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Obra::Obra(string nombre, string autor, string fecha): nombre(nombre), autor(autor), fecha(fecha)
{}

Obra::~Obra(){}

string Obra::toString()const{
	stringstream ss;
	ss << nombre << " - Por "  << autor << " Creacion:  " << fecha;
	return ss.str();
}