#include "obras.h"
#include "literatura.h"
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
	vector<Obra> lista;
	vector<Obra> transferencias;
	int opcionMenu, opAgregar, opListar;
	do{
		
		cout << endl;
		imprimirMenu();
		cin >> opcionMenu;


		if(opcionMenu == 1){

			cout<< "---------------------AGREGAR OBRA---------------------"<< endl;
			imprimirMenu2();
			cin >> opAgregar;
			string nombre, autor, fecha;

			if(opAgregar>0 && opAgregar<5){
				cout<< "Ingresar el nombre de la obra: ";
				cin >>  nombre;
				cout<< "Ingresar el nombre del autor/ artista: ";
				cin >> autor;
				cout<< "Ingresar la fecha de creacion: ";
				cin >> fecha;
			}

			string genero, epoca;

			double peso;
			string material1;

			string lienzo, tecnica;

			string terreno;

			if(opAgregar == 1){
	            cout<< "\tLiteratura"<<endl;
	            cout<< "Ingresar el genero: ";
	            cin >> genero;
	            cout<< "Ingresar la epoca: ";
	            cin >> epoca;
	            Literatura lit(nombre, autor, fecha, genero, epoca);
	            lista.push_back(lit);
	        }else if(opAgregar == 2){
	        	cout<< "\tEscultura"<<endl;
	        	cout<< "Ingresar el peso: ";
	            cin >> peso;
	            cout<< "Ingresar el material: ";
	            cin >> material1;
	            Escultura esc (nombre, autor, fecha, peso, material1);
	            lista.push_back(esc);

	        }else if(opAgregar == 3){
	        	cout<< "\tPintura"<<endl;
	        	cout<< "\tEscultura"<<endl;
	        	cout<< "Ingresar el material del lienzo: ";
	            cin >> lienzo;
	            cout<< "Ingresar la tecnica: ";
	            cin >> tecnica;
	            Pintura pint (nombre, autor, fecha, lienzo, tecnica);
	            lista.push_back(pint);

	        }else if(opAgregar == 4){
	        	cout<< "\tDiseno Arquitectonico"<<endl;
	        	cout<< "Ingresar el tipo de terreno: ";
	            cin >> terreno;
	            Arquitectonico arc(nombre, autor, fecha, terreno);
	            lista.push_back(arc);
	        }
	        

        }else if(opcionMenu == 2){
        	cout<< "---------------------LISTAR---------------------"<< endl;
		    cout<< "Ingresar opcion del menu:"<< endl;
		    cout<< "1. Obras del museo"<<endl;
		    cout<< "2. Obras transferidas"<<endl;
		    cin >> opListar;
		    if(opListar == 1){
        		imprimirLista(lista);
			} else if(opListar == 2){
				imprimirLista(transferencias);
			}       	
        }else if(opcionMenu == 3){
        	int pos;
        	imprimirLista(lista);
        	cout<< "Ingresar el numero de la obra que desea Transferir: ";
        	cin >> pos;
        	transferencias.push_back(lista.at(pos));
        	lista.erase(lista.begin()+pos);
        }
 	}while(opcionMenu!=4);
	return 0;
}

void imprimirMenu(){
	cout<< "---------------------MENU---------------------"<< endl;
    cout<< "Ingresar opcion del menu:"<< endl;
    cout<< "1. Agregar obras"<<endl;
    cout<< "2. Reporteria"<<endl;
    cout<< "3. Transferir las obras"<<endl;
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
		cout << i << ". ";
		cout << arreglo.at(i).toString();
		cout << endl;
	}
}
