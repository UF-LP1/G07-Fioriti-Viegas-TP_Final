#pragma once
#include "Ccentro_salud.h"

using namespace std;

class CBSA
{
	vector<Ccentro_salud*> centros;
public:
	CBSA(vector<Ccentro_salud*> centros);
	~CBSA();
	void agregar_paciente(Cpaciente* nuevo, string nombre_centro, string partido, string direccion);
	void Buscar_espera();
	void buscar_prioridad_receptor(string dni);
	void imprimir();
	string to_string();
	void donaciones_provincia();
	friend ostream& operator<<(ostream& out, const CBSA& C);

};
