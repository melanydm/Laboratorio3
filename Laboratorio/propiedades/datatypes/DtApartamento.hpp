#ifndef DT_APARTAMENTO_HPP
#define DT_APARTAMENTO_HPP

#include "DtPropiedad.hpp"
/*
#include "../../utils/ToBasicDt.hpp"
#include "../../utils/datatypes/DtDireccion.hpp"*/

using namespace std;

class DtApartamento : public DtPropiedad  {

    public:
        DtApartamento();
        DtApartamento(DtApartamento&);

		    // Operators

	//	    virtual bool operator == (DtApartamento) = 0;


		   // Destructor

		    virtual ~DtApartamento();
};

//istream& operator>>(istream&, DtApartamento);
//ostream& operator<<(ostream&, DtApartamento);

#endif //DT_APARTAMENTO_HPP
