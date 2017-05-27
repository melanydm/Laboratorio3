#include "DtDireccion.hpp"

#include <string>

DtDireccion :: DtDireccion(){
  this->calle = "";
  this->numero = "";
}

string DtDireccion ::  getCalle(){
  return   this->calle;
}
string DtDireccion ::  getNumero(){
  return   this->numero;
}
void DtDireccion ::  setCalle(string calle){
  this->calle = calle;
}
void DtDireccion ::  setNumero(string numero){
  this->numero = numero;
}

virtual DtDireccion ::  ~DtDireccion();

		// Operators
bool DtDireccion ::  operator == (DtDireccion dir){
return true;
}
}
