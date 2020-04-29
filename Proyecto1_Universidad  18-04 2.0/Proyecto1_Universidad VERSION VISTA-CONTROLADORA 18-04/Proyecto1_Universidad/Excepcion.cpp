#include "Excepcion.h"

Excepcion::Excepcion()
{
	cout << "\n <<< EXCEPCION: ";
}

Excepcion::~Excepcion()
{
}

ExcepcionRango::ExcepcionRango(int min, int max)
{
	this->min = min;
	this->max = max;
}

string ExcepcionRango::toString()
{
	return ("RANGO PERMITIDO " + to_string(min) + "-" + to_string(max) + " >>>\n");
}

string ExcepcionValor::toString()
{
	return "DATO INVALIDO >>>\n";
}

string ExcepcionMemoria::toString()
{
	return " MEMORIA INSUFICIENTE - DATO INVALIDO >>>\n";
}

string ExcepcionNULLPTR::toString()
{
	return " LISTA VACIA - INGRESE DATOS A LA LISTA PARA CONTINUAR >>>\n";
}
