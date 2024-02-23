#include "Helicoptero.h"
#include <iostream>
using namespace std;
#pragma once
class Helicoptero_H : public Helicoptero 
{
private: 
	string tipomisil; 
	// antibombas, fulminante, reforzado 
public: 
	double ataque() override;
	Helicoptero_H(string nombre, string tipoarma, int velocidad, double resistencia, int municion, string tipomisil); 
	Helicoptero_H();
	string gettipomisil();
	void settipomisil(string tipomisil);
	~Helicoptero_H();
};

