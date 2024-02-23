#pragma once
#include <iostream>
using namespace std; 
class Helicoptero
{
private: 
	string nombre; 
	string tipoarma; 
	// cohete misil 
	int velocidad; 
	// 100-400 
	double resistencia;
	// (vida) 100-200 
	int municion; 
	//5-30 

public: 

	virtual double ataque() = 0;
	Helicoptero(string nombre, string tipoarma, int velocidad, double resistencia, int municion); 
	Helicoptero(); 
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
	~Helicoptero(); 

};

//ejemplo getters y setters 

//string getModelo();
//void setModelo(string modelo);
//string Carro::getModelo() {
//	return modelo;
//}
//
//void Carro::setModelo(string modelo) {
//	this->modelo = modelo;
//}