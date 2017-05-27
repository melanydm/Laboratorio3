#ifndef SISTEMA_HPP
#define SISTEMA_HPP

#include <map>
#include <list>
#include <string>

#include "./usuarios/Usuario.hpp"
#include "./propiedades/Propiedad.hpp"

#include "ISistema.hpp"

class Sistema: public ISistema {
    private:
        Usuario* usuario;

        std::map<string, Usuario*> usuarios;

        std::map<string, Propiedad*> propiedades;
        std::map<string, Departamento*> departamentos;
        std::map<string, Edificio*> edificios;
        std::map<string, Zona*> zonas;
        std::map<string, Oferta*> ofertas;

    public:
        //Alta Inmobiliaria
        //Alta Propiedad
      Sistema();

      virtual  ~Sistema(){
        delete this;
      }

      Usuario* getUsuario();

      virtual bool iniciarSesion(string);
      virtual bool ingresarPass(string);
      virtual bool crearUsuario(string, string);

      virtual bool altaInmobiliaria(DtInmobiliaria);

      virtual void altaEdificio(DtEdificio);
      virtual list<DtDepartamento> listarDepto();
      virtual void selectDepto(DtDepartamento);
      virtual list<DtZona> listarZona();
      virtual void selectZona(DtZona);
      virtual list<DtEdificio> listarEdificios();
      virtual void selectEdificio(DtEdificio);
      virtual void altaPropiedad(DtPropiedad, DtOferta);

      virtual finalizar();


}

#endif //SISTEMA:HPP
