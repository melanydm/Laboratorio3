#ifndef DT_ADMINISTRADOR_HPP
#define DT_ADMINISTRADOR_HPP

#include <string>
#include "DtUsuario.hpp"


using namespace std;

class DtAdministrador : public DtUsuario {
    public:
        DtAdministrador();

	// Destructor

		virtual ~DtAdministrador();
};

istream& operator>>(istream&, DtAdministrador);
ostream& operator<<(ostream&, DtAdministrador);

#endif //DT_ADMINISTRADOR_HPP
