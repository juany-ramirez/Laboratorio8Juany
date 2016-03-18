#include "obras.h"
#include "arquitectonico.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Arquitectonico::Arquitectonico(string nombre, string autor,string fecha, string terreno): Obra(nombre, autor, fecha), terreno(terreno){
}
Arquitectonico::~Arquitectonico(){
}
string Arquitectonico::toString()const{
	stringstream ss;
	ss << "Arquitectonico \n	" << Obra::toString();
	return ss.str();
}