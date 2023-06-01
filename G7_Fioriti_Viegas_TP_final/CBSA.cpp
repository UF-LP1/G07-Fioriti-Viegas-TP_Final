#include "CBSA.h"

CBSA::CBSA(vector<Ccentro_salud*> centros)
{
	this->centros = centros;
}

CBSA::~CBSA()
{
}

void CBSA::agregar_paciente(Cpaciente nuevo)
{

}

void CBSA::Buscar_espera()
{
}

void CBSA::buscar_prioridad_receptor(string dni)
{
}

void CBSA::imprimir()
{
	cout << this->to_string() << endl;
}

string CBSA::to_string()
{
	stringstream salida;
	salida << "Datos de los centros de salud: " << endl;
	for (vector<Ccentro_salud*>::iterator it = this->centros.begin(); it != this->centros.end(); it++) {
		salida << (*it)->to_string();
	}
	return salida.str();
}

void CBSA::donaciones_provincia()
{
}
