#include "Csangre.h"

Csangre::Csangre(tipo_sangre tipo, char Rh):Cfluido(1)
{
	this->Rh = Rh;
	this->tipo = tipo;
}

Csangre::~Csangre()
{
}

string Csangre::to_string()
{
	stringstream salida;
	tm* fecha = localtime(&this->caducidad);
	salida << "Caracteristicas de la sangre: " << endl << this->tipo << this->Rh << endl << "Caducidad: " << fecha->tm_mday << "/" << fecha->tm_mon + 1 << "/" << fecha->tm_year + 1900 << endl;
	return salida.str();
}

void Csangre::imprimir()
{
	cout << this->to_string() << endl;
}

bool Csangre::VerificarFechaMaxima()
{
	bool vencio = true;
	time_t now = time(NULL);
	tm* fecha = localtime(&now);
	tm* vencimiento = localtime(&this->caducidad);
	if (fecha->tm_year <= vencimiento->tm_year)
		vencio = false;
	else if (fecha->tm_mon <= vencimiento->tm_mon)
		vencio = false;
	else if (fecha->tm_mday <= vencimiento->tm_mday)
		vencio = false;

	return vencio;
}

ostream& operator<<(ostream& out, Csangre& C)
{
	out << C.to_string() << endl;
	return out;
}
