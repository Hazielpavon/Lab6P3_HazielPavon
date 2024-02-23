#include "Helicoptero_H.h"
#include "Helicoptero.h" 
#include <iostream>
using namespace std;



double Helicoptero_H::ataque()
{
	return 0.0;
}

Helicoptero_H::Helicoptero_H(string nombre, string tipoarma, int velocidad, double resistencia, int municion, string tipomisil) :
	Helicoptero(nombre, tipoarma, velocidad, resistencia, municion), tipomisil(tipomisil)
{}

Helicoptero_H::Helicoptero_H()
{
	// constructor vacio 
}

string Helicoptero_H::gettipomisil()
{
	return tipomisil;
}

void Helicoptero_H::settipomisil(string tipomisilx)
{
	this->tipomisil = tipomisilx;
}

Helicoptero_H::~Helicoptero_H()
{
	tipomisil = " ";

}
void Helicoptero_H::Tostring() {
	cout << "Tipo de Misil: " << Helicoptero_H::tipomisil << endl;
}