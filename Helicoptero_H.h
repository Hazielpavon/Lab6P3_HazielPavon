#include "Helicoptero.h"
#pragma once
class Helicoptero_H : public Helicoptero 
{
private: 
	Helicoptero *helicoptero; 
	string tipomisil; 
	// antibombas, fulminante, reforzado 
public: 
	double ataque(int vida, string tipoarma, int municion, int velocidad) const override;
	Helicoptero_H(string nombre, string tipoarma, int velocidad, double resistencia, int municion, string tipomisil); 
	Helicoptero_H();
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
	string gettipomisil();
	void settipomisil(string tipomisil);
	~Helicoptero_H();



};

