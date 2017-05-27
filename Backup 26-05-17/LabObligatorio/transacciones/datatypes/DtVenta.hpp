#ifndef DT_VENTA_HPP
#define DT_VENTA_HPP

#include "DtOferta.hpp"

using namespace std;

class DtVenta : public DtOferta {

    public:
        DtVenta();
		DtVenta(DtVenta*);

		// Operators

		virtual bool operator == (DtVenta*) = 0;

		// Destructor

		virtual ~DtVenta();
}

#endif //DT_VENTA_HPP