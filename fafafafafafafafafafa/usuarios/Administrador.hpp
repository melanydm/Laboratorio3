#ifndef ADMINISTRADOR_HPP
#define ADMINISTRADOR_HPP

#include <string>
#include "./datatypes/DtAdministrador.hpp"
#include "Usuario.hpp"


using namespace std;

class Administrador : public Usuario {
    public:
    Administrador();
		Administrador(string, string);
		Administrador(DtAdministrador);

        // toValueObject

   DtUsuario toDataType() ;

		// Destructor

		virtual ~Administrador();
}

#endif //ADMINISTRADOR_HPP
