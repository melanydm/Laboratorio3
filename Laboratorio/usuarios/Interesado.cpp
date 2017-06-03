
#include "Interesado.hpp"

Interesado :: Interesado(){

}

Interesado :: Interesado(string email,string contrasenia,string nombre,string apellido, string edad):Usuario(email, contrasenia){
  this->nombre = nombre;
  this->apellido = apellido;
  this->edad = edad;
}


Interesado :: Interesado(DtInteresado oDtInteresado):Usuario(oDtInteresado.getEmail(), oDtInteresado.getContrasenia()){
  this->nombre = oDtInteresado.getNombre();
  this->apellido = oDtInteresado.getApellido();
  this->edad = oDtInteresado.getEdad();
}

 string Interesado :: getNombre(){
  return this->nombre;
}
 void Interesado :: setNombre(string nombre){
  this->nombre = nombre;
}
string Interesado :: getApellido(){
 return this->apellido;
}
void Interesado :: setApellido(string apellido){
 this->apellido = apellido;
}
string Interesado :: getEdad(){
 return this->edad;
}
void Interesado :: setEdad(string edad){
 this->edad = edad;
}

        // toDataType

 DtUsuario Interesado :: toDataType() {
   DtInteresado oDtInteresado;
   oDtInteresado.setEmail(this->getEmail());
   oDtInteresado.setContrasenia(this->getContrasenia());
   oDtInteresado.setNombre(this->getNombre());
   oDtInteresado.setApellido(this->getApellido());
   oDtInteresado.setEdad(this->getEdad());
   return oDtInteresado;
 }
