#ifndef DT_PROPIEDAD_HPP
#define DT_PROPIEDAD_HPP

using namespace std;

class DtPropiedad  {

    public:
        DtPropiedad();
		DtPropiedad(DtPropiedad*);

		// Operators

		virtual bool operator == (DtPropiedad*) = 0;

		// Destructor

		virtual ~DtPropiedad();
}

#endif //DT_PROPIEDAD_HPP