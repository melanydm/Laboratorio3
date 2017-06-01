#ifndef VENTA_HPP
#define VENTA_HPP

#include "./datatypes/DtVenta.hpp"
#include "Oferta.hpp"

using namespace std;

class Venta : public Oferta {

    public:
        Venta();
		Venta(DtVenta*);

        // toValueObject

        virtual DtVenta* toValueObject() = 0;

		// Operators

		virtual bool operator == (Venta*) = 0;

		// Destructor

		virtual ~Venta();
}

#endif //ALQUILER_HPP