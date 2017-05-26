#include "DtPropiedad.hpp"
//getters
string DtPropiedad::getCodigo()
{
    return codigo;
}

int DtPropiedad::getCant_ambientes()
{
    return cant_ambientes;
}

int DtPropiedad::getCant_dormitorios()
{
    return cant_dormitorios;
}
int DtPropiedad::getCant_banios()
{
     return cant_banios;
}
bool DtPropiedad::getGarage()
{
    return garage;
}
DtDireccion DtPropiedad::getDireccion()
{
    return direccion;
}
int DtPropiedad::getMts_edificados()
{
    return mts_edificados;
}
int DtPropiedad::getMts_totales()
{
    return mts_totales;
}

//setters
void DtPropiedad::setCodigo(string aux)
{
    codigo=aux;
}
void DtPropiedad::setCant_ambientes(int aux)
{
    cant_ambientes=aux;
}
void DtPropiedad::setCant_dormitorios(int aux)
{
    cant_dormitorios=aux;
}
void DtPropiedad::setCant_banios(int aux)
{
    cant_banios=aux;
}
void DtPropiedad::setGarage(bool aux)
{
    garage=aux;
}
void DtPropiedad::setDireccion(DtDireccion aux)
{
    DtDireccion=aux;
}
void DtPropiedad::setMts_edificados(int aux)
{
    mts_edificados=aux;
}
void DtPropiedad::setMts_totales(int aux)
{
    mts_totales=aux;
}

/*istream& operator>>(istream& in, DtPropiedad& extra)
//sobraecarga del operador >> para ingresar el nombrefantasia
{
int i=0;
string codigo = "";
int cant_ambientes = 0;
int cant_dormitorios = 0;
int cant_banios = 0;
bool garage = false;
DtDireccion direccion;
int mts_edificados = 0;
int mts_totales = 0;

while (s!="\n"&&i<8)
{   in >> setw(1) >> s;
    if (s==",")
        i++;
    if(i==0)
        codigo=codigo+s;
    else if(i==1)
        cant_ambientes = cant_ambientes * 10 + (int)s;
    else if(i==2)
        cant_dormitorios = cant_dormitorios * 10 + (int)s;
    else if(i==3)
        cant_banios = cant_banios * 10 + (int)s;
    else if(i==4)
        garage = garage;
    else if(i==5)
    {
        in>>direccion;
        i++;
    }
    else if(i==6)
        mts_edificados = mts_edificados * 10 + (int)s;
    else if(i==7)
        mts_totales = mts_totales * 10 + (int)s;
 }
setCodigo(codigo);
setCant_ambientes(cant_ambientes);
setCant_dormitorios(cant_dormitorios);
setCant_banios(cant_banios);
setGarage(garage);
setDireccion(dreccion);
setMts_edificados(mts_edificados);
setMts_totales(mts_totales);
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
*/
