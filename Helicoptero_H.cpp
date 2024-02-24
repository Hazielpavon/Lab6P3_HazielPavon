#include "Helicoptero_H.h"
#include <iostream>
using namespace std;


Helicoptero_H::Helicoptero_H(string _nombre, string _tipoArmaEquipada, int _velocidad, int _resistencia, int _municion, string _tipoMisil) :
    Helicoptero(_nombre, _tipoArmaEquipada, _velocidad, _resistencia, _municion), tipoMisil(_tipoMisil) {}

double Helicoptero_H::Atacar() {
    double danioTotal = (10 + (20 * 5)) * (1.0 + (velocidad / 100.0));
    return danioTotal;
}

string Helicoptero_H::getTipoMisil() const{
    return tipoMisil;
}

void Helicoptero_H::setTipoMisil(string _tipoMisil) {
    this-> tipoMisil = _tipoMisil;
}
