
#include "DtUsuario.hpp"

    DtUsuario :: DtUsuario(){
      this->email = "";
      this->contrasenia = "";
    }


		string DtUsuario :: getEmail(){
      return this->email;
    }
    string DtUsuario :: getContrasenia(){
      return this->contrasenia;
    }
    void DtUsuario :: setEmail(string email){
      this->email = email;
    }
    void DtUsuario :: setContrasenia(string contrasenia){
      this->contrasenia = contrasenia;
    }

		 bool operator == (DtUsuario oUsuario){
       if(oUsuario.getEmail() == this->email)
          return true;
      return false;
     }
     }


		virtual ~DtUsuario();
