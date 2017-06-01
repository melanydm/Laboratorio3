#include "DtZona.hpp"
#include <string>
#include <iostream>

using namespace std;

// Setters
string DtZona::getCodigo() { return codigo; }
string DtZona::getNombre() { return this->nombre; }

// Getters
void DtZona::setCodigo(string codigo) { this->codigo = codigo; }
void DtZona::setNombre(string nombre) { this->nombre = nombre; }

istream& operator>>(istream&, DtZona dtd){
    string codigo = "";
    string nombre = "";

    int i = 0;
	string s = " ";
	while ( s == "\n"  && i < 2 ){
		in >> setw(1) >> s;
		if (s == ",")
			i++;
		if (i == 0)
			codigo = codigo + s;
		else if (i == 1)
			nombre = nombre + s;
	}

    dtd->setId(codigo);
    dtd->setNombre(nombre);
}

ostream& operator<<(ostream&, DtZona dtd) {
    out << "Codigo:" << this->codigo << "\r\n"
        << "Nombre:" << this->nombre;
    return out;
}
