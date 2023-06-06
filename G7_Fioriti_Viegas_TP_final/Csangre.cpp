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
	bool vencio = true;
	time_t tiempo_actual = time(nullptr); // obtengo el tiempo actual.
	tm* fechaActual = localtime(&tiempo_actual);
	struct tm* FECHA = localtime(&extraccion); // convierto la variable time_t a una estructura (tm) usando localtime para obtener dia,mes y anio. 
	double diferenciaSegundos = difftime(tiempo_actual, extraccion); // la funcion difftime calcula la diferencia entre dos fechas time_t y devuelve EN SEGUNDOS. 
	int diferenciaDias = static_cast<int>(diferenciaSegundos / (24 * 60 * 60)); // convierto la diferencia a dias

	if (diferenciaDias <= this->caducidad)
		vencio = false;
	else
		vencio = true;
	return vencio;
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
