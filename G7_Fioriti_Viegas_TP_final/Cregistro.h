#pragma once
#include "Cdonante.h"


class Cregistro
{
	Cdonante* donante;
	time_t fecha_extraccion;
	unsigned int volumen;
public:
	Cregistro(time_t fecha_extraccion, unsigned int volumen, Cdonante* donante);
	~Cregistro();
	string to_string();
	void imprimir();
	friend ostream& operator<<(ostream& out, Cregistro& C);
	bool VerificarFechaMax();
};

