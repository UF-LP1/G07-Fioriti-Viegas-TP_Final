#pragma once
#include "Cfluido.h"

class Cplasma: public Cfluido
{
public:
	Cplasma();
	~Cplasma();
	bool VerificarFechaMaxima(time_t extraccion);
	string to_string();
};

