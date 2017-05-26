#ifndef DT_ZONA_HPP
#define DT_ZONA_HPP

using namespace std;

class DtZona  {

    public:
        DtZona();

		// Operators

		virtual bool operator == (DtZona) = 0;

		// Destructor

		virtual ~DtZona();
}
  virtual istream& operator>>(istream&, DtZona);
  virtual ostream& operator<<(ostream&, DtZona);

#endif //DT_ZONA_HPP
