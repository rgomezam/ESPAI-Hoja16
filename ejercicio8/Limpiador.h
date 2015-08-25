/*
 * Limpiador.h
 *
 *  Created on: Aug 25, 2015
 *      Author: raquel
 */

#ifndef LIMPIADOR_H_
#define LIMPIADOR_H_

#include "Personal.h"

class Limpiador: public Personal {
public:
	Limpiador(string,string,string,int);
	virtual ~Limpiador();
};

#endif /* LIMPIADOR_H_ */
