#ifndef Casa_HPP
#define Casa_HPP

#include <Propiedad.hpp>


class Casa : public Propiedad
{
    public:
        Casa();
        Casa(DtCasa);
        virtual ~Casa();
        int getMts_espaciosVerdes() { return mts_espaciosVerdes; }
        void setMts_espaciosVerdes(int val) { mts_espaciosVerdes = val; }
    protected:
    private:
        int mts_espaciosVerdes;
};

#endif // Casa_H
