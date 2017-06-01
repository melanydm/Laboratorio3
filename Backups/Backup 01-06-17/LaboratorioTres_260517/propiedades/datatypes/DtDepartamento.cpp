#include "DtDepartamento.hpp"
#include <string>
#include <iostream>

using namespace std;

// Setters
int DtDepartamento::getId() { return id; }
string DtDepartamento::getNombre() { return this->nombre; }

// Getters
void DtDepartamento::setId(int id) { this->id = id; }
void DtDepartamento::setNombre(string nombre) { this->nombre = nombre; }
/*
istream& operator>>(istream&, DtDepartamento dtd){
    int id = 0;
    string nombre = "";

    int i = 0;
	string s = " ";
	while ( s != "\n"  && i < 3 ){
		in >> setw(1) >> s;
		if (s == ",")
			i++;
		if (i == 0)
			id = id * 10 + (int)s;
		else if (i == 1)
			nombre = nombre + s;
	}

    dtd->setId(id);
    dtd->setNombre(nombre);
}

ostream& operator<<(ostream&, DtDepartamento dtd) {
    out << "Id:" << this->id << "\r\n"
        << "Nombre:" << this->nombre;
    return out;
}
*/
