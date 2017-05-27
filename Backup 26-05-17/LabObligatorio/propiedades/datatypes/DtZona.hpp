#ifndef DT_ZONA_HPP
#define DT_ZONA_HPP

using namespace std;

class DtZona  {

    public:
        DtZona();
		DtZona(DtZona*);

		// Operators

		virtual bool operator == (DtZona*) = 0;

		// Destructor

		virtual ~DtZona();
}

#endif //DT_ZONA_HPP