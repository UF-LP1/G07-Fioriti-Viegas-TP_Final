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
	virtual bool VerificarFechaMaxima() = 0;
	virtual string to_string() = 0;
	virtual void imprimir() = 0;
};

