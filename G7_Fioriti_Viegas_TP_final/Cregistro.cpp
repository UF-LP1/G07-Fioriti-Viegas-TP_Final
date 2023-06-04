#include "Cregistro.h"

Cregistro::Cregistro(time_t fecha_extraccion, unsigned int volumen, Cdonante* donante, Cfluido* fluido)
{
	this->donante = donante;
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
	salida << "Donante: " << this->donante->to_string() << "Fecha de extraccion del fluido: " << fecha->tm_mday << "/" << fecha->tm_mon + 1 << "/" << fecha->tm_year + 1900 << endl << this->volumen << "ml" << endl;
	return ;
}

void Cregistro::imprimir()
{
	cout << this->to_string() << endl;
}

bool Cregistro::VerificarFechaMax()
{
	bool caducado = true;
	Csangre* sangre = dynamic_cast<Csangre*>(this->fluido);
	if (sangre != nullptr) 
		caducado = sangre->VerificarFechaMaxima();
	Cplasma* plasma = dynamic_cast<Cplasma*>(this->fluido);
	if (plasma != nullptr)
		caducado = plasma->VerificarFechaMaxima();
	Cmedula* medula = dynamic_cast<Cmedula*>(this->fluido);
	if (medula != nullptr)
		caducado = medula->VerificarFechaMaxima();
	delete sangre;
	delete plasma;
	delete medula;
	return caducado;
	return false;
}

ostream& operator<<(ostream& out, Cregistro& C)
{
	out << C.to_string() << endl;
	return out;
}
