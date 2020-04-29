#pragma once
//--------------------------------QUITAR
#include <iostream>
#include <string>
using namespace std;
#include"universidad.h"
#include"Excepcion.h"
#include"Windows.h"
#include"usuarios.h"
#include"ciclo.h"
#include"carrera.h"
#include"escuela.h"
#include "grupo.h"
#include"administrativos.h"
#include"profesor.h"
#include"registro.h"
#include "estudiante.h"
#include"listaGenerica.h"
#include"exepcionGeneral.h"
#include "fecha.h"
#include"matricula.h"


//----------------------------------
class Vista
{
public:
	static void presentacion();
	static void fin();
	static int menuPrincipal();
	static int seguridadAminitracion();
	static int mantenimientoRegistro();
	static int mantenimientoEscuela();
	static int matriculaHistoriales();
	static int registroAtas();
	static int mantenimientoCarreasCursos();
	static int mantenimientoCiclosLectivos();
	static void systemPause();
	static void imprimir(string);
	static int verificarDato(string, int, int);
	static float verificarDatoFloat(string, int, int);
	static int empadronamiento();
	//metodo verificar vacia
	template<class T>
	static void verificarLista(lista<T>*);
	//
	static usuario* inicioSesion(universidad* uni);
	//seguridad y administacion de roles
	static usuario* crearUsuario();
	static void mostrarUsuarios(universidad* uni);
	//mantenimiento general registro
	//mantenimiento de años y ciclos
	static ciclo* crearCiclo();
	static void mostarCiclos(universidad* uni);
	//mantenimiento de carreras y cursos
	static void ingresarCarreras(universidad* uni);
	static void ingresarCursos(universidad* uni);
	//empadronamiento
	static void empadronarEstudiante(universidad* uni);
	static void mostrarEstudiantesEmpadronados(universidad* uni);
	//Mantenimiento por escuela
	static void consultaPlanDeEstudio(universidad* uni);
	static void creacionDeGrupos(universidad* uni);
	static void ingresoProfesores(universidad* uni);
	static void consultaGeneralMatricula(universidad* uni);
	//Matricula e historiales
	static void procesoMatricula(universidad* uni,usuario* aux);
	static void consultaMatriculaPorEstudiante(universidad* uni,usuario* aux);
	static void historialAcademicoPorEstudiante(universidad* uni,usuario* aux);
	//Registro actas
	static void ingesarNotas(universidad* uni,usuario* aux);
	//
	static void dormir(int t);
};

template<class T>
void Vista::verificarLista(lista<T>* l)
{

	if (l->vacia()) {
		throw new ExcepcionNULLPTR();
	}
}
