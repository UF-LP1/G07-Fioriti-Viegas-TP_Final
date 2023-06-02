#include "Ccentro_salud.h"

Ccentro_salud::Ccentro_salud(string nombre, string direccion, string partido, string provincia, string telefono)
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

vector<Cpaciente*> Ccentro_salud::get_lista()
{
	return this->pacientes;
}

ostream& operator<<(ostream& out, Ccentro_salud& C)
{
	out << C.to_string() << endl;
	return out;
}
