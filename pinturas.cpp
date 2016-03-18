#include "obras.h"
#include "pinturas.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Pintura::Pintura(string nombre, string autor,string fecha, string material, string lienzo): Obra(nombre, autor, fecha), material(material),lienzo(lienzo) {
}
Pintura::~Pintura(){
}
string Pintura::toString()const{
	stringstream ss;
	ss << "Pintura \n	" << Obra::toString();
	return ss.str();
}