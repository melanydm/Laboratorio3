#include "DtHora.hpp"


DtHora::DtHora(){
    this->hora = 0;
    this->minutos = 0;
}

int DtHora :: getHora(){
  return this->hora;
}
int DtHora :: getMinutos(){
  return this->minutos
}
void DtHora :: setHora(int hora){
  this->hora = hora;
}

void DtHora :: setMinutos(int minutos){
  this->minutos = minutos;
}

virtual DtHora:: ~DtHora();

bool DtFecha:: operator == (DtHora hora){
  return true;
}

}
