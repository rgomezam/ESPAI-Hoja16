/*
 * Medico.cpp
 *
 *  Created on: Aug 25, 2015
 *      Author: raquel
 */

#include "Medico.h"

Medico::Medico(string nombre,string apellido1,string apellido2,int planta,string espec):Personal(nombre,apellido1,apellido2,planta)   {
	// TODO Auto-generated constructor stub
	this -> especialidad = espec;
}

Medico::~Medico() {
	// TODO Auto-generated destructor stub
}

