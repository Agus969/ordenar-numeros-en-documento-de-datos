// main.cpp
//este archivo utilizara las funciones de libreria.cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include "libreria.h"
//la funcionmain()se ocupa de usar la biblioteca
int main() {
    std::string nombreArchivoEntrada = "datos_desordenados.dat";
    std::string nombreArchivoSalida = "datos_ordenados.dat";
    std::vector<int> datos;

    leerArchivo(nombreArchivoEntrada, datos);
    std::sort(datos.begin(), datos.end());
    escribirArchivo(nombreArchivoSalida, datos);

    std::cout << "El archivo ha sido ordenado numéricamente y guardado en " << nombreArchivoSalida << std::endl;
    return 0;
}

