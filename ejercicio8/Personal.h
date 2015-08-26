/*
 * Personal.h
 *
 *  Created on: Aug 25, 2015
 *      Author: raquel
 */

#ifndef PERSONAL_H_
#define PERSONAL_H_
#include <iostream>
using namespace std;


class Personal {
public:
	Personal(string,string,string,int);
	virtual ~Personal();
	string getNombre(){return nombre;}
	string getApellido1(){return apellido1;}
	string getApellido2(){return apellido2;}
	int getPlanta(){return planta;}
	virtual string getProfesion(){return empleo;}   //Este virtual es muy importante!
	float getSalida(){return salida;}
	void setEntrada(float entrada);
	void setSalida(float salida);
	void getHorarios();

protected:
	string nombre, apellido1, apellido2;
	float entrada,salida;
	string empleo;
	int planta;

};

#endif /* PERSONAL_H_ */
