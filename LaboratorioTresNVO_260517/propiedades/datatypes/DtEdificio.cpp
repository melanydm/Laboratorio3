#include "DtEdificio.hpp"

#include <iostream>
#include <iomanip>
#include <string>

DtEdificio::DtEdificio()
{
    this->nombre="";
    this->cant_Pisos="";
    this->gastos_Comunes="";
}
DtEdificio::DtEdificio(DtEdificio &val)
{
    this->nombre=val.getNombre();
    this->cant_Pisos=val.getCant_Pisos();
    this->gastos_Comunes=val.getGastos_Comunes();
}
// Setters
string DtEdificio::getNombre() { return this->nombre; }
string DtEdificio::getCant_Pisos() { return cant_Pisos; }
string DtEdificio::getGastos_Comunes() { return gastos_Comunes; }

// Getters
void DtEdificio::setNombre(string nombre) { this->nombre = nombre; }
void DtEdificio::setCant_Pisos(string cant_pisos) { this->cant_Pisos = cant_pisos; }
void DtEdificio::setGastos_Comunes(string gastos_comunes) { this->gastos_Comunes = gastos_comunes; }

// Sobrecarga cin

istream& operator>>(istream& in, DtEdificio& dte){
	string nombre = "";
	string cant_pisos = 0;
	string gastos_comunes = 0;
	int i = 0;
	string s = " ";
	while ( s != "\n"  && i < 3 ){
		in >> setw(1) >> s;
		if (s == ",")
			i++;
		if (i == 0)
			nombre = nombre + s;
		else if (i == 1)
        {
            cant_pisos = cant_pisos + s;
        }

		else if (i == 2)
			gastos_comunes = gastos_comunes + s;
			// en este caso habrá que ver los decimales.
	}

	dte.setNombre(nombre);
	dte.setCant_Pisos(cant_pisos);
	dte.setGastos_Comunes(gastos_comunes);
	return in;
}

// Sobrecarga cout
ostream& operator<<(ostream& out, DtEdificio& dte){
    out<< "Nombre:" << dte.getNombre() << "\r\n"
	<< "Cant. pisos:" << dte.getCant_Pisos() << "\r\n"
	<< "Gastos comunes:" << dte.getGastos_Comunes();
    return out;
}

