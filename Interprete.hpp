// Interprete.hpp
#ifndef INTERPRETE_HPP
#define INTERPRETE_HPP

#include "Programa.hpp"
#include <vector>

class Interprete {
private:
    int cant_programas;
    int largo_salida;
    int programa_cargado;
    std::vector<Programa> programas;
    std::vector<int> salida;

public:
    Interprete(int cant_programas, int largo_salida);
    ~Interprete();
    void cargar_programa(int indice);
    void ejecutar_programa();
    void mostrar_programa_cargado();
    void reiniciar_salida();
    void terminar_ejecucion();
};

#endif
