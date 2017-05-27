#ifndef USUARIO_HPP
#define USUARIO_HPP

#include "./datatypes/DtUsuario.hpp"

#include <string>

using namespace std;

class Usuario {
    protected:
        string email;
        string contrasenia;

    public:
        // geters seters
		virtual string getEmail();
        virtual string getContrasenia();
        virtual void setEmail(string);
        virtual void setContrasenia(string);

        // toValueObject

        virtual DtUsuario* toValueObject() = 0;

		// Operators

		virtual bool operator == (Usuario*) = 0;

		// Destructor

		virtual ~Usuario();
}

#endif //USUARIO_HPP