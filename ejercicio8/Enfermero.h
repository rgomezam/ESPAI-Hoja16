/*
 * Enfermero.h
 *
 *  Created on: Aug 25, 2015
 *      Author: raquel
 */

#ifndef ENFERMERO_H_
#define ENFERMERO_H_

#include "Personal.h"

class Enfermero: public Personal {
public:
	Enfermero(string,string,string,int);
	virtual ~Enfermero();


};

#endif /* ENFERMERO_H_ */
