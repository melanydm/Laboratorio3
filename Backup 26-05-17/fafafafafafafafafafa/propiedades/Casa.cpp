#include "Propiedad.hpp"
#include "Casa.hpp"

casa::casa():propiedad()
{
    mts_espaciosVerdes=1;
}
casa::casa(DtCasa c):propiedad(c)
{
    this.mts_espaciosVerdes=c.getMts_espaciosVerdes;
}
casa::~casa()
{
    //dtor
}

