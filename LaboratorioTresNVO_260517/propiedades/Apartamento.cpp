#include "Propiedad.hpp"
#include "Apartamento.hpp"

Apartamento::Apartamento():Propiedad()
{
    //ctor
}

Apartamento::Apartamento(DtApartamento apto):Propiedad(apto)
{
    //ctor
}

Apartamento::~Apartamento()
{
    //dtor
}
