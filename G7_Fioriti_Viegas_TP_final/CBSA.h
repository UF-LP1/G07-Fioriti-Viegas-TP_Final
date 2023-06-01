#pragma once
#include "Cpaciente.h"
#include "Ccentro_salud.h"
#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class CBSA
{
	vector<Ccentro_salud*> centros;
public:
	CBSA(vector<Ccentro_salud*> centros);
	~CBSA();
	void agregar_paciente(Cpaciente nuevo);
	void Buscar_espera();
	void buscar_prioridad_receptor(string dni);
	void imprimir();
	string to_string();
	void donaciones_provincia();
};

