#pragma once
#include "tipo_sangre.h"
#include"Cfluido.h"

class Csangre: public Cfluido
{
	tipo_sangre tipo;
	char Rh;
public:
	Csangre(tipo_sangre tipo, char Rh);
	~Csangre();
	string to_string();
	void imprimir();
	bool VerificarFechaMaxima(time_t extraccion);
	char get_Rh();
	tipo_sangre get_tipo();
	char get_Rh();
	friend ostream& operator<<(ostream& out, Csangre& C);
};

