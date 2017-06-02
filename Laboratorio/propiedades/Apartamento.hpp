#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

using namespace std;
#include "Propiedad.hpp"
#include "./datatypes/DtApartamento.hpp"

class Apartamento:public Propiedad
{
    public:
        Apartamento();
        Apartamento(DtApartamento);
        virtual ~Apartamento();
    protected:
    private:
};

#endif // APARTAMENTO_HPP
