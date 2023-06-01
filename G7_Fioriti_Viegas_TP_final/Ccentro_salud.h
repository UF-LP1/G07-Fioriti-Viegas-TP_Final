#pragma once
#include <string>
using namespace std;

class Ccentro_salud
{
	string nombre;
	string direccion;
	string partido;
	string provincia;
	string telefono;
public:
	Ccentro_salud(string nombre, string direccion, string partido, string provincia, string telefono);
	~Ccentro_salud();
	void imprimmir();
	void to_string();

};

