
#include "Apartamento.hpp"
//#include "Propiedad.hpp"

Apartamento::Apartamento():Propiedad()
{
    //ctor
}

Apartamento::Apartamento(DtApartamento apto):Propiedad(apto)
{
    //ctor
}

Apartamento::Apartamento(DtPropiedad prop) : Propiedad(prop) {
	
}
Apartamento::~Apartamento()
{
    //dtor
}
