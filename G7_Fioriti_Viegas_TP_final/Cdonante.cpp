#include "Cdonante.h"

Cdonante::Cdonante(unsigned int edad, float peso, bool enfermedades, bool meses, string nombre, string apellido, string telefono, char sexo, string dni, time_t fecha, vector<Cregistro*> registro):Cpaciente(nombre,apellido,fecha,sexo,telefono,dni)
{
	this->registro = registro;
	this->edad = edad;
	this->peso = peso;
	this->enfermedades = enfermedades;
	this->meses = meses;
}

Cdonante::~Cdonante()
{
}

unsigned int Cdonante::get_edad()
{
	return this->edad;
}

float Cdonante::get_peso()
{
	return this->peso;
}

bool Cdonante::get_enfermedades()
{
	return this->enfermedades;
}

bool Cdonante::get_meses()
{
	return this->meses;
}

vector<Cregistro*> Cdonante::get_registro()
{
	return this->registro;
}

void Cdonante::set_meses(bool meses)
{
	this->meses = meses;
}

void Cdonante::nuevo_registro()
{
	Cregistro* nuevo = new Cregistro();
	this->registro.push_back(nuevo);
}

bool Cdonante::VerificarFechaMax()
{
	int i = this->registro.size() - 1;
	bool enCondiciones = false;
	Csangre* sangre = dynamic_cast<Csangre*>(this->registro[i]->get_fluido());
	if (sangre != nullptr)
		enCondiciones = sangre->VerificarFechaMaxima(this->registro[i]->get_fecha_extraccion());
	Cplasma* plasma = dynamic_cast<Cplasma*>(this->registro[i]->get_fluido());
	if (plasma != nullptr)
		enCondiciones = plasma->VerificarFechaMaxima(this->registro[i]->get_fecha_extraccion());
	Cmedula* medula = dynamic_cast<Cmedula*>(this->registro[i]->get_fluido());
	if (medula != nullptr)
		enCondiciones = medula->VerificarFechaMaxima(this->registro[i]->get_fecha_extraccion());
	delete sangre;
	delete plasma;
	delete medula;

	return enCondiciones;

}

string Cdonante::to_string()
{
	stringstream salida;
	string enfermedad = "No";
	if (this->enfermedades == true)
		enfermedad = "Si";
	string espera = "No";
	if (this->meses == true)
		espera = "Si";
	tm* nacer = localtime(&this->fecha);
	salida << "Los datos del donante son: " << endl << "Nombre y apellido: " << this->nombre << this->apellido << endl << "Nacimiento: " << nacer->tm_mday << "/" << nacer->tm_mon + 1 << "/" << nacer->tm_year + 1900 << endl << "Sexo: " << this->sexo << endl << "DNI: " << this->dni << endl << "Edad: " << this->edad << endl << "Peso: " << this->peso << endl << "Telefono: " << this->telefono << endl << "Enfermedades de transmicion sanguinea?: " << enfermedad << endl << "Se tatuo o dono sangre en los ultimos 2 meses?: " << espera << endl;
	return string();
}

void Cdonante::imprimir()
{
	cout << this->to_string() << endl;
}

ostream& operator<<(ostream& out, Cdonante& C)
{
	out << C.to_string() << endl;
	return out;
}
