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
	double ataque() override;
	Helicoptero_IA(string nombre, string tipoarma, int velocidad, double resistencia, int municion, string inteligenciacohete);
	Helicoptero_IA();
	~Helicoptero_IA();
	string getinteligenciacohete();
	void setinteligenciacohete(string inteligenciacohete);
	void Tostring(); 
};

