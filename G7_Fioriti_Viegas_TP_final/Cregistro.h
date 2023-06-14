#pragma once
#include <ctime>
#include "Cfluido.h"
#include <sstream>
#include <string>
using namespace std;

class Cregistro
{
	time_t fecha_extraccion;
	float volumen;
	Cfluido* fluido;
public:
	Cregistro(time_t fecha_extraccion, float volumen, Cfluido* fluido);
	~Cregistro();
	string to_string();
	void imprimir();
	time_t get_fecha_extraccion();
	Cfluido* get_fluido();
	void set_fluido(Cfluido* fluido);
	void set_volumen(float volumen);
	void set_extraccion(time_t extraccion);
	friend ostream& operator<<(ostream& out, Cregistro& C);
};

