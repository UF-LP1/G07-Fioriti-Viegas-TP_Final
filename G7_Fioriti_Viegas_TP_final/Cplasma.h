#pragma once
#include "Cfluido.h"

class Cplasma: public Cfluido
{
public:
	Cplasma();
	~Cplasma();
	bool VerificarFechaMaxima();
};

