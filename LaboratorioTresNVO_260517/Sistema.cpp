
#include "Sistema.hpp"

Sistema :: Sistema (){
  this->usuario = NULL;
  Administrador * admin = new Administrador("admin@micasa.com", "admin");
  this->usuarios["admin@micasa.com"] = admin;
}

Sistema :: ~Sistema(){
  delete this;
}


Usuario* Sistema :: getUsuario(){
  return this->usuario;
}

bool Sistema :: iniciarSesion(string email){
  return true;
}
bool Sistema :: ingresarPass(string contrasenia){
  return true;
}
bool Sistema :: crearUsuario(string contrasenia, string verificacion){
  return true;
}

bool Sistema :: altaInmobiliaria(DtInmobiliaria oDtInmobiliaria){
  Inmobiliaria * inmo = new Inmobiliaria(oDtInmobiliaria);
  this->usuarios[oDtInmobiliaria.getEmail()] = inmo;
  return true;
}

/**
* Busca por existencia de un edicio con ese nombre
* en caso de que ya exista lanza una excepcion
*/
void Sistema :: altaEdificio(DtEdificio oDtEdificio){
  Edificio * edificio = new Edificio(oDtEdificio);
  std::map<string, Edificio*>::iterator ite;
  ite = this->edificios.find(oDtEdificio.getNombre());
  if (ite == this->edificios.end())
  {
    this->edificios[oDtEdificio.getNombre()] = edificio;
  } else {
    // exception el edificio ya existe;
  }

}

list<DtDepartamento> Sistema :: listarDepto(){
  list<DtDepartamento> retorno;
  for (std::map<string, Departamento*>::iterator it = this->departamentos.begin(); it != this->departamentos.end(); ++it)
          retorno.push_back(it->second->toDataType());
  return retorno;
}

void Sistema :: selectDepto(DtDepartamento oDtDepartamento){
  this->departamentoSeleccionado = oDtDepartamento;
}

list<DtZona> Sistema :: listarZona(){
  list<DtZona> retorno;
  for (std::map<string, Zona*>::iterator it = this->zonas.begin(); it != this->zonas.end(); ++it)
          retorno.push_back(it->second->toDataType());
  return retorno;
}

void Sistema :: selectZona(DtZona oDtZona){
  this->zonaSeleccionada = oDtZona;
}

list<DtEdificio> Sistema :: listarEdificios(){
  list<DtEdificio> retorno;
  for (std::map<string, Edificio*>::iterator it = this->edificios.begin(); it != this->edificios.end(); ++it)
          retorno.push_back(it->second->toDataType());
  return retorno;
}

void Sistema :: selectEdificio(DtEdificio oDtEdificio){
    this->edificioSeleccionado = oDtEdificio;
}
  /**
  * DtPropiedad va a ser o un DtCasa o un DtApartamento
  * hay que averiguar cual es y luego crear su objeto,
  * selearle los valores que se guardaron en memoria
  * y lego guardarlo en su map correspondiente.
  */
void Sistema :: altaPropiedad(DtPropiedad oDtPropiedad, DtOferta oDtOferta){
  /**
  * Supuestamente, si se trata de castear dinámicamente un tipo a una clase que no es, 
  * el casteo da NULL.
  * Otra forma de verificar el tipo puede ser con la librería "type_info":
  * que permite utilizar la funcion typeID que devuelve el nombre de la clase
  */
  if (dynamic_cast<DtCasa>(oDtPropiedad) == NULL) {
    Casa * casa = new Casa(dynamic_cast<DtCasa>(oDtPropiedad));
  } else {
    Apartamento * apto = new Apartamento(dynamic_cast<DtApartamento>(oDtPropiedad));
  }
  Oferta * ofer = new Oferta(oDtOferta);
}


void Sistema :: finalizar(){

}
