
#include "DtInteresado.hpp"
#include "DtUsuario.hpp"


    DtInteresado :: DtInteresado(): DtUsuario(){
      this->nombre = "";
      this->apellido = "";
      this->edad = "";
    }


        // geters seters
		string DtInteresado :: getNombre(){
      return this->nombre;
    }
    string DtInteresado :: getApellido(){
      return this->apellido;
    }
    string DtInteresado :: getEdad(){
      return this->edad;
    }
    void DtInteresado :: getNombre(string nombre){
      this->nombre = nombre;
    }
    void DtInteresado :: getApellido(string apellido){
      this->apellido = apellido;
    }
    void DtInteresado :: getEdad(string edad){
      this->edad = edad;
    }

		// Destructor

		virtual DtInteresado :: ~DtInteresado(){

    }


istream& operator>>(istream& in, DtInteresado& interesado){
//sobraecarga del operador >>
int i=0;
string s= "";
string nombre = "";
string apellido = "";
string edad ="";
while (s!="\n"&&i<4)
{   in >> setw(1) >> s;
    if (s==",")
        i++;
    if(i==0){
        nombre=nombre+s;
    }else if(i==1){
        apellido=apellido+s;
        i++;
    }else if(i==2){
        edad=edad+s;
        i++;
    }
 }
interesado.setNombre(nombre);
interesado.setApellido(apellido);
interesado.setEdad(edad);
return in;
}

ostream& operator<<(ostream& out, DtInteresado& interesado){
//sobraecarga del operador >>
out <<"\nNombre: "<< interesado.getNombre()
<<"\nApellido: "<< interesado.getApellido()
<<"\nEdad: "<< interesado.getEdad()
<<"\n";
return out;
}
