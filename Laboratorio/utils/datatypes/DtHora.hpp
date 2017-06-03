#ifndef DT_HORA_HPP
#define DT_HORA_HPP


#include "iomanip"
#include "iostream"

using namespace std;


class DtHora {
    private:
        int hora;
        int minutos;

    public:
        DtHora();

        int getHora();
        int getMinutos();
        void setHora(int);
        void setMinutos(int);

        virtual ~DtHora();

        bool operator == (DtHora);

};

#endif //DT_HORA_HPP
