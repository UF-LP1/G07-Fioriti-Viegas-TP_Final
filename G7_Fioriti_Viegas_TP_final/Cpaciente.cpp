#include "Cpaciente.h"

Cpaciente::Cpaciente()
{
}

Cpaciente::Cpaciente(string nombre, string apellido, time_t fecha, char sexo, string telefono, string dni, Cfluido* sangre)
{
	this->nombre = nombre;
	this->apellido = apellido;
	this->fecha = fecha;
	this->sexo = sexo;
	this->telefono = telefono;
	this->dni = dni;
	this->sangre = sangre;
}

Cpaciente::~Cpaciente()
{
}

Cfluido* Cpaciente::get_sangre()
{
	return this->sangre;
}

string Cpaciente::get_dni()
{
	return this->dni;
}

