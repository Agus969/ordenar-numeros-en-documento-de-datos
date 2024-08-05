// libreria.h
//este archivo contiene las declaraciones de las funciones.
#ifndef LIBRERIA_H
#define LIBRERIA_H

#include <vector>
#include <string>

void leerArchivo(const std::string& nombreArchivo, std::vector<int>& datos);
void escribirArchivo(const std::string& nombreArchivo, const std::vector<int>& datos);

#endif