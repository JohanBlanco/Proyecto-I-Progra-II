#include "Controladora.h"


Controladora::Controladora()
{
	u = new universidad();
	recuperarDatos(u);
	usuario* admin = u->getTodosUsuarios()->buscarPorString("0");
	if (admin==NULL) {
		usuario* a1 = new administrativos("0", "admin", "0", "USUARIO- ADMIN");
		u->agregarUsuariosPro(a1);
	}
}

Controladora::~Controladora()
{
	guardarDatos(u);
	delete u;
}

void Controladora::principal()
{
	int opcion;
	//Vista::presentacion();
	usuario* usuarioAux = Vista::inicioSesion(u);
	int n = usuarioAux->getIndentificador();
	do {

		opcion = Vista::menuPrincipal();
		switch (opcion) {
		case 1: {
			(n == 1) ? seguridadAdministracionRoles() : Vista::imprimir("<<< ACCESO RESTRINGIDO >>>"); Vista::dormir(1000);
		} break;
		case 2: {
			(n == 1 || n == 2) ? mantenimientoGeneralRegistro() : Vista::imprimir("<<< ACCESO RESTRINGIDO >>>"); Vista::dormir(1000);
		} break;
		case 3: {
			(n == 1 || n == 2 ) ? mantenimientoEscuela() : Vista::imprimir("<<< ACCESO RESTRINGIDO >>>"); Vista::dormir(1000);
		} break;
		case 4: {
			(n == 1 || n == 3) ? matriculaHistoriales(usuarioAux) : Vista::imprimir("<<< ACCESO RESTRINGIDO >>>"); Vista::dormir(1000);
		} break;
		case 5: {
			(n == 1 || n == 4) ? registroActas(usuarioAux) : Vista::imprimir("<<< ACCESO RESTRINGIDO >>>"); Vista::dormir(1000);
		} break;
		case 6: {
			 usuarioAux = Vista::inicioSesion(u);
			 n = usuarioAux->getIndentificador();
		} break;
		default: break;
		}
		//Vista::systemPause();
	} while (opcion != 7);
	Vista::fin();
}

void Controladora::seguridadAdministracionRoles()
{
	int opcion;
	do {
		opcion = Vista::seguridadAminitracion();
		switch (opcion) {
		case 1: crearUsuario(); break;
		case 2: Vista::mostrarUsuarios(u); break;
		default: break;
		}
	} while (opcion != 0);
}

void Controladora::mantenimientoGeneralRegistro()
{
	int opcion;
	do {
		opcion = Vista::mantenimientoRegistro();
		switch (opcion) {
		case 1: mantenimientoAniosCiclosLectivos(); break;
		case 2: mantenimientoCarreasCursos(); break;
		case 3: empadronamiento(); break;
		default: break;
		}
	} while (opcion != 0);
}

void Controladora::mantenimientoAniosCiclosLectivos()
{
	int opcion;
	do {
		opcion = Vista::mantenimientoCiclosLectivos();
		switch (opcion) {
		case 1: crearCiclo(); break;
		case 2: Vista::mostarCiclos(u); break;
		default: break;
		}
	} while (opcion != 0);
}

void Controladora::mantenimientoEscuela()
{
	int opcion;
	do {
		opcion = Vista::mantenimientoEscuela();
		switch (opcion) {
		case 1: consultaPlanDeEstudio(); break;
		case 2: creacionDeGrupos(); break;
		case 3: consultaGeneralMatricula(); break;
		case 4: ingresoProfesores(); break;
		default: break;
		}
	} while (opcion != 0);
}

void Controladora::matriculaHistoriales(usuario* usuarioAux)
{
	int opcion;
	do {
		opcion = Vista::matriculaHistoriales();
		switch (opcion) {
		case 1: procesoMatricula(usuarioAux); break;
		case 2: consultaMatriculaPorEstudiante(usuarioAux); break;
		case 3: historialAcademicoPorEstudiante(usuarioAux); break;
		default: break;
		}
	} while (opcion != 0);
}

void Controladora::mantenimientoCarreasCursos()
{
	int opcion;
	do {
		opcion = Vista::mantenimientoCarreasCursos();
		switch (opcion) {
		case 1:ingresarCarreras(); break;
		case 2: ingresarCursos(); break;
		default: break;
		}
	} while (opcion != 0);
}

void Controladora::empadronamiento()
{
	int opcion;
	do {
		opcion = Vista::empadronamiento();
		switch (opcion) {
		case 1: empadronarEstudiante(); break;
		case 2: mostrarEstudiantesEmpadronados(); break;
		default: break;
		}
	} while (opcion != 0);
}

void Controladora::registroActas(usuario* aux)
{
	int opcion;
	do {
		opcion = Vista::registroAtas();
		switch (opcion) {
		case 1: ingesarNotas(aux) ; break;
		default: break;
		}
	} while (opcion != 0);
}
universidad* Controladora::getUniversidad()
{
	return u;
}

void Controladora::crearUsuario()
{
	usuario* usuarioAux = Vista::crearUsuario();
	u->agregarUsuariosPro(usuarioAux);
	

}

void Controladora::crearCiclo()
{
	ciclo* cicloAux = Vista::crearCiclo();
	u->agregarCiclo(cicloAux);
}

void Controladora::ingresarCarreras()
{
	Vista::ingresarCarreras(u);
}

void Controladora::ingresarCursos()
{
	try {
		Vista::ingresarCursos(u);

	}catch (ExcepcionNULLPTR * e) {
		Vista::imprimir(e->toString());
		Vista::systemPause();
	}
}

void Controladora::empadronarEstudiante()
{
	try {
		Vista::empadronarEstudiante(u);

	}
	catch (ExcepcionNULLPTR * e) {
		Vista::imprimir(e->toString());
		Vista::systemPause();
	}
}

void Controladora::mostrarEstudiantesEmpadronados()
{
	try {
		Vista::mostrarEstudiantesEmpadronados(u);
	}
	catch (ExcepcionNULLPTR * e) {
		Vista::imprimir(e->toString());
		Vista::systemPause();
	}
}

void Controladora::consultaPlanDeEstudio()
{
	try {
		Vista::consultaPlanDeEstudio(u);
	}
	catch (ExcepcionNULLPTR * e) {
		Vista::imprimir(e->toString());
		Vista::systemPause();
	}
}

void Controladora::creacionDeGrupos()
{
	try {
		Vista::creacionDeGrupos(u);
	}
	catch (ExcepcionNULLPTR * e) {
		Vista::imprimir(e->toString());
		Vista::systemPause();
	}
}

void Controladora::ingresoProfesores()
{
	try {
		Vista::ingresoProfesores(u);
	}
	catch (ExcepcionNULLPTR * e) {
		Vista::imprimir(e->toString());
		Vista::systemPause();
	}
}

void Controladora::consultaGeneralMatricula()
{
	try {
		Vista::consultaGeneralMatricula(u);
	}
	catch (ExcepcionNULLPTR * e) {
		Vista::imprimir(e->toString());
		Vista::systemPause();
	}

}

void Controladora::procesoMatricula(usuario* aux)
{
	try {
		Vista::procesoMatricula(u,aux);
	}
	catch (ExcepcionNULLPTR * e) {
		Vista::imprimir(e->toString());
		Vista::systemPause();
	}
}

void Controladora::consultaMatriculaPorEstudiante(usuario* aux)
{
	try {
		Vista::consultaMatriculaPorEstudiante(u, aux);
	}
	catch (ExcepcionNULLPTR * e) {
		Vista::imprimir(e->toString());
		Vista::systemPause();
	}
}

void Controladora::historialAcademicoPorEstudiante(usuario* aux)
{
	try {
		Vista::historialAcademicoPorEstudiante(u, aux);
	}
	catch (ExcepcionNULLPTR * e) {
		Vista::imprimir(e->toString());
		Vista::systemPause();
	}
}

void Controladora::ingesarNotas(usuario* aux)
{
	try {
		Vista::ingesarNotas(u, aux);
	}
	catch (ExcepcionNULLPTR * e) {
		Vista::imprimir(e->toString());
		Vista::systemPause();
	}
}

void Controladora::guardarDatos(universidad* uni)
{
	GestorArchivos::guardarUsuarios(uni->getTodosUsuarios());
	GestorArchivos::guardarCiclos(uni->getTodosCiclos());
	GestorArchivos::guardarCarreras(uni->getTodasEscuelas());
}

void Controladora::recuperarDatos(universidad* uni)
{
	GestorArchivos::recuperarUsuarios(uni->getTodosUsuarios());
	GestorArchivos::recuperarCiclos(uni->getTodosCiclos());
	GestorArchivos::recuperarCarreras(uni->getTodasEscuelas());
}


