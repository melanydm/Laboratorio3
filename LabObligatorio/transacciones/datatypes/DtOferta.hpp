#ifndef DT_OFERTA_HPP
#define DT_OFERTA_HPP

using namespace std;

class DtOferta {

    public:
        DtOferta();
		DtOferta(DtOferta*);

		// Operators

		virtual bool operator == (DtOferta*) = 0;

		// Destructor

		virtual ~DtOferta();
}

#endif //DT_OFERTA_HPP