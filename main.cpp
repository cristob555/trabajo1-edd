// main.cpp
#include "Interprete.hpp"
#include <iostream>

using namespace std;

int main() {
    // Ejemplo de inicialización del intérprete
    int cantidad_programas = 2;   // Número de programas que el intérprete puede manejar
    int largo_salida = 10;        // Tamaño de la salida de los programas

    Interprete interprete(cantidad_programas, largo_salida);

    // Cargar el primer programa
    interprete.cargar_programa(0);

    // Mostrar el programa cargado
    interprete.mostrar_programa_cargado();

    // Ejecutar el programa cargado
    interprete.ejecutar_programa();

    // Cargar el segundo programa
    interprete.cargar_programa(1);

    // Mostrar el segundo programa cargado
    interprete.mostrar_programa_cargado();

    // Ejecutar el segundo programa cargado
    interprete.ejecutar_programa();

    // Terminar la ejecución del intérprete
    interprete.terminar_ejecucion();

    return 0;
}
