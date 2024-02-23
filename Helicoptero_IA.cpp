#include "Helicoptero_IA.h"
#include "Helicoptero.h" 
double Helicoptero_IA::ataque()
{
	// pendiente 
	return 0.0; 
}

Helicoptero_IA::Helicoptero_IA(string nombre, string tipoarma, int velocidad, double resistencia, int municion, string inteligenciacohete)
	:
	Helicoptero(nombre, tipoarma, velocidad, resistencia, municion), inteligenciacohete(inteligenciacohete) 
{}

Helicoptero_IA::Helicoptero_IA()
{
	// constructor vacio 
}

Helicoptero_IA::~Helicoptero_IA()
{
	inteligenciacohete = " "; 
}

string Helicoptero_IA::getinteligenciacohete()
{
	return inteligenciacohete;
}

void Helicoptero_IA::setinteligenciacohete(string inteligenciacohete)
{
	this->inteligenciacohete = inteligenciacohete; 
}

void Helicoptero_IA::Tostring() {
	cout << Helicoptero_IA::inteligenciacohete << endl; 
}
