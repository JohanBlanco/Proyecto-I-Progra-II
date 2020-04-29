#pragma once
#include<iostream>
#include<sstream>
using namespace std;
#include"listaGenerica.h"
#include"carrera.h"

class escuela{
private:
	string nombre;
	string codigo;
	lista<carrera>* listaCarrerasDeEscuela;

public:
	escuela(string,string);
	~escuela();
	string toString();
	string getNombreEscuela();
	//
	friend ostream& operator <<(ostream& out, const escuela&);
	//
	void agregarCarrerasPro(carrera*);
	string mostrarCarreras();
	carrera* recuperarCarreraPro(int);
	//
	int getCantCarreras();

	//retorna listas
	lista<carrera>* getTodasCarrerasEscuela();
	string getCodigo();
	bool operator == (string&);
};

