#ifndef ISISTEMA_HPP
#define ISISTEMA_HPP

#include <list>
#include <string>

#include "./usuarios/datatypes/DtInmobiliaria.hpp"

#include "./propiedades/datatypes/DtDepartamento.hpp"
#include "./propiedades/datatypes/DtZona.hpp"
#include "./propiedades/datatypes/DtEdificio.hpp"
#include "./propiedades/datatypes/DtPropiedad.hpp"
#include "./usuarios/Usuario.hpp"

#include "./propiedades/datatypes/DtOferta.hpp"
using namespace std;

class ISistema {
  public:

      virtual bool iniciarSesion(string);
      virtual bool ingresarPass(string);
      virtual bool crearUsuario(string, string);

      virtual Usuario* getUsuario();

      virtual bool altaInmobiliaria(DtInmobiliaria);

      virtual void altaZona(DtZona);
      virtual void altaDepartamento(DtDepartamento);
      virtual void altaEdificio(DtEdificio);
      virtual list<DtDepartamento> listarDepto();
      virtual void selectDepto(DtDepartamento);
      virtual list<DtZona> listarZona();
      virtual void selectZona(DtZona);
      virtual list<DtEdificio> listarEdificios();
      virtual void selectEdificio(DtEdificio);
      virtual void altaPropiedad(DtPropiedad&, DtOferta, bool);

      virtual void finalizar();

      //Funciones para precargar datos
      virtual void precargarDatos();

};

#endif //ISISTEMA_HPP
