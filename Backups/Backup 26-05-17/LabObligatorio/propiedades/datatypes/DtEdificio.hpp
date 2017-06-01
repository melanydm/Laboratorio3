#ifndef DT_EDIFICIO_HPP
#define DT_EDIFICIO_HPP

using namespace std;

class DtEdificio  {

    public:
        DtEdificio();
		DtEdificio(DtEdificio*);

		// Operators

		virtual bool operator == (DtEdificio*) = 0;

		// Destructor

		virtual ~DtEdificio();
}

#endif //DT_EDIFICIO_HPP