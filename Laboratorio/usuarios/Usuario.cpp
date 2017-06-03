#include "Usuario.hpp"
#include "./datatypes/DtUsuario.hpp"
#include <string>


Usuario::Usuario(){
  this->email = "";
  this->contrasenia = "";
}
Usuario::Usuario(string email,string contrasenia){
  this->email = email;
  this->contrasenia = contrasenia;
}
Usuario::Usuario(DtUsuario oDtUsuario){
  this->email = oDtUsuario.getEmail();
  this->contrasenia = oDtUsuario.getContrasenia();
}

string Usuario::getEmail(){
  return this->email;
}
     string Usuario::getContrasenia(){
      return this->contrasenia;
    }
 void Usuario::setEmail(string email){
      this->email = email;
}
 void Usuario::setContrasenia(string contrasenia){
      this->contrasenia = contrasenia;
}

bool Usuario::operator == (Usuario* oUsuario){
  if(oUsuario->getEmail() == this->getEmail())
    return true;
  return false;
}

Usuario::~Usuario(){

}
