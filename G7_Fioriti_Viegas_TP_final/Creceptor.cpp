#include "Creceptor.h"

Creceptor::Creceptor(time_t fecha_ingreso, unsigned int prioridad, estados estado, string nombre, string apellido, string telefono, string dni, char sexo, time_t fecha):Cpaciente(nombre,apellido,fecha,sexo,telefono,dni)
{
	this->fecha_ingreso = fecha_ingreso;
	this->prioridad = prioridad;
	this->estado = estado;
}

Creceptor::~Creceptor()
{
}

string Creceptor::to_string()
{
	stringstream salida;
	tm* nacer = localtime(&this->fecha);
	tm* espera = localtime(&this->fecha_ingreso);
	salida << "Los datos del donante son: " << endl << "Nombre y apellido: " << this->nombre << this->apellido << endl << "Nacimiento: " << nacer->tm_mday << "/" << nacer->tm_mon + 1 << "/" << nacer->tm_year + 1900 << endl << "Sexo: " << this->sexo << endl << "DNI: " << this->dni << endl << "Telefono: " << this->telefono << endl << "Fecha de espera: " << espera->tm_mday << "/" << espera->tm_mon + 1 << "/" << espera->tm_year + 1900 << endl << "Prioridad: " << this->prioridad << endl << "Estado: " << this->estado << endl;
	return string();
}

void Creceptor::imprimir()
{
	cout << this->to_string() << endl;
}


estados Creceptor::get_estado()
{
	return this->estado;
}

string Creceptor::get_dni()
{
	return this->dni;
}

unsigned int Creceptor::get_prioridad()
{
	return this->prioridad;
}

ostream& operator<<(ostream& out, Creceptor& C)
{
	out << C.to_string() << endl;
}
