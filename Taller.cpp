//Taller.cpp
#include "Taller.h"

Taller::Taller() {}

Taller::Taller(string nombre, string fecha, string hora, string lugar, int duracion, string tema, int cupoMaximo)
    : Evento(nombre, fecha, hora, lugar, duracion), tema(tema), cupoMaximo(cupoMaximo) {}

void Taller::mostrarInformacion() {
    cout << "Nombre: " << nombre << endl;
    cout << "Fecha: " << fecha << endl;
    cout << "Hora: " << hora << endl;
    cout << "Lugar: " << lugar << endl;
    cout << "Duracion: " << duracion << " minutos" << endl;
    cout << "Tema: " << tema << endl;
    cout << "Cupo máximo: " << cupoMaximo << " personas" << endl;
}

void Taller::cargarDesdeArchivo(istream& archivo) {
    archivo >> nombre >> fecha >> hora >> lugar >> duracion >> tema >> cupoMaximo;
}

void Taller::guardarEnArchivo(ostream& archivo) {
    archivo << nombre << " " << fecha << " " << hora << " " << lugar << " " << duracion << " " << tema << " " << cupoMaximo;
}