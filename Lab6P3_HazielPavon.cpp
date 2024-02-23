#include <iostream>
using namespace std;

void ejercicio1() {
	cout << "**Simulacion de Batalla de Helicopteros**" << endl;
	cout << endl;
	cout << "1. Agregar Helicopteros" << endl;
	cout << "2. Mostrar informacion de Helicopteros" << endl;
	cout << "3. Simular batalla" << endl;
	cout << "4. Salir" << endl;
	cout << endl;
	cout << "Ingrese una opcion: ";
	int opcion;
	cin >> opcion;
	bool vali = true;
	while (vali) {
		switch (opcion) {
		case 1:





			break;
		case 2:

			break;
		case 3:

			break;
		case 4:
			cout << "Saliendo..." << endl; 
			vali = false; 
			break;

		default:
			cout << "Ingrese una opcion correcta" << endl;
			break;

		}
	}
}
int main()
{
	ejercicio1(); 
}
