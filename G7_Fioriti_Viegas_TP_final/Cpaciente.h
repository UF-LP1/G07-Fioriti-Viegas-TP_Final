#pragma once
#include <ctime>
#include <string>
#include <sstream>
#include "Cfluido.h"

using namespace std;

class Cpaciente
{
protected:
	Cfluido* sangre;
	Cfluido* medula;
	Cfluido* plasma;
	string nombre;
	string apellido;
	time_t fecha;
	char sexo;
	string telefono;
	string dni;
public:
	Cpaciente(string nombre, string apellido, time_t fecha, char sexo, string telefono, string dni);
	~Cpaciente();
	virtual string to_string() = 0;
	virtual void imprimir() = 0;
	Cfluido* get_sangre();
	Cfluido* get_medula();
	Cfluido* get_plasma();
	string get_dni();
};

