#include "Helicoptero.h"

Helicoptero::Helicoptero() {}

Helicoptero::Helicoptero(string _nombre, string _tipoArmaEquipada, int _velocidad, double _resistencia, int _municion) :
    nombre(_nombre), tipoArmaEquipada(_tipoArmaEquipada), velocidad(_velocidad), resistencia(_resistencia), municion(_municion) {}

Helicoptero::~Helicoptero() {}

string Helicoptero::getNombre() const{
    return nombre;
}

void Helicoptero::setNombre(string _nombre) {
    this-> nombre = _nombre;
}

string Helicoptero::getTipoArmaEquipada()const {
    return tipoArmaEquipada;
}

void Helicoptero::setTipoArmaEquipada(string _tipoArmaEquipada) {
    this-> tipoArmaEquipada = _tipoArmaEquipada;
}

int Helicoptero::getVelocidad() const {
    return velocidad;
}

void Helicoptero::setVelocidad(int _velocidad) {
    this-> velocidad = _velocidad;
}

double Helicoptero::getResistencia() const {
    return resistencia;
}

void Helicoptero::setResistencia(double _resistencia) {
   this-> resistencia = _resistencia;
}

int Helicoptero::getMunicion() const {
    return municion;
}

void Helicoptero::setMunicion(int _municion) {
    this-> municion = _municion;
}
