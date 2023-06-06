#include "Creceptor.h"

Creceptor::Creceptor(time_t fecha_ingreso, estados estado, string nombre, string apellido, string telefono, string dni, char sexo, time_t fecha):Cpaciente(nombre,apellido,fecha,sexo,telefono,dni)
{
	unsigned int acum = 0;
	time_t diferencia;
	int semanas;
	time_t now = time(NULL);
	this->fecha_ingreso = fecha_ingreso;
	if (estado == 2)
		acum = 0;
	else if (estado == 0) {
		acum++;
		diferencia = difftime(fecha_ingreso, now);
		semanas = (int)diferencia / (60 * 60 * 24 * 7);
		if (semanas >= 1 && semanas < 3)
			acum++;
		else if (semanas < 6 && semanas >= 3)
			acum += 2;
		else if(semanas >= 6)
			acum += 3;
	}
	else
		acum = 5;
	this->prioridad = acum;
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

bool Creceptor::verificar_trasfusion(char Rh, tipo_sangre tipo)
{
	bool compatible;
	Csangre* sangre = dynamic_cast<Csangre*>(this->get_sangre());
	if (sangre->get_Rh() != Rh)
		compatible = false;
	if(sangre->get_tipo() == )
	return false;
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
