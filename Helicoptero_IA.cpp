#include "Helicoptero_IA.h"
Helicoptero_IA::Helicoptero_IA() {}

Helicoptero_IA::Helicoptero_IA(string _nombre, string _tipoArmaEquipada, int _velocidad, int _resistencia, int _municion, string _inteligenciaCohete) :
    Helicoptero(_nombre, _tipoArmaEquipada, _velocidad, _resistencia, _municion), inteligenciaCohete(_inteligenciaCohete) {}

Helicoptero_IA::~Helicoptero_IA() {}

double Helicoptero_IA::Atacar() {
    double danioTotal = (5 + (10 * 2)) * (1.0 + (velocidad / 100.0));
    return danioTotal;
}

string Helicoptero_IA::getInteligenciaCohete()const {
    return inteligenciaCohete;
}

void Helicoptero_IA::setInteligenciaCohete(string _inteligenciaCohete) {
    this-> inteligenciaCohete = _inteligenciaCohete;
}

