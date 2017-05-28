
#include "DtInmobiliaria.hpp"
#include "DtUsuario.hpp"


DtInmobiliaria :: DtInmobiliaria(): DtUsuario(){
  this->nombre = "";
  this->direccion = "";
}

DtInmobiliaria :: DtInmobiliaria(DtInmobiliaria inmo): DtUsuario(inmo){
  this->nombre =inmo.getNombre();
  this->direccion = inmo.getDireccion();
}

string DtInmobiliaria :: getNombre(){
  return this->nombre;
}
DtDireccion DtInmobiliaria ::getDireccion(){
  return this->direccion;
}
void DtInmobiliaria :: setNombre(string nombre){
  this->nombre = nombre;
}
void DtInmobiliaria :: setDireccion(DtDireccion dir){
  this->direccion = dir;
}


virtual ~DtInmobiliaria();
