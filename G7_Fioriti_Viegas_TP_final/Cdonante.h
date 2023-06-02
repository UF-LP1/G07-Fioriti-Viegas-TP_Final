#pragma once
#include "Cpaciente.h"

class Cdonante: public Cpaciente
{
	unsigned int edad;
	float peso;
	bool enfermedades;
	bool meses;
public:
	Cdonante(unsigned int edad, float peso, bool enfermedades, bool meses, string nombre, string apellido, string telefono, char sexo, string dni, time_t fecha);
	~Cdonante();
	string to_string();
	void imprimir();
	friend ostream& operator<<(ostream& out, Cdonante& C);
};

