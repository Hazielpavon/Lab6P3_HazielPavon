#ifndef CAMPO_DE_BATALLA_H
#define CAMPO_DE_BATALLA_H

#include <vector>
#include "Helicoptero.h"

class Campo_de_Batalla {
private:
    vector<Helicoptero*> listaHelicopteros;

public:
    Campo_de_Batalla();
    ~Campo_de_Batalla();

    void AgregarHelicoptero(Helicoptero* helicoptero);
    void MostrarInformacion();
    void SimularBatalla(Helicoptero* helicoptero1, Helicoptero* helicoptero2);

    std::vector<Helicoptero*> getListaHelicopteros();
    void setListaHelicopteros(std::vector<Helicoptero*> _listaHelicopteros);
};

#endif

