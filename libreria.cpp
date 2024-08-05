// libreria.cpp
//este archivo contiene las definiciones de las funciones.
//tiene dos funciones.void leerArchivo y void escrivirArchivo
#include "libreria.h"
#include <fstream>
#include <iostream>
//lee los numeros de un archivo y los almacena en el vector datos.
void leerArchivo(const std::string& nombreArchivo, std::vector<int>& datos) {
    std::ifstream archivo(nombreArchivo);
    std::string linea;
    while (std::getline(archivo, linea)) {
        datos.push_back(std::stoi(linea));
    }
    archivo.close();
}
//Escribe los numeros en un archivo a partir del vector datos.
void escribirArchivo(const std::string& nombreArchivo, const std::vector<int>& datos) {
    std::ofstream archivo(nombreArchivo);
    for (const auto& numero : datos) {
        archivo << numero << std::endl;
    }
    archivo.close();
}