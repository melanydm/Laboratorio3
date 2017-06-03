#ifndef SISTEMA_HPP
#define SISTEMA_HPP

#include <map>
#include <list>
#include <string>

#include "./usuarios/Usuario.hpp"
#include "./propiedades/Apartamento.hpp"
#include "./propiedades/Casa.hpp"
#include "./propiedades/Departamento.hpp"
#include "./propiedades/Zona.hpp"
#include "./propiedades/Edificio.hpp"
#include "./usuarios/Administrador.hpp"
#include "./usuarios/Inmobiliaria.hpp"
#include "./propiedades/Oferta.hpp"
#include "./usuarios/datatypes/DtInmobiliaria.hpp"
#include "./propiedades/datatypes/DtEdificio.hpp"
#include "./propiedades/datatypes/DtDepartamento.hpp"
#include "./propiedades/datatypes/DtZona.hpp"
#include "./propiedades/datatypes/DtApartamento.hpp"
#include "./propiedades/datatypes/DtCasa.hpp"
#include "./propiedades/datatypes/DtOferta.hpp"

#include "ISistema.hpp"
using namespace std;

class Sistema: public ISistema {
    private:
        Usuario* usuario;

        std::map<string, Usuario*> usuarios;

        std::map<string, Propiedad*> propiedades;
        std::map<string, Departamento*> departamentos;
        std::map<string, Edificio*> edificios;
        std::map<string, Zona*> zonas;
        std::map<string, Oferta*> ofertas;

        DtZona zonaSeleccionada;
        DtEdificio edificioSeleccionado;
        DtDepartamento departamentoSeleccionado;

    public:
        //Alta Inmobiliaria
        //Alta Propiedad
      Sistema();

      virtual  ~Sistema();

      Usuario* getUsuario();

      bool iniciarSesion(string);
      bool ingresarPass(string);
      bool crearUsuario(string, string);

      bool altaInmobiliaria(DtInmobiliaria);

      void altaEdificio(DtEdificio);
      void altaZona(DtZona);
      void altaDepartamento(DtDepartamento);
      list<DtDepartamento> listarDepto();
      void selectDepto(DtDepartamento);
      list<DtZona> listarZona();
      void selectZona(DtZona);
      list<DtEdificio> listarEdificios();
      void selectEdificio(DtEdificio);
      void altaPropiedad(DtPropiedad, DtOferta);

      void finalizar();

      //Funciones para precargar datos
      void precargarDatos();

};

#endif //SISTEMA:HPP
