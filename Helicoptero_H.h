#include "Helicoptero.h"
#ifndef HELICOPTERO_H_H
#define HELICOPTERO_H_H
class Helicoptero_H : public Helicoptero {
public:
    string tipoMisil = " ";

   /* Helicoptero_H();*/ // no funcionan no se porque HAHA
    Helicoptero_H(string _nombre, string _tipoArmaEquipada, int _velocidad, int _resistencia, int _municion, string _tipoMisil);
  /*  ~Helicoptero_H();*/

    double Atacar() override;

    // Getters y setters
    string getTipoMisil()const;
    void setTipoMisil(string _tipoMisil);
};

#endif