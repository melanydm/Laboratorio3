#ifndef INTERESADO_HPP
#define INTERESADO_HPP

#include <string>
#include "./datatypes/DtInteresado.hpp"
#include "Usuario.hpp"


using namespace std;

class Interesado : public Usuario {
    private:
        string nombre;
        string apellido;
        int edad;

    public:
    Interesado();
		Interesado(string,string,string,string, int);
		Interesado(DtInteresado);

        // geters seters
		string getNombre();
        string getApellido();
        int getEdad();
        void getNombre(string);
        void getApellido(string);
        void getEdad(int);

        // toDataType

     DtUsuario toDataType();

		// Destructor

		virtual ~Interesado();
}

#endif //INTERESADO_HPP
