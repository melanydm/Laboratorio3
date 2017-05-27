#include "DtFecha.hpp"

#include <string>

DtFecha::DtFecha(){
  this->aa = "";
  this->mm = "";
  this->dd = "";
}

string DtFecha :: getAa(){
  return this->aa;
}
string DtFecha :: getMm(){
  return this->mm;
}
string DtFecha :: getDd(){
  return this->dd;
}
void DtFecha :: setDd(string dd){
  this->dd = dd;
}
void DtFecha :: setMm(string mm){
  this->mm = mm;
}
void DtFecha :: setAa(string aa){
  this->aa = aa;
}

virtual DtFecha:: ~DtFecha();

// Operators

bool DtFecha:: operator == (DtFecha fecha){
  return true;
}

}
