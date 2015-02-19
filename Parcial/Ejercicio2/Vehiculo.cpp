#include "Vehiculo.h"

#include<iostream>

using namespace std;

Vehiculo::Vehiculo() : ("0000000000000000", "sin_marca", 0, 0){
    
}

Vehiculo::Vehiculo(const string &_codigo, const string &_marca, int _modelo, int _km)
{
    codigo = _codigo;
    marca = _marca;
    modelo = _modelo;
    km = _km;
}

void Vehiculo::setCodigo(const string &_codigo){
    codigo = _codigo;
}

string Vehiculo::getCodigo() const {
    return codigo;
}
    
void Vehiculo::setMarca(const string &marca){
    marca = _marca
}

string Vehiculo::getMarca() const {
    return marca;
}

void setModelo(int _modelo) {
    modelo = _modelo;
}
    
int getModelo() const {
    return modelo;
}

void setKm(int _km){
    km = _km
}

int getKm() const {
    return km;
}
