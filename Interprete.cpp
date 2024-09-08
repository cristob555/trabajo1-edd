// Interprete.cpp
#include "Interprete.hpp"
#include <iostream>
#include <stdexcept> // Para manejo de excepciones

using namespace std;

Interprete::Interprete(int cant_programas, int largo_salida)
    : cant_programas(cant_programas), largo_salida(largo_salida), programa_cargado(-1) {
    salida.resize(largo_salida, 0); // Inicializar con ceros
    for (int i = 0; i < cant_programas; ++i) {
        programas.emplace_back(Programa(largo_salida));
    }
}

Interprete::~Interprete() {
    terminar_ejecucion();
}

void Interprete::reiniciar_salida() {
    fill(salida.begin(), salida.end(), 0);
}

void Interprete::cargar_programa(int indice) {
    if (indice < 0 || indice >= cant_programas) {
        cout << "Índice de programa fuera de rango." << endl;
        return;
    }
    programa_cargado = indice;
    reiniciar_salida();
    cout << "Programa " << indice << " cargado." << endl;
}

void Interprete::ejecutar_programa() {
    if (programa_cargado == -1) {
        cout << "No hay ningún programa cargado." << endl;
        return;
    }
    programas[programa_cargado].ejecutar();
}

void Interprete::mostrar_programa_cargado() {
    if (programa_cargado == -1) {
        cout << "No hay ningún programa cargado para mostrar." << endl;
        return;
    }
    programas[programa_cargado].mostrar_operaciones();
}

void Interprete::terminar_ejecucion() {
    programas.clear();
    salida.clear();
    cout << "Ejecución terminada." << endl;
}
