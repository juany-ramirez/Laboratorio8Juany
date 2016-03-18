#include "obras.h"
#include "pinturas.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Pintura::Pintura(string nombre, string autor,string fecha, string lienzo, string tecnica): Obra(nombre, autor, fecha),lienzo(lienzo),tecnica(tecnica) {
}
Pintura::~Pintura(){
}
string Pintura::toString()const{
	stringstream ss;
	ss << "Pintura \n	" << Obra::toString();
	return ss.str();
}