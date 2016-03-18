#include "obras.h"
#include "esculturas.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Escultura::Escultura(string nombre, string autor,string fecha, double peso, string material): Obra(nombre, autor, fecha), peso(peso),material(material) {
}
Escultura::~Escultura(){
}
string Escultura::toString()const{
	stringstream ss;
	ss << "Obra Escultural \n	" << Obra::toString();
	return ss.str();
}
