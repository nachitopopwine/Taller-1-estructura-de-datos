//DataManager.cpp
#include "DataManager.h"
#include <fstream>
#include <sstream>

void DataManager::cargarEventosDesdeArchivo(vector<Evento*>& eventos) {
    ifstream archivo("eventos.txt");
    if (archivo.is_open()) {
        string linea;
        while (getline(archivo, linea)) {
            stringstream ss(linea);
            string tipo;
            ss >> tipo;
            Evento* evento;
            if (tipo == "Conferencia") {
                evento = new Conferencia();
            } else if (tipo == "Taller") {
                evento = new Taller();
            }
            evento->cargarDesdeArchivo(ss);
            eventos.push_back(evento);
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo eventos.txt" << endl;
    }
}

void DataManager::guardarEventosEnArchivo(const vector<Evento*>& eventos) {
    ofstream archivo("eventos.txt");
    if (archivo.is_open()) {
        for (const auto& evento : eventos) {
            archivo << evento->obtenerTipo() << " ";
            evento->guardarEnArchivo(archivo);
            archivo << endl;
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo eventos.txt" << endl;
    }
}
