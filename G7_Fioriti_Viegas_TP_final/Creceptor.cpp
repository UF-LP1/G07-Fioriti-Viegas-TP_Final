#include "Creceptor.h"

Creceptor::Creceptor(time_t fecha_ingreso, time_t* recibio, estados estado, string nombre, string apellido, string telefono, string dni, char sexo, time_t fecha, Cfluido* necesita, Cfluido* sangre):Cpaciente(nombre,apellido,fecha,sexo,telefono,dni,sangre)
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
	this->recibio = recibio;
	this->necesita = necesita;
}

Creceptor::Creceptor(time_t fecha_ingreso, estados estado, string nombre, string apellido, string telefono, string dni, char sexo, time_t fecha, Cfluido* necesita, Cfluido* sangre):Cpaciente(nombre,apellido,fecha,sexo,telefono,dni,sangre)
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
			else if (semanas >= 6)
				acum += 3;
		}
		else
			acum = 5;
		this->prioridad = acum;
		this->estado = estado;
		this->recibio = nullptr;
		this->necesita = necesita;
}

Creceptor::~Creceptor()
{
}

string Creceptor::to_string()
{
	stringstream out;
	tm* nacer = new tm;
	localtime_s(nacer, &this->fecha);
	tm* espera = new tm;
	localtime_s(espera, &this->fecha_ingreso);
	out << "Los datos del receptor son: " << endl;
	out << "Nombre y apellido: " << this->apellido << ", " << this->nombre << endl;
	out << "Nacimiento: " << nacer->tm_mday << "/" << nacer->tm_mon + 1 << "/" << nacer->tm_year + 1900 << endl;
	out << "Sexo: " << this->sexo << endl;
	out << "DNI: " << this->dni << endl;
	out << "Telefono: " << this->telefono << endl;
	out << "Fecha de espera: " << espera->tm_mday << "/" << espera->tm_mon + 1 << "/" << espera->tm_year + 1900 << endl;
	out << "Prioridad: " << this->prioridad << endl;
	out << "Estado: " << this->estado << endl;
	delete espera;
	delete nacer;
	return out.str();
}

void Creceptor::imprimir()
{
	cout << this->to_string() << endl;
}

bool Creceptor::verificar_trasfusion(char Rh, tipo_sangre tipo)
{
	bool compatible = false;
	Csangre* sangre = dynamic_cast<Csangre*>(this->get_sangre());
	switch (tipo)
	{
	case A:
		if (Rh == '+') {
			if (sangre->get_tipo() == A && sangre->get_Rh() == '+' || sangre->get_tipo() == AB && sangre->get_Rh() == '+') // A+ dona a A+ y AB+
				compatible = true;
			else
				compatible = false;
		}
		else if (Rh == '-') {
			if (sangre->get_tipo() == A && sangre->get_Rh() == '+' || sangre->get_tipo() == AB && sangre->get_Rh() == '+' || sangre->get_tipo() == A && sangre->get_Rh() == '-' || sangre->get_tipo() == AB && sangre->get_Rh() == '-') // A- dona a A+ A- AB+ AB-
				compatible = true;
			else
				compatible = false;
		}
		break;
	case B:
		if (Rh == '+') {
			if (sangre->get_tipo() == B && sangre->get_Rh() == '+' || sangre->get_tipo() == AB && sangre->get_Rh() == '+') // B+ dona a B+ y AB+
				compatible = true;
			else
				compatible = false;
		}
		else if (Rh == '-') {
			if (sangre->get_tipo() == B && sangre->get_Rh() == '+' || sangre->get_tipo() == AB && sangre->get_Rh() == '+' || sangre->get_tipo() == B && sangre->get_Rh() == '-' || sangre->get_tipo() == AB && sangre->get_Rh() == '-') // B- dona a B+ B- AB+ y AB- 
				compatible = true;
			else
				compatible = false;
		}
		break;
	case AB:
		if (Rh == '+') {
			if (sangre->get_tipo() == AB && sangre->get_Rh() == '+') // AB+ dona a AB+ 
				compatible = true;
			else
				compatible = false;
		}
		else if (Rh == '-') {
			if (sangre->get_tipo() == AB && sangre->get_Rh() == '+' || sangre->get_tipo() == AB && sangre->get_Rh() == '-') // AB- dona a AB+ y AB-
				compatible = true;
			else
				compatible = false;
		}
		break;
	case O:
		if (Rh == '+') {
			if (sangre->get_tipo() == A && sangre->get_Rh() == '+' || sangre->get_tipo() == B && sangre->get_Rh() == '+' || sangre->get_tipo() == AB && sangre->get_Rh() == '+' || sangre->get_tipo() == O && sangre->get_Rh() == '+') // O+ dona a A+ B+ AB+ y O+
				compatible = true;
			else
				compatible = false;
		}
		else if (Rh == '-') {
			compatible = true; // O+ es dador universal 
		}
		break;
	}
	return compatible;
}


estados Creceptor::get_estado()
{
	return this->estado;
}

time_t Creceptor::get_ingreso()
{
	return this->fecha_ingreso;
}

string Creceptor::get_dni()
{
	return this->dni;
}

time_t* Creceptor::get_recibio()
{
	return this->recibio;
}

Cfluido* Creceptor::get_necesita()
{
	return this->necesita;
}

void Creceptor::set_recibio(time_t recibio)
{
	this->recibio = &recibio;
}

void Creceptor::set_prioridad(unsigned int prioridad)
{
	this->prioridad = prioridad;
}

void Creceptor::set_estado(estados estado)
{
	this->estado = estado;
}

unsigned int Creceptor::get_prioridad()
{
	return this->prioridad;
}

ostream& operator<<(ostream& out, Creceptor& C)
{
	out << C.to_string() << endl;
	return out;
}
