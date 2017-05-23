#ifndef DT_APARTAMENTO_HPP
#define DT_APARTAMENTO_HPP

#include "DtPropiedad.hpp"

using namespace std;

class DtApartamento : public DtPropiedad  {

    public:
        DtApartamento();
		DtApartamento(DtApartamento*);

		// Operators

		virtual bool operator == (DtApartamento*) = 0;

		// Destructor

		virtual ~DtApartamento();
}

#endif //DT_APARTAMENTO_HPP