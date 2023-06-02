#include "CBSA.h"

CBSA::CBSA(vector<Ccentro_salud*> centros)
{
	this->centros = centros;
}

CBSA::~CBSA()
{
}

void CBSA::agregar_paciente(Cpaciente *nuevo, string nombre, string partido, string direccion)
{
	vector<Cpaciente*>* aux;
	for (int i = 0; i != this->centros.size(); i++) {
		if (nombre == this->centros[i]->get_nombre() && partido == this->centros[i]->get_partido() && direccion == this->centros[i]->get_direccion()) {
			aux = &this->centros[i]->get_lista();
			aux->push_back(nuevo);
		}
	}
	delete[] aux;
}

void CBSA::Buscar_espera()
{
	for (int i = 0; i != this->centros.size(); i++) {
		for (int j = 0; i != this->centros[i]->get_lista().size(); i++) {
			Creceptor* receptor = dynamic_cast<Creceptor*>(this->centros[i]->get_lista()[j]);
			cout << "Centro de salud: " << this->centros[i]->get_nombre() << endl;
			if (receptor != nullptr)
				if (receptor->get_estado() != 2)
					cout << receptor;
		}
	}
}

unsigned int CBSA::buscar_prioridad_receptor(string dni) 
{
	for (int i = 0; i != this->centros.size(); i++) {
		for (int j = 0; i != this->centros[i]->get_lista().size(); i++) {
			Creceptor* receptor = dynamic_cast<Creceptor*>(this->centros[i]->get_lista()[j]);
			if (receptor == nullptr)
				if (receptor->get_dni() == dni)
					return receptor->get_prioridad();
		}
	}
	return 0;
}

void CBSA::imprimir()
{
	cout << this->to_string() << endl;
}

string CBSA::to_string()
{
	stringstream salida;
	salida << "Datos de los centros de salud: " << endl;
	for (int i = 0; i != this->centros.size(); i++) {
		salida << this->centros[i]->to_string();
	}
	return salida.str();
}

void CBSA::donaciones_provincia()
{
}

ostream& operator<<(ostream& out, CBSA& C)
{
	out << C.to_string() << endl;
}
