
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

bool DtUsuario::operator== (DtUsuario oUsuario){
       if(oUsuario.getEmail() == this->email){
          return true;
	}else{
      	return false;
	}
}

    
istream& operator>>(istream& in, DtUsuario usuario){
//sobraecarga del operador >>
int i=0;
string email = "";
string contrasenia = "";
string s = "";
while (s!="\n"&&i<3){
   in >> setw(1) >> s;
    if (s==",")
        i++;
    if(i==0){
        email=email+s;
    }else if(i==1){
        contrasenia=contrasenia+s;
        i++;
    }
 }
usuario.setEmail(email);
usuario.setContrasenia(contrasenia);
return in;
}

ostream& operator<<(ostream& out, DtUsuario usuario){
//sobraecarga del operador >>
out <<"\nEmail: "<< usuario.getEmail()
<<"\nContraseña: "<< usuario.getContrasenia()
<<"\n";
return out;
}
