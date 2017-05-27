
#include "DtInmobiliaria.hpp"
#include "DtUsuario.hpp"


DtInmobiliaria :: DtInmobiliaria(): DtUsuario(){
  this->nombre = "";
  this->direccion = "";
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
