#include "Edificio.hpp"

Edificio::Edificio()
{
    nombre = "";
    cant_Pisos = 0;
    gastos_Comunes = 0;
}

Edificio::Edificio(DtEdificio edif)
{
    this->nombre = edif.getNombre();
    this->cant_Pisos = edif.getCant_Pisos();
    this->gastos_Comunes = edif.getGastos_Comunes();
}

DtEdificio Edificio::toDataType()
{
    DtEdificio edif;
    edif.setNombre(this->getNombre());
    edif.setCant_Pisos(this->getCant_Pisos());
    edif.setGastos_Comunes(this->getGastos_Comunes());
    return edif;
}
Edificio::~Edificio()
{
    //dtor
}
