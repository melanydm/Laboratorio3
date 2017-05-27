
#include "Administrador.hpp"

Administrador :: Administrador(){

}

Administrador :: Administrador(string email, string contrasenia){
    this->email = email;
    this->contrasenia = contrasenia;
}


virtual string Administrador :: getEmail();
virtual string Administrador :: getContrasenia();
virtual void Administrador :: setEmail(string);
virtual void setContrasenia(string);

        // toValueObject

virtual DtUsuario* Administrador :: toValueObject() = 0;

		// Operators

virtual bool operator == (Usuario*);

		// Destructor

virtual ~Administrador();