#include "Csangre.h"

Csangre::Csangre(tipo_sangre tipo, char Rh)
{
	this->caducidad = 42;
	this->Rh = Rh;
	this->tipo = tipo;
}

Csangre::~Csangre()
{
}

string Csangre::to_string()
{
	stringstream salida;
	salida << "Caracteristicas de la sangre: " << endl << this->tipo << this->Rh << endl;
	return salida.str();
}

void Csangre::imprimir()
{
	cout << this->to_string() << endl;
}

bool Csangre::VerificarFechaMaxima(time_t extraccion)
{
	bool enCondiciones = false;
	time_t tiempo_actual = time(nullptr); // obtengo el tiempo actual.
	double diferenciaSegundos = difftime(tiempo_actual, extraccion); // la funcion difftime calcula la diferencia entre dos fechas time_t y devuelve EN SEGUNDOS. 
	int diferenciaDias = static_cast<int>(diferenciaSegundos / (24 * 60 * 60)); // convierto la diferencia a dias

	if (diferenciaDias <= this->caducidad)
		enCondiciones = true;
	else
		enCondiciones = false;
	return enCondiciones;
}

char Csangre::get_Rh()
{
	return this->Rh;
}

tipo_sangre Csangre::get_tipo()
{
	return this->tipo;
}

ostream& operator<<(ostream& out, Csangre& C)
{
	out << C.to_string() << endl;
	return out;
}
