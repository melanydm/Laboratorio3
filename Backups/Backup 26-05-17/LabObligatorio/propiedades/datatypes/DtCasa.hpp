#ifndef DT_CASA_HPP
#define DT_CASA_HPP

#include "DtPropiedad.hpp"

using namespace std;

class DtCasa : public DtPropiedad  {

    public:
        DtCasa();
		DtCasa(DtCasa*);

		// Operators

		virtual bool operator == (DtCasa*) = 0;

		// Destructor

		virtual ~DtCasa();
}

#endif //DT_CASA_HPP