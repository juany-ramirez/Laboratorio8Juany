#include "obras.h"
#include "esculturas.h"
#include "pinturas.h"
#include "arquitectonico.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <sstream>
#include <string>

using std::string;
using std::stringstream;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::cin;
using std::cout;
using std::ostream;

void imprimirMenu();
void imprimirMenu2();
void imprimirLista(vector<Obra> );

int main(int argc, char* argv[]){
	vector<Obra> obras;
	int opcionMenu, opAgregar, opListar;
/*
	lista.push_back(a);
	lista.push_back(b);
	lista.push_back(c);

	lista.push_back(Racional(numerador,denominador));
	Square squa(Point(10, 3), 12);
*/
	do{
		
		imprimirMenu();
		cin >> opcionMenu;
		

		if(opcionMenu == 1){

			cout<< "---------------------AGREGAR OBRA---------------------"<< endl;
			imprimirMenu2();
			cin >> opAgregar;
            
        }else if(opcionMenu == 2){
        	
        }else if(opcionMenu == 3){
        	
        }
 	}while(opcionMenu!=4);
	return 0;
}

void imprimirMenu(){
	cout<< "---------------------MENU---------------------"<< endl;
    cout<< "Ingresar opcion del menu:"<< endl;
    cout<< "1. Agregar obras"<<endl;
    cout<< "2. Reporteria"<<endl;
    cout<< "3. Eliminar las obras"<<endl;
    cout<< "4. Salir"<<endl;

}

void imprimirMenu2(){
	
    cout<< "1. Literatura"<<endl;
    cout<< "2. Escultura"<<endl;
    cout<< "3. Pintura"<<endl;
    cout<< "4. Diseno Arquitectonico"<<endl;

}

void imprimirLista(vector<Obra> arreglo){
	for (int i = 0; i < arreglo.size(); ++i){
		cout << i+1 << ". ";
		cout << arreglo.at(i).toString();
		cout << endl;
	}
}
