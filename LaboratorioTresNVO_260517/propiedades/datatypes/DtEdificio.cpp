#include "DtEdificio.hpp"

#include <iostream>
#include <iomanip>
#include <string>

DtEdificio::DtEdificio()
{
    this->nombre = "";
    this->cant_Pisos = 0;
    this->gastos_Comunes = 0;
}
DtEdificio::DtEdificio(DtEdificio &val)
{
    this->nombre = val.getNombre();
    this->cant_Pisos = val.getCant_Pisos();
    this->gastos_Comunes = val.getGastos_Comunes();
}
// Setters
string DtEdificio::getNombre() { return this->nombre; }
int DtEdificio::getCant_Pisos() { return cant_Pisos; }
float DtEdificio::getGastos_Comunes() { return gastos_Comunes; }

// Getters
void DtEdificio::setNombre(string nombre) { this->nombre = nombre; }
void DtEdificio::setCant_Pisos(int cant_pisos) { this->cant_Pisos = cant_pisos; }
void DtEdificio::setGastos_Comunes(float gastos_comunes) { this->gastos_Comunes = gastos_comunes; }

// Sobrecarga cin

istream& operator>>(istream& in, DtEdificio& dte){
	string nombre = "";
	int cant_pisos = 0;
	float gastos_comunes = 0;

	int i = 0;
	string s = " ";
	while ( s != "\n"  && i < 4){
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
	
	dte->setNombre(nombre);
	dte->setCantPisos(cant_pisos) = cant_pisos;
	dte->setGastosComunes(gastos_comunes) = gastos_comunes;
}

// Sobrecarga cout
ostream& operator<<(ostream& out, DtEdificio& dte){
    out << "Nombre:" << this->nombre << "\r\n"
	<< "Cant. pisos:" << this->cant_pisos << "\r\n"
	<< "Gastos comunes:" << this->gastos_comunes;
    return out;
}

