// Programa.cpp
#include "Programa.hpp"
#include <iostream>

using namespace std;

Programa::Programa(int largo_operaciones) {
    this->largo_operaciones = largo_operaciones;
    operaciones = new char[largo_operaciones];
    puntero_operaciones = operaciones;
    puntero_salida = new int[largo_operaciones]{0};
}

Programa::~Programa() {
    delete[] operaciones;
    delete[] puntero_salida;
}

void Programa::ejecutar_operador() {
    // Ejemplo de implementación de ejecutar_operador
    // Aquí debería estar la lógica de interpretar y ejecutar los operadores del programa
}

void Programa::mover(char dir) {
    if (dir == '>') {
        ++puntero_salida;
    } else if (dir == '<') {
        --puntero_salida;
    }
}

void Programa::asignar(int valor, int *salida) {
    *salida = valor;
}

char Programa::obtener() {
    return *puntero_operaciones;
}

void Programa::terminar_programa() {
    cout << "Programa terminado." << endl;
}

void Programa::ejecutar() {
    // Implementación de ejecutar el programa
    // Aquí debería estar la lógica para ejecutar todas las operaciones almacenadas
    cout << "Ejecutando el programa..." << endl;
}

void Programa::mostrar_operaciones() {
    cout << "Operaciones del programa: ";
    for (int i = 0; i < largo_operaciones; i++) {
        cout << operaciones[i] << " ";
    }
    cout << endl;
}
