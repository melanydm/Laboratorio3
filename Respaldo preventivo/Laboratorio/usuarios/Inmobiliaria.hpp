#ifndef INMOBILIARIA_HPP
#define INMOBILIARIA_HPP

#include <string>
#include "./datatypes/DtInmobiliaria.hpp"
#include "./../utils/datatypes/DtDireccion.hpp"
#include "Usuario.hpp"


using namespace std;

class Inmobiliaria : public Usuario {
    private:
        string nombre;
        DtDireccion direccion;

    public:
        Inmobiliaria();
		Inmobiliaria(string,string,string, DtDireccion);
		Inmobiliaria(DtInmobiliaria);

        // geters seters
		string getNombre();
        DtDireccion getDireccion();
        void setNombre(string);
        void setDireccion(DtDireccion);

        // toDataType

   DtUsuario toDataType();

		// Destructor

		virtual ~Inmobiliaria();
};

#endif //INMOBILIARIA_HPP
