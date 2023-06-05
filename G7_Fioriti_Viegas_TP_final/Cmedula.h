#pragma once
#include "Cfluido.h"

class Cmedula: public Cfluido
{
public:
	Cmedula();
	~Cmedula();
	bool VerificarFechaMaxima(time_t extraccion);
	string to_string();
};

