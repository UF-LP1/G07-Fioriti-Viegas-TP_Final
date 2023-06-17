#include "Cregistro.h"

Cregistro::Cregistro(time_t fecha_extraccion, double volumen, Cfluido& fluido)
{
	this->fecha_extraccion = fecha_extraccion;
	this->volumen = volumen;
	this->fluido = &fluido;
}

Cregistro::Cregistro()
{
	this->fecha_extraccion = 0;
	this->fluido = nullptr;
	this->volumen = 0;
}

Cregistro::~Cregistro()
{
}

string Cregistro::to_string()
{
	stringstream salida;
	tm* fecha = new tm;
	localtime_s(fecha, &this->fecha_extraccion);
	salida << "Fecha de extraccion del fluido: " << fecha->tm_mday << "/" << fecha->tm_mon + 1 << "/" << fecha->tm_year + 1900 << endl << this->volumen << "ml" << endl;
	delete fecha;
	return salida.str();
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

void Cregistro::set_volumen(double volumen)
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
