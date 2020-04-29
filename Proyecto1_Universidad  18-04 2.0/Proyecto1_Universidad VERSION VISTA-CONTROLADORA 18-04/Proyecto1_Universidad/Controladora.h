#pragma once
//--------------------------------QUITAR
#include<iostream>
#include<string>
using namespace std;
//----------------------------------
#include"universidad.h"
#include "Vista.h"
#include"GestorArchivos.h"
class Controladora
{
private:
	universidad* u;
public:
	Controladora();
	~Controladora();
	//menus
	void principal();
	void seguridadAdministracionRoles();
	void mantenimientoGeneralRegistro();
	void mantenimientoAniosCiclosLectivos();
	void mantenimientoEscuela();
	void matriculaHistoriales(usuario* usuarioAux);
	void mantenimientoCarreasCursos();
	void empadronamiento();
	void registroActas(usuario* aux);
	universidad* getUniversidad();
	//seguridad y administracion de roles
	void crearUsuario();
	//mantenimiento general registro
	//mantenimiento de años y ciclos
	void crearCiclo();
	//mantenimiento de carreras y cursos
	void ingresarCarreras();
	void ingresarCursos();
	//empadronamiento
	void empadronarEstudiante();
	void mostrarEstudiantesEmpadronados();
	//Mantenimiento por escuela
	void consultaPlanDeEstudio();
	void creacionDeGrupos();
	void ingresoProfesores();
	void consultaGeneralMatricula();
	//Matricula e historiales
	void procesoMatricula(usuario* aux);
	void consultaMatriculaPorEstudiante(usuario* aux);
	void historialAcademicoPorEstudiante(usuario* aux);
	//Registro actas
	void ingesarNotas(usuario* aux);
	void guardarDatos(universidad* uni);
	void recuperarDatos(universidad* uni);
};

