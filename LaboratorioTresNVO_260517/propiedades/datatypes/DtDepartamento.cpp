#include "DtDepartamento.hpp"
#include <string>
#include <iostream>

using namespace std;

DtDepartamento::DtDepartamento(){
    id = 0;
    nombre = "";
}

DtDepartamento::DtDepartamento(DtDepartamento& depto)
{
    this->id = depto.getId();
    this->nombre = depto.getNombre();
}
istream& operator>>(istream& in, DtDepartamento dtd){
    int id = 0;
    string nombre = "";

    int i = 0;
	string s = " ";
	while ( s != "\n"  && i < 3 ){
		in >> setw(1) >> s;
		if (s == ",")
			i++;
		if (i == 0)
			id = id * 10 + toInt(s);
		else if (i == 1)
			nombre = nombre + s;
	}

    dtd.setId(id);
    dtd.setNombre(nombre);
}

ostream& operator<<(ostream& out, DtDepartamento dtd) {
    out << "Id:" << dtd.getId()<< "\r\n"
        << "Nombre:" << dtd.getNombre();
    return out;
}
