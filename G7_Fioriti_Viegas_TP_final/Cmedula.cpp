#include "Cmedula.h"

Cmedula::Cmedula():Cfluido(1)
{
}

Cmedula::~Cmedula()
{
}

bool Cmedula::VerificarFechaMaxima()
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
