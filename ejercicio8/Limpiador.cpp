/*
 * Limpiador.cpp
 *
 *  Created on: Aug 25, 2015
 *      Author: raquel
 */
#include <iostream>
using namespace std;
#include "Limpiador.h"

Limpiador::Limpiador(string nombre,string apellido1,string apellido2,int planta):Personal(nombre,apellido1,apellido2,planta) {

	this->empleo = "Limpiador";

}

Limpiador::~Limpiador() {
	// TODO Auto-generated destructor stub
}

