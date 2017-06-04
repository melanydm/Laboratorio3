#include "DtZona.hpp"


//ctor
DtZona::DtZona()
{
	this->codigo = "";
	this->nombre = "";
}
DtZona::DtZona(const DtZona& dtz)
{
	this->codigo = dtz.getCodigo();
	this->nombre = dtz.getNombre();
}

// Setters
string DtZona::getCodigo() const { return codigo; }
string DtZona::getNombre() const { return this->nombre; }

// Getters
void DtZona::setCodigo(string codigo) { this->codigo = codigo; }
void DtZona::setNombre(string nombre) { this->nombre = nombre; }



istream& operator>>(istream& in, DtZona dtz){
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

    dtz.setCodigo(codigo);
    dtz.setNombre(nombre);
}

ostream& operator<<(ostream& out, DtZona dtz) {
    out << "Codigo:" << dtz.getCodigo() << "\r\n"
        << "Nombre:" << dtz.getNombre();
    return out;
}
