#pragma once

#include <iostream>
#include<string>
#include <sstream>
using namespace std;

class Excepcion {
public:
	Excepcion();
	virtual ~Excepcion();
};
class ExcepcionRango : public  Excepcion {
protected:
	int min;
	int max;
public:
	ExcepcionRango(int, int);
	string toString();
};

class ExcepcionValor :public Excepcion {
public:
	string toString();
};

class ExcepcionMemoria : public  Excepcion {
public:
	string toString();
};
class ExcepcionNULLPTR : public Excepcion {
public:
	string toString();

};
