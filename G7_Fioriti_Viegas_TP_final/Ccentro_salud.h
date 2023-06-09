#pragma once
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include "Cdonante.h"
#include "Creceptor.h"
#include "Cregistro.h"
#include "E_provincia.h"

using namespace std;

class Ccentro_salud
{
	vector<Cpaciente*> pacientes;
	string nombre;
	string direccion;
	string partido;
	provincias provincia;
	string telefono;
public:
	Ccentro_salud(string nombre, string direccion, string partido, provincias provincia, string telefono);
	~Ccentro_salud();
	void imprimir();
	string to_string();
	string get_nombre();
	string get_direccion();
	string get_partido();
	provincias get_provincia();
	vector<Cpaciente*> get_lista();
	void agregar_paciente(Cpaciente& paciente);
	friend ostream& operator<<(ostream& out, Ccentro_salud& C);
	friend vector<Cpaciente*> operator+(vector<Cpaciente*>& lista, Cpaciente& C);
	friend vector<Cpaciente*> operator-(vector<Cpaciente*>& lista, Cpaciente& C);
	friend bool operator==(Creceptor& Cr, Cdonante& Cd);
	friend bool operator!=(Creceptor& Cr, Cdonante& Cd);
};

