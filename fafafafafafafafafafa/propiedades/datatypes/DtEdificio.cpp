#include "DtEdificio.hpp"
#include <string>
#include <iostream>

// Setters
string DtEdificio::getNombre() { return this->nombre; }
int DtEdificio::getCantPisos() { return cant_pisos; }
float DtEdificio::getGastosComunes() { return gastos_comunes; }

// Getters
void DtEdificio::setNombre(string nombre) { this->nombre = nombre; }
void DtEdificio::setCantPisos(int cant_pisos) { this->cant_pisos = cant_pisos; }
void DtEdificio::setGastosComunes() { this->gastos_comunes = gastos_comunes; }

// Sobrecarga cin
istream& operator>>(istream& in, DtEdificio& dte){
	string nombre = "";
	int cant_pisos = 0;
	float gastos_comunes = 0;

	int i = 0;
	string s = " ";
	while ( s == "\n"  && i < 3 ){
		in >> setw(1) >> s;
		if (s == ",")
			i++;
		if (i == 0)
			nombre = nombre + s;
		else if (i == 1)
			cant_pisos = cant_pisos * 10 + (int)s;
		else if (i == 2)
			gastos_comunes = gastos_comunes * 10 + (float)s;
			// en este caso habrá que ver los decimales.
	}
	
	dte.setNombre(nombre);
	dte.setCantPisos(cant_pisos) = cant_pisos;
	dte.setGastosComunes(gastos_comunes) = gastos_comunes;
}

// Sobrecarga cout
ostream& operator<<(ostream& out, DtEdificio& dte){
    out << "Nombre:" << this.nombre << "\r\n"
	<< "Cant. pisos:" << this.cant_pisos << "\r\n"
	<< "Gastos comunes:" << this.gastos_comunes;
    return out;
}