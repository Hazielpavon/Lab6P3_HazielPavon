#pragma once
#include <memory>
#include <vector>
#include "Helicoptero.h"
class Campo_de_Batalla : public Helicoptero
{
private:
	Helicoptero* helicoptero;
	vector<unique_ptr<Helicoptero>>* helicoptero;
public:
	void AgregarHelicóptero(Helicoptero* helicoptero);
	void MostrarInformación();
	void SimularBatalla(Helicoptero* helicoptero1, Helicoptero* helicoptero2);
    double ataque() override;
	Campo_de_Batalla();
	Campo_de_Batalla();
	
};

