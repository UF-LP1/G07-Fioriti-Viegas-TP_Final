#include "Cregistro.h"

Cregistro::Cregistro(time_t fecha_extraccion, float volumen, Cfluido* fluido)
{
	this->fecha_extraccion = fecha_extraccion;
	this->volumen = volumen;
	this->fluido = fluido;
}

Cregistro::~Cregistro()
{
}

string Cregistro::to_string()
{
	stringstream salida;
	tm* fecha = localtime(&this->fecha_extraccion);
	salida << "Fecha de extraccion del fluido: " << fecha->tm_mday << "/" << fecha->tm_mon + 1 << "/" << fecha->tm_year + 1900 << endl << this->volumen << "ml" << endl;
	return ;
}

void Cregistro::imprimir()
{
	cout << this->to_string() << endl;
}

time_t Cregistro::get_fecha_extraccion()
{
	return this->fecha_extraccion;
}

Cfluido* Cregistro::get_fluido()
{
	return this->fluido;
}

void Cregistro::set_fluido(Cfluido* fluido)
{
	this->fluido = fluido;
}

void Cregistro::set_volumen(float volumen)
{
	this->volumen = volumen;
}

void Cregistro::set_extraccion(time_t extraccion)
{
	this->fecha_extraccion = extraccion;
}

ostream& operator<<(ostream& out, Cregistro& C)
{
	out << C.to_string() << endl;
	return out;
}
