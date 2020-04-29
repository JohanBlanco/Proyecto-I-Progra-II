#include "GestorArchivos.h"

void GestorArchivos::guardar_1_Usuario(ofstream& out, usuario* u)
{
	out << u->getIndentificador() << "\t";
	int ident = u->getIndentificador();
	switch (ident) {
	case 3:
	{
		estudiante* e = dynamic_cast<estudiante*>(u);
		if (e) { out << e->getTelefono() << "\t"; }
	}
	break;
	case 4:
	{
		profesor* p = dynamic_cast<profesor*>(u);
		if (p) {
			out << p->getCelular() << "\t";
			out << p->getGradoAcademico() << "\t";
		}
	}
	break;
	default:
		break;
	}
	out << u->getidUsu() << "\t";
	out << u->getnombreUsu() << "\t";
	out << u->getclaveUsu() << "\t";
	out << u->getrolUsu() << "\n";
}

void GestorArchivos::guardarUsuarios(lista<usuario>* usuarios)
{
	int cant = usuarios->getCant();
	ofstream out("../Usuarios.txt",ios::out|ios::trunc);
	nodo<usuario>* actual = usuarios->getPrimero();
	out << cant << "\n";
	while (actual!=NULL) {
		guardar_1_Usuario(out,actual->getDato());      
		actual = actual->getSiguiente();
	}
	out.close();
}
usuario* GestorArchivos::recuperar_1_Usuario(ifstream& in)
{
	string id, nombre, clave, rol, identificador,telefono = "",grado="";
	int telefono2 = 0;
	getline(in, identificador, '\t');
	int ident = stoi(identificador);
	switch (ident) {
	case 1:
	{
		getline(in, id, '\t');
		getline(in, nombre, '\t');
		getline(in, clave, '\t');
		getline(in, rol, '\n');
		return new administrativos(id, nombre, clave, rol);
	}
	break;
	case 2:
	{
		getline(in, id, '\t');
		getline(in, nombre, '\t');
		getline(in, clave, '\t');
		getline(in, rol, '\n');
		return new registro(id, nombre, clave, rol);
	}
	break;
	case 3:
	{
		getline(in, telefono, '\t'); 
		getline(in, id, '\t');
		getline(in, nombre, '\t');
		getline(in, clave, '\t');
		getline(in, rol, '\n');
		telefono2 = stoi(telefono);
		return new estudiante(id,nombre,clave,rol,telefono2);
	}
	break;
	case 4:
	{
		getline(in, telefono, '\t');
		getline(in, grado, '\t');
		getline(in, id, '\t');
		getline(in, nombre, '\t');
		getline(in, clave, '\t');
		getline(in, rol, '\n');
		telefono2 = stoi(telefono);
		return new profesor(id, nombre, clave, rol, telefono2, grado);
	}
	break;
	default:
		break;
	}
	return NULL;
}

void GestorArchivos::recuperarUsuarios(lista<usuario>* usuarios)
{
	string cant = "";
	int cont = 0;
	usuario* us = NULL;
	int cant2 = 0;
	ifstream in("../Usuarios.txt");
	if (in) {
		getline(in, cant, '\n');
		cant2 = stoi(cant);
		while (cont<cant2){
			us = recuperar_1_Usuario(in);
			usuarios->agregarObj(us);
			cont++;
		}
		in.close();
	}
}

int GestorArchivos::strToInt(string z)
{
	stringstream x(z);
	int n = -1;
	x >> n;
	return n;
}

void GestorArchivos::guardar_1_ciclo(ofstream& out, ciclo* c)
{
	out << c->getAnio() << "\t";
	out << c->getPeriocidad() << "\t";
	out << c->getInicio()->getDia() << "\t";
	out << c->getInicio()->getMes() << "\t";
	out << c->getInicio()->getAnnio() << "\t";
	out << c->getFinal()->getDia() << "\t";
	out << c->getFinal()->getMes() << "\t";
	out << c->getFinal()->getAnnio() << "\n";
}

void GestorArchivos::guardarCiclos(lista<ciclo>* ciclos)
{
	int cant = ciclos->getCant();
	ofstream out("../CiclosLectivos.txt", ios::out | ios::trunc);
	nodo<ciclo>* actual = ciclos->getPrimero();
	out << cant << "\n";
	while (actual != NULL) {
		guardar_1_ciclo(out,actual->getDato());
		actual = actual->getSiguiente();
	}
	out.close();
}

ciclo* GestorArchivos::recuperar_1_ciclo(ifstream& in)
{
	string annio = "", periocidad, dia = "", mes = "", anio = "";
	int ANNIO = 0;
	int diaE = 0, mesE = 0, anioE = 0;
	getline(in, annio, '\t');
	ANNIO = stoi(annio);
	getline(in, periocidad, '\t');
	getline(in, dia, '\t');
	getline(in, mes, '\t');
	getline(in, anio, '\t');
	diaE = stoi(dia);
	mesE = stoi(mes);
	anioE = stoi(anio);
	fecha* inicio = new fecha(diaE,mesE,anioE);
	getline(in, dia, '\t');
	getline(in, mes, '\t');
	getline(in, anio, '\n');
	diaE = stoi(dia);
	mesE = stoi(mes);
	anioE = stoi(anio);
	fecha* fin = new fecha(diaE, mesE, anioE);
	return new ciclo(ANNIO, periocidad, inicio, fin);
}

void GestorArchivos::recuperarCiclos(lista<ciclo>* ciclos)
{
	string cant = "";
	int cont = 0;
	ciclo* ci = NULL;
	int cant2 = 0;
	ifstream in("../CiclosLectivos.txt");
	if (in) {
		getline(in, cant, '\n');
		cant2 = stoi(cant);
		while (cont < cant2) {
			ci = recuperar_1_ciclo(in);
			ciclos->agregarObj(ci);
			cont++;
		}
		in.close();
	}
}

void GestorArchivos::guardar_1_Carrera(ofstream& out, carrera* c)
{
	out << c->getCodigoCarrera() << "\t";
	out << c->getNombreCarrera() << "\t";
	out << c->getGrado() << "\t";
	out << c->getFacultad() << "\n";
}
//PROBANDO
void GestorArchivos::guardarCarreras(lista<escuela>* escuelas)
{
	nodo<escuela>* actualE = escuelas->getPrimero();
	escuela* escuel = NULL;
	int cant1 = 0,cant2 = 0;

	nodo<carrera>* actualC = NULL;
	carrera* carrer = NULL;

	ofstream out("../Carreras.txt",ios::out|ios::trunc);
	//ESCUELA
	out << escuelas->getCant()<<"\n";
	while (actualE != NULL) {
		
		escuel = actualE->getDato();
		cant1 = escuel->getTodasCarrerasEscuela()->getCant();
		out << escuel->getCodigo() << "\n";
		out << cant1 << "\n";
		//----------CARRERAS
		actualC = escuel->getTodasCarrerasEscuela()->getPrimero();
		while (actualC != NULL) {
			carrer = actualC->getDato();
			guardar_1_Carrera(out,carrer);
			actualC = actualC->getSiguiente();
		}
		actualE = actualE->getSiguiente();
	}
	out.close();
}

carrera* GestorArchivos::recuperar_1_Carrera(ifstream& in)
{
	string codigo, nombre, grado, facultad;
	getline(in, codigo, '\t');
	getline(in, nombre, '\t');
	getline(in, grado, '\t');
	getline(in, facultad, '\n');
	return new carrera(codigo, nombre, grado, facultad);
}

void GestorArchivos::recuperarCarreras(lista<escuela>* escuelas)
{
	string cantEscuelas = "";
	int cantEsc = 0;
	string cantS = "";
	ifstream in("../Carreras.txt");
	int cant = 0;
	string codigo = "";
	//int cantidadE = escuelas->getCant();
	escuela* escuel = NULL;
	carrera* carrer = NULL;
	int cont = 0;
	if (in) {
		getline(in, cantEscuelas, '\n');
		cantEsc = stoi(cantEscuelas);
		while (cont<cantEsc) {
			cont++;
			getline(in, codigo, '\n');
			getline(in, cantS, '\n');
			cant = stoi(cantS);
			escuel = escuelas->buscarPorString(codigo);
			for (int i = 0; i < cant; i++) {
				carrer = recuperar_1_Carrera(in);
				escuel->getTodasCarrerasEscuela()->agregarObj(carrer);
			}
		}
		in.close();
	}
}


