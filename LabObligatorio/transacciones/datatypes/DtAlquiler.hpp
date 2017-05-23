#ifndef DT_ALQUILER_HPP
#define DT_ALQUILER_HPP

#include "DtOferta.hpp"

using namespace std;

class DtAlquiler : public DtOferta {

    public:
        DtAlquiler();
		DtAlquiler(DtAlquiler*);

		// Operators

		virtual bool operator == (DtAlquiler*) = 0;

		// Destructor

		virtual ~DtAlquiler();
}

#endif //DT_ALQUILER_HPP