/*
 * GestorHospital.cpp
 *
 *  Created on: Aug 25, 2015
 *      Author: raquel
 */

#include "GestorHospital.h"
#include <iostream>
using namespace std;
#include "Personal.h"
#include "Limpiador.h"
#include "Enfermero.h"
#include "Medico.h"

GestorHospital::GestorHospital() {
	cout << "Creando gestor" << endl;

	for (int i=0;i<400;i++){
				arrPersonal[i]=NULL;
		}
}

GestorHospital::~GestorHospital() {
	// TODO Auto-generated destructor stub
}

void GestorHospital::altaPersonal() {
string nombre1,nombre2,nombre3,espec;
int pl;
char opt2;

	cout << "Alta de prsonal. Introduzca el nombre y los apellidos, separados por espacios" << endl;
		cin >> nombre1 >> nombre2 >> nombre3 ;
		cout << "Introduzca la planta (1-4) " << endl;
		cin >> pl;
		cout << "Que tipo de personal es? \n 1) Limpieza \n 2) Enfermero \n 3) Medico" <<endl;;
		cin >> opt2;

		switch(opt2){

		case '1':
		for(int n=0; n<100; n++){
			if(arrPersonal[n]==NULL){
		   arrPersonal[n] = new Limpiador(nombre1,nombre2,nombre3,pl);
			break;
			}
		}
 break;

		case '2':
			for(int n=0; n<100; n++){
				if(arrPersonal[n]==NULL){
			   arrPersonal[n] = new Enfermero(nombre1,nombre2,nombre3,pl);
				break;
				}
			}
	 break;

		case '3':
			cout << "Cual es la especialidad de este medico?" << endl;
			cin >> espec;
				for(int n=0; n<100; n++){
					if(arrPersonal[n]==NULL){
				   arrPersonal[n] = new Medico(nombre1,nombre2,nombre3,pl,espec);
					break;
					}
				}
		 break;

		}
}

void GestorHospital::bajaPersonal() {
	string nombre1,nombre2,nombre3;

		cout << "Baja de personal. Introduzca el nombre y los apellidos, separados por espacios" << endl;
		cin >> nombre1 >> nombre2 >> nombre3 ;

		for (int m=0;m<400;m++){
			if (arrPersonal[m]!=NULL && arrPersonal[m]->getNombre()==nombre1 && arrPersonal[m]->getApellido1() == nombre2 && arrPersonal[m]->getApellido2()== nombre3)
				delete arrPersonal[m];
			arrPersonal[m]=NULL;
		}

}

void GestorHospital::registrarEntrada() {
	string nombre1,nombre2,nombre3;
	float entrada;

		cout << "Ver ficha: Introduzca el nombre y los apellidos, separados por espacios" << endl;
		cin >> nombre1 >> nombre2 >> nombre3 ;
		cout << "Introduzca la hora de entrada, en formato hh.mm" << endl;
		cin >> entrada;
		for (int m=0;m<400;m++){
					if (arrPersonal[m]!=NULL && arrPersonal[m]->getNombre()==nombre1 && arrPersonal[m]->getApellido1() == nombre2 && arrPersonal[m]->getApellido2()== nombre3)
						arrPersonal[m]->setEntrada(entrada);
				}

}


void GestorHospital::registrarSalida() {
	string nombre1,nombre2,nombre3;
	float salida;

		cout << "Ver ficha: Introduzca el nombre y los apellidos, separados por espacios" << endl;
		cin >> nombre1 >> nombre2 >> nombre3 ;
		cout << "Introduzca la hora de salida, en formato hh.mm" << endl;
		cin >> salida;
		for (int m=0;m<400;m++){
					if (arrPersonal[m]!=NULL && arrPersonal[m]->getNombre()==nombre1 && arrPersonal[m]->getApellido1() == nombre2 && arrPersonal[m]->getApellido2()== nombre3)
						arrPersonal[m]->setSalida(salida);
				}

}

void GestorHospital::listadoTotal() {

	for (int m=0;m<400;m++){
					if (arrPersonal[m]!=NULL){
						cout << m << ")" << arrPersonal[m]->getNombre() << " " << arrPersonal[m]->getApellido1() << " " << arrPersonal[m]->getApellido2();
					     cout << ", " << arrPersonal[m]->getProfesion() <<  " , planta " << arrPersonal[m]->getPlanta() << " , horarios:";
							arrPersonal[m]->getHorarios();
							cout<< endl;
					}
					}
}


void GestorHospital::personalenPlanta() {
	int pl;

	cout << "Que planta quiere ver?" << endl;
	cin >> pl;

	for (int m=0;m<400;m++){
					if (arrPersonal[m]!=NULL  && arrPersonal[m]->getPlanta()==pl){
						cout << m << ")" << arrPersonal[m]->getNombre() << " " << arrPersonal[m]->getApellido1() << " " << arrPersonal[m]->getApellido2();
					     cout << ", " << arrPersonal[m]->getProfesion() <<  " , planta " << arrPersonal[m]->getPlanta() << " , horarios:";
						arrPersonal[m]->getHorarios();
						cout<< endl;
					}
}
}

void GestorHospital::personalActivo() {
		for (int m=0;m<400;m++){
						if (arrPersonal[m]!=NULL  && arrPersonal[m]->getSalida()!=0){
							cout << m << ")" << arrPersonal[m]->getNombre() << " " << arrPersonal[m]->getApellido1() << " " << arrPersonal[m]->getApellido2();
						     cout << ", " << arrPersonal[m]->getProfesion() <<  " , planta " << arrPersonal[m]->getPlanta() << " , horarios:";
							arrPersonal[m]->getHorarios();
							cout<< endl;
						}
	}
	}

