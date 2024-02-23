#pragma once
#include <iostream>
#include "Helicoptero.h" 
using namespace std;
class Helicoptero_IA : public Helicoptero
{
private:
	string inteligenciacohete;
	Helicoptero* helicoptero;
	//  “Principiante”, “Intermedio” o “Avanzado"


public: 
	double ataque(int vida, string tipoarma, int municion, int velocidad) const override;
	Helicoptero_IA(string nombre, string tipoarma, int velocidad, double resistencia, int municion, string inteligenciacohete);
	Helicoptero_IA();
	string getnombre();
	void setnombre(string nombre);
	string gettipoarma();
	void settipoarma(string tipoarma);
	int getvelocidad();
	void setvelocidad(int velocidad);
	double getresistencia();
	void setresistencia(double resistencia);
	int getmunicion();
	void setmunicion(int municion);
	string getinteligenciacohete();
	void setinteligenciacohete(string inteligenciacohete);
	~Helicoptero_IA();
};

