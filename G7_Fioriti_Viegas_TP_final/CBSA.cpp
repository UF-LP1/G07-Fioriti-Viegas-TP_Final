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
	int i = 0, j;
	bool ninguno = true;
	while(i != this->centros.size()) {
		j = 0;
		std::cout << "Centro de salud: " << this->centros[i]->get_nombre() << endl;
		ninguno = true;
		while(j != this->centros[i]->get_lista().size()) {
			Creceptor* receptor = dynamic_cast<Creceptor*>(this->centros[i]->get_lista()[j]);
			if (receptor != nullptr)
				if (receptor->get_estado() != 2) {
					std::cout << *receptor;
					ninguno = false;
				}
			j++;
		}
		if (ninguno == true)
			std::cout << "Ninguno." << endl;
		i++;
	}
}

unsigned int CBSA::buscar_prioridad_receptor(string dni) 
{
	int i = 0, j = 0;
	int prioridad = 0;
	bool encontrado = false;
	while(i != this->centros.size()) {
		j = 0;
		while(j != this->centros[i]->get_lista().size()) {
			Creceptor* receptor = dynamic_cast<Creceptor*>(this->centros[i]->get_lista()[j]);
			if (receptor != nullptr && receptor->get_dni() == dni){
				prioridad = receptor->get_prioridad();
				encontrado = true;
				break;
			}
			j++;
		}
		i++;
		if (encontrado == true)
			break;
	}
	if (i == this->centros.size() && j == this->centros[i]->get_lista().size())
		std::cout << "No se encontro el receptor." << endl;
	return prioridad;
}

void CBSA::imprimir()
{
	std::cout << this->to_string() << endl;
}

string CBSA::to_string()
{
	stringstream salida;
	int i = 0;
	salida << "Datos de los centros de salud: " << endl;
	while(i != this->centros.size()) {
		salida << this->centros[i]->to_string();
		i++;
	}
	return salida.str();
}

void CBSA::empezar_transfusion()
{
	int i = 0, j, centro = 0, paciente = 0;
	Creceptor* prioridad = nullptr;
	while (i < this->centros.size()) {
		j = 0;
		while (j < this->centros[i]->get_lista().size()) {
			Creceptor* receptor = dynamic_cast<Creceptor*>(this->centros[i]->get_lista()[j]);
			if (receptor != nullptr && prioridad == nullptr ) {
				prioridad = receptor;
				centro = i;
				paciente = j;
			}
			else if (receptor != nullptr && receptor->get_prioridad() > prioridad->get_prioridad()) {
				prioridad = receptor;
				centro = i;
				paciente = j;
			}
			else if (receptor != nullptr && receptor->get_prioridad() == prioridad->get_prioridad())
				if (receptor->get_ingreso() < prioridad->get_ingreso()) {
					prioridad = receptor;
					centro = i;
					paciente = j;
				}
			j++;
		}
		i++;
	}
	if (prioridad != nullptr) {
		try {
			encontrar_donante(centro, *prioridad, paciente);
		}catch (exception* e) {
			throw e;
		}
	}
	else
		throw new exception("No hay receptores aun.");
}

void CBSA::encontrar_donante(unsigned int centro, Creceptor& receptor, unsigned int paciente)
{
	int i = 0, j = 0;
	while (i < this->centros.size())
	{
		if (this->centros[centro]->get_provincia() == this->centros[i]->get_provincia() && this->centros[centro]->get_partido() == this->centros[i]->get_partido()) {
			j = 0;
			while (j < this->centros[i]->get_lista().size()) {
				Cdonante* donante = dynamic_cast<Cdonante*>(this->centros[i]->get_lista()[j]);
				if (donante != nullptr && receptor == *donante) { //con la sobrecarga del operador == verifico la caducidad, que se done lo que se necesita y si es compatible
					srand(time(NULL));
					int aleatorio = rand() % 2;
					if (aleatorio == 1) {
						this->centros[centro]->recibe(paciente);
						this->centros[i]->dono(j);
						break;
					}
					else if(aleatorio == 0){
						this->centros[centro]->grave(paciente);
						throw new exception("Transfusion fallida!!");
					}
				}
				j++;
			}
		}
		i++;
	}
}


void CBSA::donaciones_provincia()
{
	int acumCABA, acumBsAs, acumMendoza, acumSanLuis, acumSantaFe, acumSanJuan, acumSantiago, acumNeuquen, acumLaPampa, acumLaRioja, acumCatamarca, acumRioNegro, acumChubut, acumTierraDelFuego,
		acumCordoba, acumEntreRios, acumCorrientes, acumMisiones, acumTucuman, acumJujuy, acumSalta, acumFormosa, acumSantCruz, acumChaco; // inicializo los acumuladores de cada provincia
	tm* recibio = new tm; //guarda en formato de estructura la fecha en la que recibio la donacion
	time_t now = time(NULL);//obtengo la fecha actual en segundos
	tm* ahora = new tm;
	localtime_s(ahora,&now);//convierto now a tm y lo guardo en ahora
	int h = 0, i, j;
	while (h < ahora->tm_mon + 1) {//se repite hasta el mes actual
		std::cout << "Mes " << h + 1 << endl;
		//igualo acumuladores a 0
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
		i = 0;
		while (i < this->centros.size()) { //recorro todo los centros
			int p = this->centros[i]->get_provincia();//guardo el enumerador de la provincia a la que pertenece el centro
			j = 0;
			while (j < this->centros[i]->get_lista().size()) {//recorro la lista de pacientes
				Creceptor* receptor = dynamic_cast<Creceptor*>(this->centros[i]->get_lista()[j]);
				if (receptor != nullptr && receptor->get_recibio() != nullptr) {
					localtime_s(recibio, receptor->get_recibio());//paso a tm* la fecha de la transfusion
					if (receptor->get_estado() == 2 && recibio->tm_year == ahora->tm_year && recibio->tm_mon == h) { //verifico que recibio y que haya pasado en el mes correspondiente del anio actual
						//se suma a la cantidad de doinaciones en la provincia correspondiente
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
				}
				j++;
			}
			i++;
		}
		//imprimo los resultados del mes correspondiente
		std::cout << "Donantes en: " << endl;
		std::cout << "Jujuy: " << acumJujuy << endl;
		std::cout << "Salta: " << acumSalta << endl;
		std::cout << "Formosa: " << acumFormosa << endl;
		std::cout << "Tucuman: " << acumTucuman << endl;
		std::cout << "Misiones: " << acumMisiones << endl;
		std::cout << "San Luis: " << acumSanLuis << endl;
		std::cout << "San Juan: " << acumSanJuan << endl;
		std::cout << "Mendoza: " << acumMendoza << endl;
		std::cout << "Cordoba: " << acumCordoba << endl;
		std::cout << "Corrientes: " << acumCorrientes << endl;
		std::cout << "Entre Rios: " << acumEntreRios << endl;
		std::cout << "Bs As: " << acumBsAs << endl;
		std::cout << "CABA: " << acumCABA << endl;
		std::cout << "Neuquen: " << acumNeuquen << endl;
		std::cout << "La Pampa: " << acumLaPampa << endl;
		std::cout << "Santa Cruz: " << acumSantCruz << endl;
		std::cout << "Chubut: " << acumChubut << endl;
		std::cout << "Tierra del Fuego: " << acumTierraDelFuego << endl;
		std::cout << "La Rioja: " << acumLaRioja << endl;
		std::cout << "Chaco: " << acumChaco << endl;
		std::cout << "Santa Fe: " << acumSantaFe << endl;
		std::cout << "Catamarca: " << acumCatamarca << endl;
		std::cout << "Rio Negro: " << acumRioNegro << endl;
		std::cout << "Santiago del Estero: " << acumSantiago << endl << endl;
		h++;
	}
}

//param: dni ->dni del pacinete a eliminar
void CBSA::eliminarPaciente(string dni)
{
	int i = 0;
	int j;
	bool listo = false;//para saber si se logro
	while(i < this->centros.size()) {//recorro la lista de centros
		j = 0;
		while(j < this->centros[i]->get_lista().size()) {//recorro la lista de pacientes
			if (this->centros[i]->get_lista()[j]->get_dni() == dni) {//comparo los dni
				this->centros[i]->eliminarPa(j);//llamo al metodo eliminar de los centros
				listo = true;
				cout << "Se elimino con exito al paciente de la lista." << endl;
				break;
			}
			j++;
		}
		if (listo == true)
			break;
		i++;
	}
	if (listo == false)
		cout << "No se encontro una persona con dicho dni en la lista." << endl;
}

void CBSA::agregar_donante(Cpaciente& paciente, Ccentro_salud& centro)
{
	Cdonante* donante = dynamic_cast<Cdonante*>(&paciente);//como lo paso como paciente, necesito convertirlo a donante
	int i = 0;
	if (donante->get_edad() <= 65 && donante->get_edad() >= 18 && donante->get_enfermedades() == false && donante->get_meses() == false && donante->get_peso() >= 50) {//verifico los requisitos
		while (i < this->centros.size()) {//recorro los centros
			if (*this->centros[i] == paciente)
				throw new exception("El donante ya se encuentra registrado");
			if (this->centros[i]->get_direccion() == centro.get_direccion() && this->centros[i]->get_nombre() == centro.get_nombre() && this->centros[i]->get_provincia() == centro.get_provincia()) {
				time_t now = time(NULL);
				srand(time(NULL));
				unsigned int random = rand() % (599 - 5);
				Cregistro registro(now, random, *donante->get_registro()[0]->get_fluido());
				donante->set_registro(registro);
				this->centros[i]->agregar_paciente(paciente);//cuando encuentro el centro, agrego al paciente
				break;
			}
			i++;
		}
	}
	else
		throw new exception("No puede donar actualmente.");
		
}

void CBSA::agregar_receptor(Cpaciente& receptor, Ccentro_salud& centro)
{
	int i = 0;
	while(i < this->centros.size()) {//recorro la lista de centros
		if (*this->centros[i] == receptor)
			throw new exception("El receptor ya se encuantra registrado");
		if (this->centros[i]->get_direccion() == centro.get_direccion() && this->centros[i]->get_nombre() == centro.get_nombre() && this->centros[i]->get_provincia() == centro.get_provincia())//me fijo que sean el mismo centro
			this->centros[i]->agregar_paciente(receptor);//agrego al paciente
		i++;
	}
}

ostream& operator<<(ostream& out, CBSA& C)
{
	out << C.to_string() << endl;//imprimo el banco de sangre
	return out;
}

vector<Ccentro_salud*> operator+(vector<Ccentro_salud*>& lista, Ccentro_salud& C)
{
	lista.push_back(&C);//agrego un centro a la lista
	return lista;
}

vector<Ccentro_salud*> operator-(vector<Ccentro_salud*>& lista, Ccentro_salud& C)
{
	int i = 0;
	while(i < lista.size())//recorro los centros
		if (lista[i]->get_direccion() == C.get_direccion() && lista[i]->get_nombre() == C.get_nombre() && lista[i]->get_partido() == C.get_partido()) {
			lista.erase(lista.begin() + i);//elimino el centro
			break;
			i++;
		}
	if (lista.size() == i)
		std::cout << "No se encontro el centro de salud que se quiere eliminar" << endl;
	return lista;
}

bool operator==(Ccentro_salud& centro, Cpaciente& r) {
	int i = 0;
	bool iguales = false;
	while (i < centro.get_lista().size()) {
		if (centro.get_lista()[i]->get_dni() == r.get_dni())
			iguales = true;
		i++;
	}
	return iguales;
}

bool operator!=(Ccentro_salud& centro, Cpaciente& r) {
	int i = 0;
	bool diferentes = true;
	while (i < centro.get_lista().size()) {
		if (centro.get_lista()[i]->get_dni() == r.get_dni())
			diferentes = false;
		i++;
	}
	return diferentes;
}