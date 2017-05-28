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

DtPropiedad::Propiedad toDataType(){
    DtPropiedad prop;
    prop.setCodigo(this.codigo);
    prop.setCant_ambientes(this.cant_ambientes);
    prop.setCant_dormitorios(this.cant_dormitorios);
    prop.setCant_banios(this.cant_banios);
    prop.setGarage(this.garage);
    prop.setDireccion(this.direccion);
    prop.setMts_edificados(this.mts_edificados);
    prop.setMts_totales(this.mts_totales);
    return prop
}


Propiedad::~Propiedad()
{
    //dtor
}
