#include "Campo_de_Batalla.h"
#include <memory>
#include <vector>
#include "Helicoptero.h"
#include "Helicoptero_IA.h"
#include "Helicoptero_H.h"

void Campo_de_Batalla::AgregarHelicoptero(Helicoptero* heli)
{
	listahelicoptero.push_back(heli);
}

void Campo_de_Batalla::MostrarInformación()
{

	Helicoptero p; 
	Helicoptero_H hh;
	Helicoptero_IA; 


	


}

void Campo_de_Batalla::SimularBatalla(Helicoptero* helicoptero1, Helicoptero* helicoptero2)
{

}

Campo_de_Batalla::Campo_de_Batalla(vector<Helicoptero*> helicoptero, int opcion)

	: listahelicoptero(helicoptero), opcion(opcion)
{}
Campo_de_Batalla::~Campo_de_Batalla()
{
	
}
vector<Helicoptero*>Campo_de_Batalla::getlistahelicoptero()
{
	return listahelicoptero;
}

void Campo_de_Batalla::setlistahelicoptero(vector<Helicoptero*> listahelicoptero)
{
}