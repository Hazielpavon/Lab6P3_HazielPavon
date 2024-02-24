#ifndef HELICOPTERO_H
#define HELICOPTERO_H
#include <string>
using namespace std;


class Helicoptero {
public:
    string nombre = " ";
    string tipoArmaEquipada = " ";
    int velocidad = 0;
    double resistencia= 0;
    int municion=0;
    Helicoptero();
    Helicoptero(string _nombre, string _tipoArmaEquipada, int _velocidad, double _resistencia, int _municion);
    virtual ~Helicoptero();

    virtual double Atacar() = 0;

    string getNombre()const; 
    void setNombre(string _nombre) ;
    string getTipoArmaEquipada() const;
    void setTipoArmaEquipada(string _tipoArmaEquipada);
    int getVelocidad() const;
    void setVelocidad(int _velocidad);
    double getResistencia()const;
    void setResistencia(double _resistencia);
    int getMunicion()const;
    void setMunicion(int _municion);
};

#endif 

//ejemplo getters y setters si no se me olvida 

//string getModelo();
//void setModelo(string modelo);
//string Carro::getModelo() {
//	return modelo;
//}
//
//void Carro::setModelo(string modelo) {
//	this->modelo = modelo;
//}