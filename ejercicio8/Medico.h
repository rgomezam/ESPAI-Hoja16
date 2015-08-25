/*
 * Medico.h
 *
 *  Created on: Aug 25, 2015
 *      Author: raquel
 */

#ifndef MEDICO_H_
#define MEDICO_H_

#include "Personal.h"

class Medico: public Personal {
public:
	Medico(string,string,string,int,string);
	virtual ~Medico();
	string getProfesion(){return especialidad;}

private:
	string especialidad;
};

#endif /* MEDICO_H_ */
