
#include "Interesado.hpp"

Interesado :: Interesado(){

}

Interesado :: Interesado(string email,string contrasenia,string nombre,string apellido, int edad):Usuario(email, contrasenia){
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
int Interesado :: getEdad(){
 return this->edad;
}
void Interesado :: setEdad(int edad){
 this->edad = edad;
}

        // toDataType

 DtUsuario Interesado :: toDataType() {
   DtInteresado oDtInteresado;
   oDtInteresado.setEmail(this->getEmail());
   oDtInteresado.setContrasenia(this->getContrasenia());
   oDtInteresado.setNombre(this->nombre);
   oDtInteresado.setApellido(this->apellido);
   oDtInteresado.setEdad(this->edad);
   return oDtInteresado;
 }
		// Destructor

virtual ~Interesado();
