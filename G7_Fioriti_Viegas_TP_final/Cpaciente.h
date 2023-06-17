#pragma once
#include <ctime>
#include <string>
#include <sstream>
#include "Cmedula.h"
#include "Cplasma.h"
#include "Csangre.h"
#include "tipo_sangre.h"
using namespace std;

class Cpaciente
{
protected:
	Cfluido* sangre;
	string nombre;
	string apellido;
	time_t fecha;
	char sexo;
	string telefono;
	string dni;
public:
	Cpaciente();
	Cpaciente(string nombre, string apellido, time_t fecha, char sexo, string telefono, string dni, Cfluido* sangre);
	~Cpaciente();
	virtual string to_string() = 0;
	virtual void imprimir() = 0;
	Cfluido* get_sangre();
	string get_dni();
};

