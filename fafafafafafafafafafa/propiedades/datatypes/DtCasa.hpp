#ifndef DT_CASA_HPP
#define DT_CASA_HPP

#include "DtPropiedad.hpp"

using namespace std;

class DtCasa : public DtPropiedad  {
    private:
        int mts_espaciosVerdes;

    public:
        DtCasa();
	    //getters
	    int getMts_espaciosVerdes();
	    //setters
	    void getMts_espaciosVerdes(int);

		// Operators

		//virtual bool operator == (DtCasa) = 0;


		// Destructor

		virtual ~DtCasa();
}

//istream& operator>>(istream&, DtCasa);
//ostream& operator<<(ostream&, DtCasa);

#endif //DT_CASA_HPP
