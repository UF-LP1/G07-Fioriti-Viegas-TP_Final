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
	bool VerificarFechaMaxima();
	friend ostream& operator<<(ostream& out, Csangre& C);
};

