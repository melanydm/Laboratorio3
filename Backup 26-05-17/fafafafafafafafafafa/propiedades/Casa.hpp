#ifndef CASA_HPP
#define CASA_HPP

#include <propiedad.hpp>


class casa : public propiedad
{
    public:
        casa();
        casa(DtCasa);
        virtual ~casa();
        int getMts_espaciosVerdes() { return mts_espaciosVerdes; }
        void setMts_espaciosVerdes(int val) { mts_espaciosVerdes = val; }
    protected:
    private:
        int mts_espaciosVerdes;
};

#endif // CASA_H
