#include "CBSA.h"

CBSA::CBSA(vector<Ccentro_salud*> centros)
{
	this->centros = centros;
}

CBSA::~CBSA()
{
}

void CBSA::Buscar_espera(/*string nombre, int provincia, string direccion*/)
{
	bool ninguno = true;
	for (int i = 0; i != this->centros.size(); i++) {
		for (int j = 0; i != this->centros[i]->get_lista().size(); i++) { //de lo contrario, if(this->centros[i]->get_nombre() == nombre && this->centros[i]->get_provincia() == provincia && this->centros[i]->get_direccion == direccion)
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
	int acumCABA, acumBsAs, acumMendoza, acumSanLuis, acumSantaFe, acumSanJuan, acumSantiago, acumNeuquen, acumLaPampa, acumLaRioja, acumCatamarca,acumRioNegro, acumChubut, acumTierraDelFuego,
		acumCordoba, acumEntreRios, acumCorrientes, acumMisiones, acumTucuman, acumJujuy, acumSalta, acumFormosa, acumSantCruz, acumChaco;
	tm* recibio = new tm;
	time_t now = time(NULL);
	tm* ahora = new tm;
	ahora = localtime(&now);
	for (int h = 0; h < ahora->tm_mon + 1; h++) {
		cout << "Mes " << h + 1 << endl;
		acumCABA = 0;
		acumBsAs = 0;
		acumMendoza = 0;
		acumSanLuis = 0;
		acumSantaFe = 0;
		acumSanJuan = 0;
		acumSantiago = 0;
		acumNeuquen = 0;
		acumLaPampa = 0;
		acumLaRioja = 0;
		acumCatamarca = 0;
		acumRioNegro = 0;
		acumChubut = 0;
		acumTierraDelFuego = 0;
		acumCordoba = 0;
		acumEntreRios = 0;
		acumCorrientes = 0;
		acumMisiones = 0;
		acumTucuman = 0;
		acumJujuy = 0;
		acumSalta = 0;
		acumFormosa = 0;
		acumSantCruz = 0;
		acumChaco = 0;
		for (int i = 0; i < this->centros.size(); i++) {
			int p = this->centros[i]->get_provincia();
			for (int j = 0; j < this->centros[i]->get_lista().size(); j++) {
				Creceptor* receptor = dynamic_cast<Creceptor*>(this->centros[i]->get_lista()[j]);
				recibio = localtime(receptor->get_recibio());
				if (receptor != nullptr && receptor->get_estado() == 2 && recibio->tm_year == ahora->tm_year && recibio->tm_mon == h) { //solo va a dar las estadsticas de el anio actual
					if (p == 0)
						acumJujuy++;
					else if (p == 1)
						acumSalta++;
					else if (p == 2)
						acumFormosa;
					else if (p == 3)
						acumTucuman++;
					else if (p == 4)
						acumMisiones++;
					else if (p == 5)
						acumSanLuis;
					else if (p == 6)
						acumSanJuan++;
					else if (p == 7)
						acumMendoza++;
					else if (p == 8)
						acumCordoba++;
					else if (p == 9)
						acumCorrientes++;
					else if (p == 10)
						acumEntreRios++;
					else if (p == 11)
						acumBsAs++;
					else if (p == 12)
						acumCABA++;
					else if (p == 13)
						acumNeuquen++;
					else if (p == 14)
						acumLaPampa++;
					else if (p == 15)
						acumSantCruz++;
					else if (p == 16)
						acumChubut++;
					else if (p == 17)
						acumTierraDelFuego++;
					else if (p == 18)
						acumLaRioja++;
					else if (p == 19)
						acumChaco++;
					else if (p == 20)
						acumSantaFe++;
					else if (p == 21)
						acumCatamarca++;
					else if (p == 22)
						acumRioNegro++;
					else if (p == 23)
						acumSantiago++;
				}
				delete receptor;
			}
		}
		cout << "Donantes en: " << endl;
		cout << "Jujuy: " << acumJujuy << endl;
		cout << "Salta: " << acumSalta << endl;
		cout << "Formosa: " << acumFormosa << endl;
		cout << "Tucuman: " << acumTucuman << endl;
		cout << "Misiones: " << acumMisiones << endl;
		cout << "San Luis: " << acumSanLuis << endl;
		cout << "San Juan: " << acumSanJuan <<endl;
		cout << "Mendoza: " << acumMendoza << endl;
		cout << "Cordoba: " << acumCordoba << endl;
		cout << "Corrientes: " << acumCorrientes << endl;
		cout << "Entre Rios: " << acumEntreRios << endl;
		cout << "Bs As: " << acumBsAs << endl;
		cout << "CABA: " << acumCABA << endl;
		cout << "Neuquen: " << acumNeuquen << endl;
		cout << "La Pampa: " << acumLaPampa << endl;
		cout << "Santa Cruz: " << acumSantCruz << endl;
		cout << "Chubut: " << acumChubut << endl;
		cout << "Tierra del Fuego: " << acumTierraDelFuego << endl;
		cout << "La Rioja: " << acumLaRioja << endl;
		cout << "Chaco: " << acumChaco << endl;
		cout << "Santa Fe: " << acumSantaFe << endl;
		cout << "Catamarca: " << acumCatamarca << endl;
		cout << "Rio Negro: " << acumRioNegro << endl;
		cout << "Santiago del Estero: " << acumSantiago << endl;
	}
	delete ahora;
	delete recibio;
}

void CBSA::agregar_donante(Cpaciente& paciente, Ccentro_salud& centro)
{
	Cdonante* donante = dynamic_cast<Cdonante*>(&paciente);
	if((*donante).get_edad() <= 65 && (*donante).get_edad() >= 18 && (*donante).get_enfermedades() == false && (*donante).get_meses() == false && (*donante).get_peso() >= 50)
		for (int i = 0; i < this->centros.size(); i++) {
			if (this->centros[i] == &centro)
				this->centros[i].agregar_paciente(paciente);
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
