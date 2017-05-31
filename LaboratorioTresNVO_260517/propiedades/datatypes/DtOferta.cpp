#include "DtOferta.hpp"
#include <string>
#include <iostream>

using namespace std;

// Setters
Transa DtOferta::getTipo() { return tipo; }
float DtOferta::getPrecio() { return this->precio; }

// Getters
void DtOferta::setCodigo(Transa tipo) { this->tipo = tipo; }
void DtOferta::setNombre(float precio) { this->precio = precio; }

istream& operator>>(istream&, DtOferta dtd){
    Transa tipo = Venta;
    float precio = 0;

    int i = 0;
	string s = " ";
	while ( s == "\n"  && i < 3){
		in >> setw(1) >> s;
		if (s == ",")
			i++;
        // Asumimos que es una venta. Al ingresar una venta podremos poner cualquier cosa o simplemente una coma.
        if (i == 0 && s == 0) {
            tipo = Alquiler;
        }
		else if (i == 1)
			precio = precio * 10 + (int)s;
	}

    dtd->setTipo(tipo);
    dtd->setPrecio(precio);
}

ostream& operator<<(ostream&, DtOferta dtd) {
    out << "Tipo:" << this->tipo << "\r\n"
        << "Precio:" << this->precio;
    return out;
}
