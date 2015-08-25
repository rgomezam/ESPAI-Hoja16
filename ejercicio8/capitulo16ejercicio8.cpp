//============================================================================
// Name        : capitulo16ejercicio8.cpp
// Author      : Raquel Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "GestorHospital.h"
#include "Personal.h"

GestorHospital gestor1;
char opt,opt2;

int main() {

	cout << "Bienvenido al hospital" << endl;




	while(true){
		cout << "Que quiere hacer? \n a) Alta personal \n b) Baja personal \n c) Ver ficha \n d) Listado total \n e) Personal en planta \n f) Personal en el hospital \n otro) Salir" << endl;
		cin >> opt;

		switch(opt){
		case 'a':
				gestor1.altaPersonal();
			break;

		case 'b':
					gestor1.bajaPersonal();
				break;
		case 'c':
				cout << "Ver ficha: Quiere introducir la hora de entrada o de salida? Pulse e/s" << endl;
				cin >> opt2;

				switch(opt2){
				case 'e':
					gestor1.registrarEntrada();
					break;
				case 's':
					gestor1.registrarSalida();
					break;
				}
			break;

			case 'd':
				cout << "Listado total" << endl;
				gestor1.listadoTotal();
				break;

			case 'e':
				cout << "Personal el planta. Que planta quiere ver?" << endl;
				gestor1.personalenPlanta();
				break;

			case 'f':
				cout << "Personal trabajando ahora:" << endl;
				gestor1.personalActivo();
				break;

			default:
				return 0;
		}

	}
	return 0;
}
