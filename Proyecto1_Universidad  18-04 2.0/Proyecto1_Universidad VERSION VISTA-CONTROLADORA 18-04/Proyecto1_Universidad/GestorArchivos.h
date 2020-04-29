#pragma once
#include"Controladora.h"
#include<fstream>
class GestorArchivos
{
public:
	//Usuarios
	static void guardarUsuarios(lista<usuario>* usuarios);
	static void recuperarUsuarios(lista<usuario>* usuarios);
	static void guardar_1_Usuario(ofstream& out,usuario*);
	static usuario* recuperar_1_Usuario(ifstream& in);
	
	static int strToInt(string);

	//Ciclos
	static void guardar_1_ciclo(ofstream& out, ciclo* c);
	static void guardarCiclos(lista<ciclo>* ciclos);
	static ciclo* recuperar_1_ciclo(ifstream& in);
	static void recuperarCiclos(lista<ciclo>* ciclos);

	//Carreas
	static void guardar_1_Carrera(ofstream& out, carrera* c);
	static void guardarCarreras(lista<escuela>* escuelas);

	static carrera* recuperar_1_Carrera(ifstream& in);
	static void recuperarCarreras(lista<escuela>* escuelas);
};

