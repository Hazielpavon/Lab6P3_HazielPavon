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
	void AgregarHelicóptero();
	void MostrarInformación();
	void SimularBatalla();
	double ataque(int vida, string tipoarma, int municion, int velocidad) const override;
	Campo_de_Batalla(string nombre, string tipoarma, int velocidad, double resistencia, int municion, string inteligenciacohete);
	Campo_de_Batalla();
	string getnombre();
	void setnombre(string nombre);
	string gettipoarma();
	void settipoarma(string tipoarma);
	int getvelocidad();
	void setvelocidad(int velocidad);
	double getresistencia();
	void setresistencia(double resistencia);
	int getmunicion();
	void setmunicion(int municion);
	string getinteligenciacohete();
	void setinteligenciacohete(string inteligenciacohete);
	~Campo_de_Batalla();
};

