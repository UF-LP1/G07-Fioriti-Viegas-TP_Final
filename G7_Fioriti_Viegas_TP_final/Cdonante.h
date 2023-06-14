#pragma once
#include "Cpaciente.h"
#include "Cregistro.h"

class Cdonante: public Cpaciente
{
	Cregistro* registro;
	unsigned int edad;
	float peso;
	bool enfermedades;
	bool meses;
public:
	Cdonante(unsigned int edad, float peso, bool enfermedades, bool meses, string nombre, string apellido, string telefono, char sexo, string dni, time_t fecha, Cregistro registro);
	~Cdonante();
	unsigned int get_edad();
	float get_peso();
	bool get_enfermedades();
	bool get_meses();
	Cregistro* get_registro();
	void set_meses(bool meses);
	bool VerificarFechaMax();
	void anular_registro();
	string to_string();
	void imprimir();
	friend ostream& operator<<(ostream& out, Cdonante& C);
};

