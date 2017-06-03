#include "Zona.hpp"

Zona::Zona(){
    this->codigo = "";
    this->nombre = "";
}

Zona::Zona(DtZona dtz){
	this->codigo = dtz.getCodigo();
	this->nombre = dtz.getNombre();
}

Zona::~Zona(){
}

string Zona :: getCodigo() { 
 return codigo;
}
void Zona :: setCodigo(string val) { 
  codigo = val;
}
string Zona :: getNombre() {
  return nombre; 
}
void Zona :: setNombre(string val) { 
  nombre = val;
}
DtZona Zona :: toDataType() {
   DtZona oDtZona;
   oDtZona.setCodigo(this->getCodigo());
   oDtZona.setNombre(this->getNombre());
   return oDtZona;
}