#pragma once
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include "Creceptor.h"
#include "Cdonante.h"
#include "E_provincia.h"

using namespace std;

class Ccentro_salud
{
	vector<Cpaciente*> pacientes;
	string direccion;
	string partido;
	provincias provincia;
	string telefono;
public:
	const string nombre;
	Ccentro_salud(string nombre, string direccion, string partido, provincias provincia, string telefono, vector<Cpaciente*> pacientes);
	~Ccentro_salud();
	void imprimir();
	string to_string();
	const string get_nombre();
	string get_direccion();
	string get_partido();
	provincias get_provincia();
	vector<Cpaciente*> get_lista();
	void ordenarPaciente();
	void recibe(unsigned int receptor);
	void dono(unsigned int donante);
	void agregar_paciente(Cpaciente& paciente);
	void eliminarPa(unsigned int posicion);
	friend ostream& operator<<(ostream& out, Ccentro_salud& C);
};
vector<Cpaciente*> operator+(vector<Cpaciente*>& lista, Cpaciente& C);
vector<Cpaciente*> operator-(vector<Cpaciente*>& lista, Cpaciente& C);
bool operator==(Creceptor& Cr, Cdonante& Cd);
bool operator!=(Creceptor& Cr, Cdonante& Cd);
