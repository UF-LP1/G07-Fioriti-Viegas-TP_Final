#include "Ccentro_salud.h"
#include <iostream>

Ccentro_salud::Ccentro_salud(string nombre, string direccion, string partido, string provincia, string telefono)
{
	this->nombre = nombre;
	this->direccion = direccion;
	this->partido = partido;
	this->provincia = provincia;
	this->telefono = telefono;
}

Ccentro_salud::~Ccentro_salud()
{
}

void Ccentro_salud::imprimir()
{
	cout << this->to_string() << endl;
}

string Ccentro_salud::to_string()
{
	stringstream salida;
	salida << "Nombre del establecimiento: " << this->nombre << endl << "Direccion: " << this->direccion << endl
		<< "Partido: " << this->partido << endl <<"Provincia: " << this->provincia << endl <<
		"Telefono: " << this->telefono << endl;
	return salida.str();
}
