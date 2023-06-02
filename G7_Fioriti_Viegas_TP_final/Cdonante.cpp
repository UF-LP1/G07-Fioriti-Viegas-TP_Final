#include "Cdonante.h"

Cdonante::Cdonante(unsigned int edad, float peso, bool enfermedades, bool meses, string nombre, string apellido, string telefono, char sexo, string dni, time_t fecha):Cpaciente(nombre,apellido,fecha,sexo,telefono,dni)
{
	this->edad = edad;
	this->peso = peso;
	this->enfermedades = enfermedades;
	this->meses = meses;
}

Cdonante::~Cdonante()
{
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
