#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include <propiedad.hpp>


class apartamento : public propiedad
{
    public:
        apartamento();
        apartamento(DtApartamento);
        virtual ~apartamento();
    protected:
    private:
};

#endif // APARTAMENTO_HPP
