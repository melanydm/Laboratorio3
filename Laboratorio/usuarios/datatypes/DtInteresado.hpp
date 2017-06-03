#ifndef DT_INTERESADO_HPP
#define DT_INTERESADO_HPP

#include "string"
#include "iomanip"
#include "iostream"
#include "DtUsuario.hpp"


using namespace std;

class DtInteresado : public DtUsuario {
    private:
        string nombre;
        string apellido;
        string edad;

    public:
        DtInteresado();


        // geters seters
    	string getNombre();
        string getApellido();
        string getEdad();
        void setNombre(string);
        void setApellido(string);
        void setEdad(string);

virtual ~DtInteresado();
};

 istream& operator>>(istream&, DtInteresado);
 ostream& operator<<(ostream&, DtInteresado);

#endif //DT_INTERESADO_HPP
