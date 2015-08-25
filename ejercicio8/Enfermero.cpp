/*
 * Enfermero.cpp
 *
 *  Created on: Aug 25, 2015
 *      Author: raquel
 */

#include "Enfermero.h"

Enfermero::Enfermero(string nombre,string apellido1,string apellido2,int planta):Personal(nombre,apellido1,apellido2,planta)  {

	this->empleo = "Enfermero";

}

Enfermero::~Enfermero() {
	// TODO Auto-generated destructor stub
}

