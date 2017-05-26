#ifndef DT_OFERTA_HPP
#define DT_OFERTA_HPP

using namespace std;

class DtOferta {

    public:
        DtOferta();

		// Operators

		virtual bool operator == (DtOferta) = 0;
		// Destructor

		virtual ~DtOferta();
}

virtual istream& operator>>(istream&, DtOferta);
virtual ostream& operator<<(ostream&, DtOferta);

#endif //DT_OFERTA_HPP
