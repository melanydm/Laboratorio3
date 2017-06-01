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
        // constructores
    Usuario();
    Usuario(string,string);
    Usuario(DtUsuario);


        // geters seters
		    virtual string getEmail();
        virtual string getContrasenia();
        virtual void setEmail(string);
        virtual void setContrasenia(string);

        // toDataType

    virtual DtUsuario toDataType() = 0;

		// Operators

		bool operator == (Usuario*);

		// Destructor

		~Usuario();
};

#endif //USUARIO_HPP
