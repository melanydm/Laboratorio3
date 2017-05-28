#ifndef ISISTEMA_HPP
#define ISISTEMA_HPP

#include <list>
#include <string>

#include "./usuarios/datatypes/DtInmobiliaria.hpp"

#include "./propiedades/datatypes/DtDepartamento.hpp"
#include "./propiedades/datatypes/DtZona.hpp"
#include "./propiedades/datatypes/DtEdificio.hpp"
#include "./propiedades/datatypes/DtPropiedad.hpp"

#include "./propiedades/datatypes/DtOferta.hpp"

class ISistema {
  public:

      virtual bool iniciarSesion(string) = 0;
      virtual bool ingresarPass(string) = 0;
      virtual bool crearUsuario(string, string) = 0;

      virtual bool altaInmobiliaria(DtInmobiliaria) = 0;

      virtual void altaZona(DtZona);
      virtual void altaDepartamento(DtDepartamento);
      virtual void altaEdificio(DtEdificio) = 0;
      virtual list<DtDepartamento> listarDepto() = 0;
      virtual void selectDepto(DtDepartamento)   = 0;
      virtual list<DtZona> listarZona()  = 0;
      virtual void selectZona(DtZona)  = 0;
      virtual list<DtEdificio> listarEdificios() = 0;
      virtual void selectEdificio(DtEdificio) = 0;
      virtual void altaPropiedad(DtPropiedad, DtOferta) = 0;

      virtual finalizar() = 0;

      //Funciones para precargar datos
      virtual void precargarDatos();

};

#endif //ISISTEMA_HPP
