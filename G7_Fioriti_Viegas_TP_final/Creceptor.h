#pragma once
#include "Cpaciente.h"
#include "Eestados.h"

class Creceptor: public Cpaciente
{
	time_t fecha_ingreso;
	time_t* recibio;
	unsigned int prioridad;
	estados estado;
public:
	Creceptor();
	Creceptor(time_t fecha_ingreso,time_t* recibio, estados estado, string nombre, string apellido, string telefono, string dni, char sexo, time_t fecha);
	~Creceptor();
	string to_string();
	void imprimir();
	bool verificar_trasfusion(char Rh, tipo_sangre tipo);
	estados get_estado();
	time_t get_ingreso();
	string get_dni();
	time_t* get_recibio();
	void set_recibio(time_t recibio);
	void set_prioridad(unsigned int prioridad);
	void set_estado(estados estado);
	unsigned int get_prioridad();
	friend ostream& operator<<(ostream& out, Creceptor& C);
};

