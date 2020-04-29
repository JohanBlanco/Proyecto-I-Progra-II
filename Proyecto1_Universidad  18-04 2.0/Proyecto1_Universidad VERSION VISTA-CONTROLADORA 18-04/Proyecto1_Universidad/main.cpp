#include <Windows.h>
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
#include"universidad.h"
#include"exepcionGeneral.h"
#include "fecha.h"
#include"matricula.h"
#include"Controladora.h"





int main() {
	//
	Controladora* control = new Controladora();
	universidad* uni = control->getUniversidad();
	//Escuelas de la U
	//escuela* escuela1 = new escuela("ESCUELA-INFORMATICA");
	//uni->agregarEscuelaPro(escuela1);
	//	
	
	
	/*usuario* usuario1 = new estudiante("01", "Emmanuel", "aa", "USUARIO-ESTUDIANTE", 84339541);
	usuario* usuario2 = new estudiante("02", "Carlos", "bb", "USUARIO-ESTUDIANTE", 0000001);
	usuario* usuario3 = new profesor("03", "Pedro", "cc", "USUARIO-PROFESOR", 0000002,"LICENCIADO");
	usuario* usuario4 = new profesor("04", "Isaac", "dd", "USUARIO-PROFESOR", 0000003, "LICENCIADO");
	usuario* usuario5 = new registro("06", "Pedro", "cc", "USUARIO-REGISTRO");
	uni->agregarUsuariosPro(usuario1);
	uni->agregarUsuariosPro(usuario2);
	uni->agregarUsuariosPro(usuario3);
	uni->agregarUsuariosPro(usuario4);
	uni->agregarUsuariosPro(usuario5);*/
	
	
	//ciclos
	/*fecha* fechaInicio = new fecha(01, 01, 2020);
	fecha* fechaFinal = new fecha(01, 02, 2020);
	fecha* fechaInicio1 = new fecha(02, 01, 2020);
	fecha* fechaFinal2 = new fecha(02, 03, 2020);
	ciclo* c1 = new ciclo(2020, "I", fechaInicio, fechaFinal);
	uni->agregarCiclo(c1);
	ciclo* c2 = new ciclo(2020, "II", fechaInicio1, fechaFinal2);
	uni->agregarCiclo(c2);
	//carrera
	carrera* carrera1 = new carrera("EIF", "SISTEMAS", "BACHILLERATO", "CIENCIAS");
	escuela1->agregarCarrerasPro(carrera1);
	//
	curso* curso1 = new curso("Matematica General", "LAB", 4, 5, "ACTIVO", c1, carrera1);
	curso1->setCodigo();
	carrera1->agregarCursoPlan(curso1);

	curso* curso2 = new curso("Calculo", "LAB", 4, 5, "ACTIVO", c1, carrera1);
	curso2->setCodigo();
	carrera1->agregarCursoPlan(curso2);
	curso2->agregarRequistosPro(curso1);*/
	//
	/*estudiante* estudiante1 = exepcionCambioTipo::cambiarEstudiante(usuario1);
	carrera1->agregarEstudinatesPro(estudiante1);
	estudiante1->setProfesion(carrera1);
	estudiante* estudiante2 = exepcionCambioTipo::cambiarEstudiante(usuario2);
	carrera1->agregarEstudinatesPro(estudiante2);
	estudiante2->setProfesion(carrera1);
	//
	profesor* profesor1 = exepcionCambioTipo::cambiarProfesor(usuario3);
	carrera1->agregarProfesorPro(profesor1);
	profesor* profesor2 = exepcionCambioTipo::cambiarProfesor(usuario4);
	carrera1->agregarProfesorPro(profesor2);
	//
	grupo* grupo1 = new grupo(12, "L-J", "7:00", "9:00", curso2);
	grupo1->setNRC();
	grupo1->setNumeroGrupo();
	grupo1->setProfesor(profesor1);
	stringstream s;
	s << "L-J" << '\t' << "7:00" << "-" << "9:00";
	grupo1->setHorario(s.str());
	profesor1->agregarGruposPro(grupo1);
	curso2->agregaGrupoPro(grupo1);
	carrera1->agregarGrupoMatricula(grupo1);
	//
	estudiante1->getHistorial()->agregarCursoAprobado(curso1);
	curso1->setNotaFinal(9);
	//
	*/
	
	control->principal();
	
	delete control;
	return 0;
}
