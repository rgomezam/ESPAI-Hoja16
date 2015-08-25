/*
 * Personal.cpp
 *
 *  Created on: Aug 25, 2015
 *      Author: raquel
 */

#include "Personal.h"

Personal::Personal(string nombre,string apellido1,string apellido2,int planta) {
	cout << "Creando personal" << endl;
	this -> nombre = nombre;
	this-> apellido1 = apellido1;
	this -> apellido2=apellido2;
	this->planta=planta;
	salida = 00.00;

}

Personal::~Personal() {
	cout << "Eliminando registro" << endl;
}

void Personal::setEntrada(float entrada) {
	this->entrada = entrada;
}


void Personal::setSalida(float salida) {
	this->salida=salida;
}

void Personal::getHorarios() {
	cout << "Entrada:" << entrada << ", salida: " << salida ;
}
