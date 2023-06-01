#pragma once
#include "Cpaciente.h"
#include "Eestados.h"

class Creceptor: public Cpaciente
{
	time_t fecha_espera;
	unsigned int prioridad;
	estados estado;
public:
	Creceptor(time_t fecha_espera, unsigned int prioridad, estados estado, string nombre, string apellido, string telefono, string dni, char sexo, time_t fecha);
	~Creceptor();
	string to_string();
	void imprimir();
};

