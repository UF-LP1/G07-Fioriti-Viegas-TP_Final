#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <ctime>

using namespace std;

class Cfluido
{
protected:
	unsigned int caducidad;
public:
	Cfluido(unsigned int caducidad);
	~Cfluido();
	virtual bool VerificarFechaMaxima(time_t extraccion) = 0;
};

