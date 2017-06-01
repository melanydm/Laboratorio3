
#include "DtInteresado.hpp"
#include "DtUsuario.hpp"


    DtInteresado :: DtInteresado(): DtUsuario(){
      this->nombre = "";
      this->apellido = "";
      this->edad = 0;
    }


        // geters seters
		string DtInteresado :: getNombre(){
      return this->nombre;
    }
    string DtInteresado :: getApellido(){
      return this->apellido;
    }
    int DtInteresado :: getEdad(){
      return this->edad;
    }
    void DtInteresado :: getNombre(string nombre){
      this->nombre = nombre;
    }
    void DtInteresado :: getApellido(string apellido){
      this->apellido = apellido;
    }
    void DtInteresado :: getEdad(int edad){
      this->edad = edad;
    }

		// Destructor

		virtual DtInteresado :: ~DtInteresado(){

    }
