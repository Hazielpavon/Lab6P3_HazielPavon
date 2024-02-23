#include "Helicoptero.h"

Helicoptero::Helicoptero(string nombre, string tipoarma, int velocidad, double resistencia, int municion) :
	nombre(nombre), tipoarma(tipoarma), velocidad(velocidad), resistencia(resistencia), municion(municion)
{}
Helicoptero::Helicoptero()
{
	// constructor vacio 
}

string Helicoptero::getnombre()
{
	return nombre;
}

void Helicoptero::setnombre(string nombre)
{
	this->nombre = nombre;
}

string Helicoptero::gettipoarma()
{
	return tipoarma;
}

void Helicoptero::settipoarma(string tipoarma)
{
	this->tipoarma = tipoarma;
}

int Helicoptero::getvelocidad()
{
	return velocidad;
}

void Helicoptero::setvelocidad(int velocidad)
{
	this->velocidad = velocidad;
}

double Helicoptero::getresistencia()
{
	return resistencia;
}

void Helicoptero::setresistencia(double resistencia)
{
	this->resistencia = resistencia;
}

int Helicoptero::getmunicion()
{
	return municion;
}

void Helicoptero::setmunicion(int municion)
{
	this->municion = municion;
}

Helicoptero::~Helicoptero()
{
	nombre = " ";
	tipoarma = " ";
	velocidad = 0;
	resistencia = 0;
	municion = 0;
}

void Helicoptero::Tostring() {
	cout << "Helicoptero" << endl; 
	cout << "Nombre: " << Helicoptero::nombre << ", Tipo de Arma: " << Helicoptero::tipoarma << ", Velocidad: " << Helicoptero::velocidad << ", Resistencia: " << Helicoptero::resistencia << ", Municion: " << Helicoptero::municion << endl; 
}