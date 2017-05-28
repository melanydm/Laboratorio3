#ifndef DT_INMOBILIARIA_HPP
#define DT_INMOBILIARIA_HPP

#include <string>
#include "../../utils/datatypes/DtDireccion.hpp"
#include "DtUsuario.hpp"


using namespace std;

class DtInmobiliaria : public DtUsuario {
    private:
        string nombre;
        DtDireccion direccion;

    public:
        DtInmobiliaria();

        // geters seters
		string getNombre();
        DtDireccion getDireccion();
        void setNombre(string);
        void setDireccion(DtDireccion);


		virtual ~DtInmobiliaria();
}

//virtual istream& operator>>(istream&, DtInmobiliaria);
//virtual ostream& operator<<(ostream&, DtInmobiliaria);

#endif //DT_INMOBILIARIA_HPP
