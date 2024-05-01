#include "Conferencia.h"

Conferencia::Conferencia() {}

Conferencia::Conferencia(string nombre, string fecha, string hora, string lugar, int duracion, string tema, string orador)
    : Evento(nombre, fecha, hora, lugar, duracion), tema(tema), orador(orador) {}

void Conferencia::mostrarInformacion() {
    cout << "Nombre: " << nombre << endl;
    cout << "Fecha: " << fecha << endl;
    cout << "Hora: " << hora << endl;
    cout << "Lugar: " << lugar << endl;
    cout << "Duracion: " << duracion << " minutos" << endl;
    cout << "Tema: " << tema << endl;
    cout << "Orador: " << orador << endl;
}

void Conferencia::cargarDesdeArchivo(istream& archivo) {
    archivo >> nombre >> fecha >> hora >> lugar >> duracion >> tema >> orador;
}

void Conferencia::guardarEnArchivo(ostream& archivo) {
    archivo << nombre << " " << fecha << " " << hora << " " << lugar << " " << duracion << " " << tema << " " << orador;
}