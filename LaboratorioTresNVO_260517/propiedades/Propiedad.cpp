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
    this->codigo = prop.getCodigo();
    this->cant_ambientes = prop.getCant_Ambientes();
    this->cant_dormitorios = prop.getCant_Dormitorios();
    this->cant_banios = prop.getCant_Banios();
    this->garage = prop.getGarage();
    this->direccion = prop.getDireccion();
    this->mts_edificados = prop.getMts_Edificados();
    this->mts_totales = prop.getMts_Totales();
}

DtPropiedad Propiedad::toDataType(){
    DtPropiedad prop;
    prop.setCodigo(this->codigo);
    prop.setCant_Ambientes(this->cant_ambientes);
    prop.setCant_Dormitorios(this->cant_dormitorios);
    prop.setCant_Banios(this->cant_banios);
    prop.setGarage(this->garage);
    prop.setDireccion(this->direccion);
    prop.setMts_Edificados(this->mts_edificados);
    prop.setMts_Totales(this->mts_totales);
    return prop;
}


Propiedad::~Propiedad()
{
    //dtor
}
