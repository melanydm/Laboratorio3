#ifndef DT_FECHA_HPP
#define DT_FECHA_HPP

#include <string>

using namespace std;


class DtFecha {
    private:
        string dd;
        string mm;
        string aa;

    public:
        DtFecha();

        string getAa();
        string getMm();
        string getDd();
        void setDd(string);
        void setMm(string);
        void setAa(string);

        virtual ~DtFecha();

		// Operators

		bool operator == (DtFecha);

};

#endif //DT_FECHA_HPP
