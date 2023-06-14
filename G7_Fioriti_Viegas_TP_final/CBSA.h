#pragma once
#include "Ccentro_salud.h"

using namespace std;

class CBSA
{
	vector<Ccentro_salud*> centros;
public:
	CBSA(vector<Ccentro_salud*> centros);
	~CBSA();
	void Buscar_espera();
	unsigned int buscar_prioridad_receptor(string dni);
	void imprimir();
	string to_string();
	void empezar_transfusion();
	void encontrar_donante(unsigned int centro, Creceptor& receptor, unsigned int paciente);
	void donaciones_provincia();
	void eliminarPaciente(Cpaciente& P);
	void agregar_donante(Cpaciente& donante, Ccentro_salud &centro);
	void agregar_receptor(Cpaciente& receptor, Ccentro_salud &centro);
	friend ostream& operator<<(ostream& out, const CBSA& C);
};
vector<Ccentro_salud*> operator+(vector<Ccentro_salud*>& lista, Ccentro_salud& C);
vector<Ccentro_salud*> operator-(vector<Ccentro_salud*>& lista, Ccentro_salud& C);
