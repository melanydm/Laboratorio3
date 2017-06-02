#include "DtOferta.hpp"

using namespace std;

// Constructor
DtOferta::DtOferta() {
    this->tipo = Alquiler;
    this->precio = 0;
}

DtOferta::DtOferta(DtOferta& dto) {
    this->tipo = dto.getTipo();
    this->precio = dto.getPrecio();
}

// Setters
Transa DtOferta::getTipo() { return this->tipo; }
float DtOferta::getPrecio() { return this->precio; }

// Getters
void DtOferta::setTipo(Transa tipo) { this->tipo = tipo; }
void DtOferta::setPrecio(float precio) { this->precio = precio; }

istream& operator>>(istream& in, DtOferta dto){
    Transa tipo = Venta;
    float precio = 0;

    int i = 0;
	string s = " ";
	while ( s == "\n"  && i < 3){
		in >> setw(1) >> s;
		if (s == ",")
			i++;
        // Asumimos que es una venta. Al ingresar una venta podremos poner cualquier cosa o simplemente una coma.
        if (i == 0 && toInt(s) == 0) {
            tipo = Alquiler;
        }
		else if (i == 1)
			precio = precio * 10 + toFloat(s);
	}

    dto.setTipo(tipo);
    dto.setPrecio(precio);
}

ostream& operator<<(ostream& out, DtOferta dto) {
    out << "Tipo:" << /*dto.getTipo() <<*/ "\r\n"
        << "Precio:" << dto.getPrecio() << "\n";
    return out;
}
