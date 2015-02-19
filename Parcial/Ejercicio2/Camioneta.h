#pragma once
#include "Vehiculo.h"

using namespace std;

class Camioneta : public Vehiculo {
    
public:
    Camioneta(const string &, const string &, int = 0, int = 0, string = "---");
    string traccion;
    
private:
    void setTraccion(string);
    string getTraccion() const;
};
