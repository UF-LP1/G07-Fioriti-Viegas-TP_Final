#include "Ccentro_salud.h"

Ccentro_salud::Ccentro_salud(string nombre, string direccion, string partido, provincias provincia, string telefono, vector<Cpaciente*> pacientes): nombre(nombre)
{
	this->direccion = direccion;
	this->partido = partido;
	this->provincia = provincia;
	this->telefono = telefono;
	this->pacientes = pacientes;
}

Ccentro_salud::~Ccentro_salud()
{
}

void Ccentro_salud::imprimir()
{
	cout << this->to_string() << endl;
}

string Ccentro_salud::to_string()
{
	stringstream salida;
	salida << "Nombre del establecimiento: " << this->nombre << endl << "Direccion: " << this->direccion << endl
		<< "Partido: " << this->partido << endl <<"Provincia: " << this->provincia << endl <<
		"Telefono: " << this->telefono << endl;
	salida << "Pacientes del centro de salud: " << endl;
	int i = 0;
	while(i != this->pacientes.size()) {
		salida << this->pacientes[i]->to_string() << endl;
		i++;
	}
	salida << endl;
	return salida.str();
}

const string Ccentro_salud::get_nombre()
{
	return this->nombre;
}

string Ccentro_salud::get_direccion()
{
	return this->direccion;
}

string Ccentro_salud::get_partido()
{
	return this->partido;
}

provincias Ccentro_salud::get_provincia()
{
	return this->provincia;
}

vector<Cpaciente*> Ccentro_salud::get_lista()
{
	return this->pacientes;
}

void Ccentro_salud::ordenarPaciente()
{
}

void Ccentro_salud::recibe(unsigned int receptor)
{
	Creceptor* paciente = dynamic_cast<Creceptor*>(this->pacientes[receptor]);
	paciente->set_estado(recibio);
	paciente->set_prioridad(0);
	time_t now = time(NULL);
	paciente->set_recibio(now);
}

void Ccentro_salud::dono(unsigned int donante)
{
	Cdonante* paciente = dynamic_cast<Cdonante*>(this->pacientes[donante]);
	paciente->set_meses(true);
	(*paciente).nuevo_registro();
}

void Ccentro_salud::agregar_paciente(Cpaciente& paciente)
{
	this->pacientes + paciente;
}

void Ccentro_salud::eliminarPa(unsigned int posicion)
{
	this->pacientes - *this->pacientes[posicion];
}

ostream& operator<<(ostream& out, Ccentro_salud& C)
{
	out << C.to_string() << endl;
	return out;
}

vector<Cpaciente*> operator+(vector<Cpaciente*>& lista, Cpaciente& C)
{
	bool repetido = false;
	int i = 0;
	while(i < lista.size()) {
		if (lista[i] == &C) {
			repetido = true;
			cout << "El paciente ya se encuentra en la lista." << endl;
			break;
		}
		i++;
	}
	if(repetido == false)
		lista.push_back(&C);
	return lista;
}

vector<Cpaciente*> operator-(vector<Cpaciente*>& lista, Cpaciente& C)
{
	int i = 0;
	while (i < lista.size()) {
		if (lista[i]->get_dni() == C.get_dni()) {
			lista.erase(lista.begin() + i);
			break;
		}
		i++;
	}
	if (lista.size() == i)
		cout << "No se encontro el paciente que se quiere eliminar" << endl;
	return lista;
}

bool operator==(Creceptor& Cr , Cdonante& Cd)
{
	bool compatible = false;
	if (Cr.get_estado() != 2) {
		Csangre* sangre = dynamic_cast<Csangre*>(Cd.get_registro()[Cd.get_registro().size()-1]->get_fluido());
		if(sangre != nullptr)
			compatible = Cr.verificar_trasfusion(sangre->get_Rh(), sangre->get_tipo());
		Cmedula* medula = dynamic_cast<Cmedula*>(Cd.get_registro()[Cd.get_registro().size()-1]->get_fluido());
		if (medula != nullptr)
			compatible = true;
		Cplasma* plasma = dynamic_cast<Cplasma*>(Cd.get_registro()[Cd.get_registro().size()-1]->get_fluido());
		if (plasma == nullptr)
			compatible = true;
	}
	return compatible;
}

bool operator!=(Creceptor& Cr, Cdonante& Cd)
{
	bool compatible = true;
	if (Cr.get_estado() != 2) {
		Csangre* sangre = dynamic_cast<Csangre*>(Cd.get_registro()[Cd.get_registro().size()-1]->get_fluido());
		if (sangre != nullptr)
			if (Cr.verificar_trasfusion(sangre->get_Rh(), sangre->get_tipo()) && Cd.VerificarFechaMax())
				compatible = false;
		Cmedula* medula = dynamic_cast<Cmedula*>(Cd.get_registro()[Cd.get_registro().size()-1]->get_fluido());
		if (medula != nullptr && Cd.VerificarFechaMax())
			compatible = false;
		Cplasma* plasma = dynamic_cast<Cplasma*>(Cd.get_registro()[Cd.get_registro().size()]->get_fluido());
		if (plasma == nullptr && Cd.VerificarFechaMax())
			compatible = false;
	}
	return compatible;
}
