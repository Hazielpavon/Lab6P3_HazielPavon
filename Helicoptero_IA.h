#pragma once
#include <iostream>
#include "Helicoptero.h" 
using namespace std;
class Helicoptero_IA : public Helicoptero {
public:
    string inteligenciaCohete = " ";

    Helicoptero_IA();
    Helicoptero_IA(string _nombre, string _tipoArmaEquipada, int _velocidad, int _resistencia, int _municion, string _inteligenciaCohete);
    ~Helicoptero_IA();

    double Atacar() override;

    string getInteligenciaCohete()const;
    void setInteligenciaCohete(string _inteligenciaCohete);
};



