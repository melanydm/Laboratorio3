#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include <Propiedad.hpp>


class Apartamento : public Propiedad
{
    public:
        Apartamento();
        Apartamento(DtApartamento);
        virtual ~Apartamento();
    protected:
    private:
};

#endif // APARTAMENTO_HPP
