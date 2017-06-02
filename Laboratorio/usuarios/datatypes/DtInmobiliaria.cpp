
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


istream& operator>>(istream& in, DtInmobiliaria inmo){
//sobraecarga del operador >>
int i=0;
string nombre = "";
DtDireccion direccion;
while (s!="\n"&&i<3)
{   in >> setw(1) >> s;
    if (s==",")
        i++;
    if(i==0){
        nombre=nombre+s;
    else if(i==1){
        in>>direccion;
        i++;
    }
 }
inmo.setNombre(nombre);
inmo.setDireccion(direccion);
return in;
}

ostream& operator<<(ostream& out, DtInmobiliaria& inmo){
//sobraecarga del operador >>
out <<"\nNombre: "<< inmo.getNombre()
<<"\nDireccion: "<< inmo.getDireccion()
<<"\n";
return out;
}