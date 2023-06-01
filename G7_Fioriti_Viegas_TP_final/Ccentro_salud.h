#pragma once
#include <string>
#include <sstream>
#include "Cpaciente.h"
#include "Cregistro.h"

using namespace std;

class Ccentro_salud
{
	vector<Cpaciente*> pacientes;
	string nombre;
	string direccion;
	string partido;
	string provincia;
	string telefono;
public:
	Ccentro_salud(string nombre, string direccion, string partido, string provincia, string telefono);
	~Ccentro_salud();
	void imprimir();
	string to_string();
};

