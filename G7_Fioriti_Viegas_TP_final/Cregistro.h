#pragma once
#include "Cdonante.h"
#include "Csangre.h"
#include "Cmedula.h"
#include "Cplasma.h"


class Cregistro
{
	Cdonante* donante;
	time_t fecha_extraccion;
	unsigned int volumen;
	Cfluido* fluido;
public:
	Cregistro(time_t fecha_extraccion, unsigned int volumen, Cdonante* donante, Cfluido* fluido);
	~Cregistro();
	string to_string();
	void imprimir();
	friend ostream& operator<<(ostream& out, Cregistro& C);
	bool VerificarFechaMax();
};

