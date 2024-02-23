#include "Helicoptero_H.h"
#include "Helicoptero.h" 
#include <iostream>
using namespace std;

double Helicoptero_H::ataque()
{
	// pendiente 
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

void Helicoptero_H::settipomisil(string tipomisil)
{
	this->tipomisil = tipomisil;
}

Helicoptero_H::~Helicoptero_H()
{
	tipomisil = " ";

}