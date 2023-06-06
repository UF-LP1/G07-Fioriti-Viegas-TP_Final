#include "CBSA.h"

CBSA::CBSA(vector<Ccentro_salud*> centros)
{
	this->centros = centros;
}

CBSA::~CBSA()
{
}

void CBSA::Buscar_espera()
{
	bool ninguno = true;
	for (int i = 0; i != this->centros.size(); i++) {
		for (int j = 0; i != this->centros[i]->get_lista().size(); i++) {
			ninguno = true;
			Creceptor* receptor = dynamic_cast<Creceptor*>(this->centros[i]->get_lista()[j]);
			cout << "Centro de salud: " << this->centros[i]->get_nombre() << endl;
			if (receptor != nullptr)
				if (receptor->get_estado() != 2) {
					cout << receptor;
					ninguno = false;
				}
		}
		if (ninguno == true)
			cout << "Ninguno." << endl;
	}
}

unsigned int CBSA::buscar_prioridad_receptor(string dni) 
{
	bool encontrado = false;
	for (int i = 0; i != this->centros.size(); i++) {
		for (int j = 0; i != this->centros[i]->get_lista().size(); i++) {
			Creceptor* receptor = dynamic_cast<Creceptor*>(this->centros[i]->get_lista()[j]);
			if (receptor == nullptr)
				if (receptor->get_dni() == dni) {
					return receptor->get_prioridad();
					encontrado = true;
					break;
				}
		}
		if (encontrado == true)
			break;
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
	int acumCABA = 0, acumBsAs = 0, acumMendoza = 0, acumSanLuis = 0, acumSantaFe = 0, acumSanJuan = 0, acumSantiago = 0, acumNeuquen = 0, acumLaPampa = 0, acumLaRioja = 0, acumCatamarca = 0,
		acumRioNegro = 0, acumChubut = 0, acumTierraDelFuego = 0, acumCordoba = 0, acumEntreRios = 0, acumCorrientes = 0, acumMisiones = 0, acumTucuman = 0, acumJujuy = 0, acumSalta = 0,
		acumFormosa = 0, acumSantCruz = 0, acumChaco = 0;
	time_t fecha;
	for (int h = 0; h < 12; h++) {
		cout << "Mes " << h + 1 << endl;
		for (int t = 0; t < 24; t++) {
			for (int i = 0; i < this->centros.size(); i++) {
				for (int j = 0; j < this->centros[i]->get_lista().size(); j++) {
					Cdonante* donante = dynamic_cast<Cdonante*>(this->centros[i]->get_lista()[j]);
					if (donante != nullptr) {
						
					}
				}
			}
			cout << "Donantes en ";
			if (t == 0)
				cout << "Jujuy: " << endl;
			else if (t == 1)
				cout << "Salta: " << endl;
			else if (t == 2)
				cout << "Formosa: " << endl;
		}
	}
}

ostream& operator<<(ostream& out, CBSA& C)
{
	out << C.to_string() << endl;
}

vector<Ccentro_salud*> operator+(vector<Ccentro_salud*>& lista, Ccentro_salud& C)
{
	lista.push_back(&C);
	return lista;
}

vector<Ccentro_salud*> operator-(vector<Ccentro_salud*>& lista, Ccentro_salud& C)
{
	int largo = lista.size();
	for (int i = 0; i < largo; i++)
		if (lista[i]->get_direccion() == C.get_direccion() && lista[i]->get_nombre() == C.get_nombre() && lista[i]->get_partido() == C.get_partido()) {
			lista.erase(lista.begin() + i);
			break;
		}
	if (lista.size() == largo)
		cout << "No se encontro el centro de salud que se quiere eliminar" << endl;
	return lista;
}
