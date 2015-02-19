#pragma once

#include <string>

class Vehiculo{

public:

    Vehiculo(const string &, const string &, int = 0, int = 0);
    
    void setCodigo(const string &);
    string getCodigo() const;
    void setMarca(const string &);
    string getMarca() const;
    void setModelo(int);
    int getModelo() const;
    void setKm(int);
    int getKm() const;

protected:
    string codigo;
    string marca;
    int modelo;
    int km;
    

};
