#include "Campo_de_Batalla.h"
#include <iostream>
using namespace std;
Campo_de_Batalla::Campo_de_Batalla() {}
// pero este Si funciona loquera 
Campo_de_Batalla::~Campo_de_Batalla() {
	for (auto helicoptero : listaHelicopteros) {
		delete helicoptero;
	}
}

void Campo_de_Batalla::AgregarHelicoptero(Helicoptero* helicoptero) {
	listaHelicopteros.push_back(helicoptero);
}

void Campo_de_Batalla::MostrarInformacion() {
	cout << "Informacion de los helicopteros: " << endl;
	for (int i = 0; i < listaHelicopteros.size(); ++i) {
		cout << i + 1 << ". Nombre: " << listaHelicopteros[i]->getNombre();
		cout << ", Municion: " << listaHelicopteros[i]->getMunicion(); 
		cout << ", Resistencia: " << listaHelicopteros[i]->getResistencia(); 
		cout << ", Arma: " << listaHelicopteros[i]->getTipoArmaEquipada(); 
		cout << ", Velocidad: " << listaHelicopteros[i]->getVelocidad(); 
		// para mi fue mas facil esto que el tostring 
	}
}


void Campo_de_Batalla::SimularBatalla(Helicoptero* helicoptero1, Helicoptero* helicoptero2) {
	while (true) {
		double danioHelicoptero1 = helicoptero1->Atacar();
		double danioHelicoptero2 = helicoptero2->Atacar();

		helicoptero1->setMunicion(helicoptero1->getMunicion() - 5);
		helicoptero2->setMunicion(helicoptero2->getMunicion() - 5);

		helicoptero1->setVelocidad(helicoptero1->getVelocidad() - 10);
		helicoptero2->setVelocidad(helicoptero2->getVelocidad() - 10);

		helicoptero2->setResistencia(helicoptero2->getResistencia() - danioHelicoptero1);
		helicoptero1->setResistencia(helicoptero1->getResistencia() - danioHelicoptero2);

		cout << "Helicoptero 1:" << endl;
		cout << "Nombre: " << helicoptero1->getNombre() << endl;
		cout << "Tipo de arma equipada: " << helicoptero1->getTipoArmaEquipada() << endl;
		cout << "Velocidad: " << helicoptero1->getVelocidad() << endl;
		cout << "Resistencia: " << helicoptero1->getResistencia() << endl;
		cout << "Municion: " << helicoptero1->getMunicion() << endl;
		cout << endl;

		cout << "Helicoptero 2:" << endl;
		cout << "Nombre: " << helicoptero2->getNombre() << endl;
		cout << "Tipo de arma equipada: " << helicoptero2->getTipoArmaEquipada() << endl;
		cout << "Velocidad: " << helicoptero2->getVelocidad() << endl;
		cout << "Resistencia: " << helicoptero2->getResistencia() << endl;
		cout << "Municion: " << helicoptero2->getMunicion() << endl;
		cout << endl;

		if (helicoptero1->getResistencia() <= 0 || helicoptero1->getMunicion() <= 0) {
			cout << "Helicoptero 2 ha ganado la batalla!" << endl;
			break;
		}
		else if (helicoptero2->getResistencia() <= 0 || helicoptero2->getMunicion() <= 0) {
			cout << "Helicoptero 1 ha ganado la batalla!" << endl;
			break;
		}
	}
	// este ciclo se termina cuando 
	// la resistencia o la municion de uno de los helicopteros llega a cero o menos.
	// o la municion de uno de los helicópteros llega a cero o menos.
}

vector<Helicoptero*> Campo_de_Batalla::getListaHelicopteros() {
	return listaHelicopteros;
}

void Campo_de_Batalla::setListaHelicopteros(std::vector<Helicoptero*> _listaHelicopteros) {
	listaHelicopteros = _listaHelicopteros;
}