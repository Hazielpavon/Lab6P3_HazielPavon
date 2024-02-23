#pragma once
#include <memory>
#include <vector>
#include "Helicoptero.h"
class Campo_de_Batalla : public Helicoptero
{
private:
	vector <Helicoptero*> listahelicoptero;
	int opcion; 
public:
	void AgregarHelicoptero(Helicoptero* helicoptero1);
	void MostrarInformación();
	void SimularBatalla(Helicoptero* helicoptero1, Helicoptero* helicoptero2);
	Campo_de_Batalla(vector<Helicoptero*> helicoptero, int opcion);
	~Campo_de_Batalla();
	vector<Helicoptero*> getlistahelicoptero();
	void setlistahelicoptero(vector<Helicoptero*> listahelicoptero);
	
};

