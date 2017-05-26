#ifndef DT_EDIFICIO_HPP
#define DT_EDIFICIO_HPP

using namespace std;

class DtEdificio  {

    public:
        DtEdificio();

		// Operators

		virtual bool operator == (DtEdificio) = 0;

		// Destructor

		virtual ~DtEdificio();
}

virtual istream& operator>>(istream&, DtEdificio);
virtual ostream& operator<<(ostream&, DtEdificio);

#endif //DT_EDIFICIO_HPP
