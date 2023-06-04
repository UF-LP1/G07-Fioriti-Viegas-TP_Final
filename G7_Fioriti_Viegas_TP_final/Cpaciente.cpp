#include "Cpaciente.h"

Cpaciente::Cpaciente(string nombre, string apellido, time_t fecha, char sexo, string telefono, string dni)
{
	this->nombre = nombre;
	this->apellido = apellido;
	this->fecha = fecha;
	this->sexo = sexo;
	this->telefono = telefono;
	this->dni = dni;
}

Cpaciente::~Cpaciente()
{
}

Cfluido* Cpaciente::get_sangre()
{
	return this->sangre;
}

Cfluido* Cpaciente::get_medula()
{
	return this->medula;
}

Cfluido* Cpaciente::get_plasma()
{
	return this->plasma;
}

