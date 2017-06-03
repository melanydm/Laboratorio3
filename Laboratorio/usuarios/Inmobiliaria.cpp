
#include "Inmobiliaria.hpp"


Inmobiliaria :: Inmobiliaria(){

}

Inmobiliaria :: Inmobiliaria(string email,string contrasenia,string nombre, DtDireccion oDtDireccion):Usuario(email, contrasenia){
  this->nombre = nombre;
  this->direccion = oDtDireccion;
}
Inmobiliaria :: Inmobiliaria(DtInmobiliaria oDtInmobiliaria):Usuario(oDtInmobiliaria.getEmail(), oDtInmobiliaria.getContrasenia()){
  this->nombre = oDtInmobiliaria.getNombre();
  this->direccion = oDtInmobiliaria.getDireccion();
  }


string Inmobiliaria::getNombre(){
  return this->nombre;
}
DtDireccion Inmobiliaria::getDireccion(){
  return this->direccion;
}
void Inmobiliaria::setNombre(string nombre){
  this->nombre = nombre;
}
void Inmobiliaria::setDireccion(DtDireccion direccion){
  this->direccion = direccion;
}

DtUsuario Inmobiliaria :: toDataType(){
  DtInmobiliaria oDtInmobiliaria;
  oDtInmobiliaria.setEmail(this->getEmail());
  oDtInmobiliaria.setContrasenia(this->getContrasenia());
  oDtInmobiliaria.setNombre(this->nombre);
  oDtInmobiliaria.setDireccion(this->direccion);
  return oDtInmobiliaria;
}
