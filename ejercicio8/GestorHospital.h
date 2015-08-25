/*
 * GestorHospital.h
 *
 *  Created on: Aug 25, 2015
 *      Author: raquel
 */

#ifndef GESTORHOSPITAL_H_
#define GESTORHOSPITAL_H_
#include "Personal.h"

class GestorHospital {
public:
	GestorHospital();
	virtual ~GestorHospital();
	void altaPersonal();
	void bajaPersonal();
	void registrarEntrada();
	void registrarSalida();
	void listadoTotal();
	void personalenPlanta();
	void personalActivo();


private:
	Personal *arrPersonal[400];

};

#endif /* GESTORHOSPITAL_H_ */
