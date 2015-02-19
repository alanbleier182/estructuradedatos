#pragma once
#include "Vehiculo.h"

using namespace std;

class Moto : public Vehiculo {
    
public:
    Moto(const string &, const string &, int = 0, int = 0, string = "---");
    string cilindraje;
    
private:
    void setCilindraje(string);
    string getCilindraje() const;
};
