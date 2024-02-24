#include <iostream>
#include <vector>
#include "Campo_de_Batalla.h"
#include "Helicoptero_H.h"
#include "Helicoptero_IA.h"

using namespace std;

void mostrarMenu() {
    cout << "Menu:" << endl;
    cout << "1. Agregar Helicoptero" << endl;
    cout << "2. Mostrar Informacion de Helicopteros" << endl;
    cout << "3. Simular Batalla" << endl;
    cout << "4. Salir" << endl;
    cout << "Seleccione una opcion: ";
}

bool validarVelocidad(int velocidad) {
    return (velocidad >= 100 && velocidad <= 400);
}

bool validarResistencia(int resistencia) {
    return (resistencia >= 100 && resistencia <= 200);
}

bool validarMunicion(int municion) {
    return (municion >= 5 && municion <= 30);
}

void ejercicio1() {
    Campo_de_Batalla campoBatalla;
    // cree metodos para validar los datos ingresados por el usuario 
    int opcion;
    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
        case 1: {
            cout << "Seleccionar tipo de helicoptero:" << endl;
            cout << "1. Helicoptero H" << endl;
            cout << "2. Helicoptero IA" << endl;
            int tipoHelicoptero;
            cin >> tipoHelicoptero;

            string nombre, tipoArmaEquipada;
            int velocidad, resistencia, municion, tip;

            cout << "Ingrese el nombre: ";
            cin >> nombre;

            do {
                cout << "Ingrese la velocidad : (Entre 100 y 400)";
                cin >> velocidad;
            } while (!validarVelocidad(velocidad));

            do {
                cout << "Ingrese la resistencia : (Entre 100 y 200) ";
                cin >> resistencia;
            } while (!validarResistencia(resistencia));

            do {
                cout << "Ingrese la municion: (Entre 5 y 30)" ;
                cin >> municion;
            } while (!validarMunicion(municion));

            if (tipoHelicoptero == 1) {
                string tipoMisil;
                cout << "Ingrese el tipo de misil (1: antibombas, 2: fulminante, 3: reforzado): ";
                cin >> tip;
                tipoArmaEquipada = "misil";
                if (tip == 1) { 
                    tipoMisil = "antibombas"; }
                else if (tip == 2) { 
                    tipoMisil = "fulminante"; }
                else if (tip == 3) { 
                    tipoMisil = "reforzado"; }
                else {
                    tipoMisil = "antibombas";
                    // uno predeterminado si ingresa una opcion invalida 
                }
                Helicoptero_H* helicopteroH = new Helicoptero_H(nombre, tipoArmaEquipada, velocidad, resistencia, municion, tipoMisil);
                campoBatalla.AgregarHelicoptero(helicopteroH);
            }
            else if (tipoHelicoptero == 2) {
                string inteligenciaCohete;
                cout << "Ingrese la inteligencia del cohete (1: principiante, 2: intermedio, 3: avanzado): ";
                cin >> tip;
                tipoArmaEquipada = "Cohete";
                if (tip == 1) { inteligenciaCohete = "principiante"; }
                else if (tip == 2) { 
                    inteligenciaCohete = "intermedio"; }
                else if (tip == 3) { 
                    inteligenciaCohete = "avanzado"; }
                else {
                    inteligenciaCohete = "intermedio";
                    // lo mismo hice aca 
                }
                Helicoptero_IA* helicopteroIA = new Helicoptero_IA(nombre, tipoArmaEquipada, velocidad, resistencia, municion, inteligenciaCohete);
                campoBatalla.AgregarHelicoptero(helicopteroIA);
            }
            else {
                cout << "Opcion no valida." << endl;
            }
            break;
        }
        case 2:
            campoBatalla.MostrarInformacion();
            break;
        case 3: {
            cout << "Seleccione dos helicopteros para simular batalla:" << endl;
            campoBatalla.MostrarInformacion();
            int posicion1, posicion2;
            cin >> posicion1 >> posicion2;
            if (posicion1 >= 1 && posicion1 <= campoBatalla.getListaHelicopteros().size() &&
                posicion2 >= 1 && posicion2 <= campoBatalla.getListaHelicopteros().size()) {
                Helicoptero* helicoptero1 = campoBatalla.getListaHelicopteros()[posicion1 - 1];
                Helicoptero* helicoptero2 = campoBatalla.getListaHelicopteros()[posicion2 - 1];
                campoBatalla.SimularBatalla(helicoptero1, helicoptero2);
            }
            else {
                cout << "Posiciones no validas." << endl;
            }
            break;
        }
        case 4:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
            break;
        }
    } while (opcion != 4);
}

int main() {
    ejercicio1();
    return 0;
}


