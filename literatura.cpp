#include "obras.h"
#include "literatura.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Literatura::Literatura(string nombre, string autor,string fecha,string genero,string epoca): Obra(nombre, autor, fecha), genero(genero),epoca(epoca) {
}
Literatura::~Literatura(){
}
string Literatura::toString()const{
	stringstream ss;
	ss << "Obra Literaria \n	" Obra::toString();
	return ss.str();
}
