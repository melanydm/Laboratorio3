#include "Propiedad.hpp"

Propiedad::Propiedad()
{
    codigo="";
    cant_ambientes=1;
    cant_dormitorios=1;
    cant_banios=1;
    garage=false;
    direccion;
    mts_edificados=1;
    mts_totales=1;
}

Propiedad::Propiedad(DtPropiedad prop)
{
    this.codigo=prop.getCodigo();
    this.cant_ambientes=prop.getCant_ambientes();
    this.cant_dormitorios=prop.getCant_dormitorios();
    this.cant_banios=prop.getCant_banios();
    this.garage=prop.getGarage();
    this.direccion=prop.getDireccion();
    this.mts_edificados=prop.getMts_edificados();
    this.mts_totales=prop.getMts_totales();
}

Propiedad::~Propiedad()
{
    //dtor
}
