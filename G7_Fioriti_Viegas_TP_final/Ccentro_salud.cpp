#include "Ccentro_salud.h"

Ccentro_salud::Ccentro_salud(string nombre, string direccion, string partido, provincias provincia, string telefono)
{
	this->nombre = nombre;
	this->direccion = direccion;
	this->partido = partido;
	this->provincia = provincia;
	this->telefono = telefono;
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
	for (int i = 0; i < this->pacientes.size(); i++) {
		salida << this->pacientes[i]->to_string() << endl;
	}
	salida << endl;
	return salida.str();
}

string Ccentro_salud::get_nombre()
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

void Ccentro_salud::agregar_paciente(Cpaciente& paciente)
{
	vector<Cpaciente*>* aux = &this->get_lista();
	*aux + paciente;
}

ostream& operator<<(ostream& out, Ccentro_salud& C)
{
	out << C.to_string() << endl;
	return out;
}

vector<Cpaciente*> operator+(vector<Cpaciente*>& lista, Cpaciente& C)
{
	bool repetido = false;
	for (int i = 0; i < lista.size(); i++) {
		if (lista[i] == &C) {
			repetido = true;
			cout << "El paciente ya se encuentra en la lista." << endl;
			break;
		}
	}
	if(repetido == false)
		lista.push_back(&C);
	return lista;
}

vector<Cpaciente*> operator-(vector<Cpaciente*>& lista, Cpaciente& C)
{
	int largo = lista.size();
	for (int i = 0; i < largo; i++)
		if (lista[i]->get_dni() == C.get_dni()) {
			lista.erase(lista.begin() + i);
			break;
		}
	if (lista.size() == largo)
		cout << "No se encontro el paciente que se quiere eliminar" << endl;
	return lista;
}

bool operator==(Creceptor& Cr , Cdonante& Cd)
{
	bool compatible = false;
	if (Cr.get_estado() != 2) {
		Csangre* sangre = dynamic_cast<Csangre*>(Cd.get_sangre());
		compatible = Cr.verificar_trasfusion(sangre->get_Rh(), sangre->get_tipo());
	}
	return compatible;
}

bool operator!=(Creceptor& Cr, Cdonante& Cd)
{
	bool compatible = false;
	if (Cr.get_estado() != 2) {
		Csangre* sangre = dynamic_cast<Csangre*>(Cd.get_sangre());
		compatible = Cr.verificar_trasfusion(sangre->get_Rh(), sangre->get_tipo());
	}
	return compatible;
}
