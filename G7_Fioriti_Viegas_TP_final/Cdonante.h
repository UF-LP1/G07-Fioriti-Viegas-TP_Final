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
	unsigned int get_edad();
	float get_peso();
	bool get_enfermedades();
	bool get_meses();
	string to_string();
	void imprimir();
	friend ostream& operator<<(ostream& out, Cdonante& C);
};

