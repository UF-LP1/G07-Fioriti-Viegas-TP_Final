#include "Cregistro.h"

Cregistro::Cregistro(time_t fecha_extraccion, unsigned int volumen, Cdonante* donante)
{
	this->donante = donante;
	this->fecha_extraccion = fecha_extraccion;
	this->volumen = volumen;
}

Cregistro::~Cregistro()
{
}

string Cregistro::to_string()
{
	stringstream salida;
	tm* fecha = localtime(&this->fecha_extraccion);
	salida << "Donante: " << this->donante->to_string() << "Fecha de extraccion del fluido: " << fecha->tm_mday << "/" << fecha->tm_mon + 1 << "/" << fecha->tm_year + 1900 << endl << this->volumen << "ml" << endl;
	return ;
}

void Cregistro::imprimir()
{
	cout << this->to_string() << endl;
}

ostream& operator<<(ostream& out, Cregistro& C)
{
	out << C.to_string() << endl;
	return out;
}
