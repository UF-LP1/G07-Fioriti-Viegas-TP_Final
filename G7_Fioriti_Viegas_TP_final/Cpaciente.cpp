#include "Cpaciente.h"


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

string Cpaciente::get_nombre()
{
	return this->nombre;
}

string Cpaciente::get_apellido()
{
	return this->apellido;
}

time_t Cpaciente::get_fecha()
{
	return this->fecha;
}

char Cpaciente::get_sexo()
{
	return this->sexo;
}

string Cpaciente::get_telefono()
{
	return this->telefono;
}

