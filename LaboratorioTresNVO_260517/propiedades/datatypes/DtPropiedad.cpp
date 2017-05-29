#include "DtPropiedad.hpp"
//ctor
DtPropiedad::DtPropiedad()
{
    codigo="";
    cant_ambientes="";
    cant_dormitorios="";
    cant_banios="";
    garage="No";
    direccion;
    mts_edificados="";
    mts_totales="";
}
DtPropiedad::DtPropiedad(DtPropiedad &prop)
{
    this->codigo=prop.getCodigo();
    this->cant_ambientes=prop.getCant_Ambientes();
    this->cant_dormitorios=prop.getCant_Dormitorios();
    this->cant_banios=prop.getCant_Banios();
    this->garage=prop.getGarage();
    this->direccion=prop.getDireccion();
    this->mts_edificados=prop.getMts_Edificados();
    this->mts_totales=prop.getMts_Totales();
}
//getters
string DtPropiedad::getCodigo()
{
    return codigo;
}

string DtPropiedad::getCant_Ambientes()
{
    return cant_ambientes;
}

string DtPropiedad::getCant_Dormitorios()
{
    return cant_dormitorios;
}
string DtPropiedad::getCant_Banios()
{
     return cant_banios;
}
string DtPropiedad::getGarage()
{
    return garage;
}
DtDireccion DtPropiedad::getDireccion()
{
    return direccion;
}
string DtPropiedad::getMts_Edificados()
{
    return mts_edificados;
}
string DtPropiedad::getMts_Totales()
{
    return mts_totales;
}

//setters
void DtPropiedad::setCodigo(string aux)
{
    codigo=aux;
}
void DtPropiedad::setCant_Ambientes(string aux)
{
    cant_ambientes=aux;
}
void DtPropiedad::setCant_Dormitorios(string aux)
{
    cant_dormitorios=aux;
}
void DtPropiedad::setCant_Banios(string aux)
{
    cant_banios=aux;
}
void DtPropiedad::setGarage(string aux)
{
    garage=aux;
}
void DtPropiedad::setDireccion(DtDireccion aux)
{
    direccion=aux;
}
void DtPropiedad::setMts_Edificados(string aux)
{
    mts_edificados=aux;
}
void DtPropiedad::setMts_Totales(string aux)
{
    mts_totales=aux;
}

istream& operator>>(istream& in, DtPropiedad& extra)
//sobraecarga del operador >> para ingresar el nombrefantasia
{
int i=0;
string codigo = "";
string cant_ambientes = 0;
string cant_dormitorios = 0;
string cant_banios = 0;
string garage = false;
DtDireccion direccion;
string mts_edificados = 0;
string mts_totales = 0;
string s = " ";
while (s!="\n"&&i<8)
{   in >> setw(1) >> s;
    if (s==",")
        i++;
    if(i==0)
        codigo=codigo+s;
    else if(i==1)
        cant_ambientes = cant_ambientes + s;
    else if(i==2)
        cant_dormitorios = cant_dormitorios + s;
    else if(i==3)
        cant_banios = cant_banios + s;
    else if(i==4)
        garage = garage+s;
    else if(i==5)
    {
        in>>direccion;
        i++;
    }
    else if(i==6)
        mts_edificados = mts_edificados + s;
    else if(i==7)
        mts_totales = mts_totales + s;
 }
setCodigo(codigo);
setCant_Ambientes(cant_ambientes);
setCant_Dormitorios(cant_dormitorios);
setCant_Banios(cant_banios);
setGarage(garage);
setDireccion(dreccion);
setMts_Edificados(mts_edificados);
setMts_Totales(mts_totales);
return in;
}
ostream& operator<<(ostream& out, DtExtranjero& extra)
//sobraecarga del operador >> para imprimir el nombrefantasia
{
out <<"\nId: "<< extra.getId()
<<"\nDireccion: "<< extra.getDireccion()
<<"\nNombre fantasia: "<< extra.getNombreFantasia()
<<"\n";
return out;
}

