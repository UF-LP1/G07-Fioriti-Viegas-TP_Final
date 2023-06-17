#include "Cmedula.h"

Cmedula::Cmedula():Cfluido(1)
{
}

Cmedula::~Cmedula()
{
}

bool Cmedula::VerificarFechaMaxima(time_t extraccion)
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
