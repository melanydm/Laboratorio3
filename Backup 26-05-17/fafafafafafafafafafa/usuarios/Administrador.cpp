
#include "Administrador.hpp"

Administrador :: Administrador(){

}

Administrador :: Administrador(string email, string contrasenia):Usuario(email, contrasenia){

}

        // toValueObject

 DtUsuario Administrador :: toDataType(){
   DtAdministrador oDtAdministrador;
   oDtAdministrador.setEmail(this->getEmail());
   oDtAdministrador.setContrasenia(this->getContrasenia());
   return oDtAdministrador;
 }

		// Destructor

virtual ~Administrador();
