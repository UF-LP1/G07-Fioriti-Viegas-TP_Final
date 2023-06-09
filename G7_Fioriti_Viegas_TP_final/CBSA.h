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
	void donaciones_provincia();
	void agregar_donante(Cpaciente& donante, Ccentro_salud &centro);
	void agregar_receptor();
	friend ostream& operator<<(ostream& out, const CBSA& C);
	friend vector<Ccentro_salud*> operator+(vector<Ccentro_salud*>& lista, Ccentro_salud& C);
	friend vector<Ccentro_salud*> operator-(vector<Ccentro_salud*>&lista, Ccentro_salud& C);
};
