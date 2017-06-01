#include"DtCasa.hpp"
#include"DtPropiedad.hpp"

//ctor
DtCasa():DtPropiedad()
{
    mts_espaciosVerdes=1;
}
DtCasa(DtCasa casa):DtPropiedad(casa)
{
    this.mts_espaciosVerdes=casa.getMts_espaciosVerdes;
}
   //getters
int getMts_espaciosVerdes()
{
    return mts_espaciosVerdes;
}
    //setters
void getMts_espaciosVerdes(int aux)
{
    mts_espaciosVerdes=aux;
}
