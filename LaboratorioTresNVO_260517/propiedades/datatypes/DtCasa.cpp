#include"DtCasa.hpp"
#include"DtPropiedad.hpp"

//ctor
DtCasa::DtCasa() : DtPropiedad()
{
    mts_espaciosVerdes = 1;
}

DtCasa::DtCasa (DtCasa &casa) : DtPropiedad(casa)
{
    this.mts_espaciosVerdes = casa.getMts_espaciosVerdes;
}
   //getters
int DtCasa::getMts_espaciosVerdes()
{
    return this.mts_espaciosVerdes;
}
    //setters
void DtCasa::setMts_espaciosVerdes(int aux)
{
    this.mts_espaciosVerdes = aux;
}
istream& operator>>(istream& in, DtCasa& oDtCasa){
//sobraecarga del operador >> 
        string codigo = "";
        int cant_ambientes = 0;
        int cant_dormitorios= 0;
        int cant_banios= 0;
        bool garage;
        DtDireccion direccion;
        int mts_edificados = 0;
        int mts_totales = 0;
        int mts_espaciosVerdes = 0;
        string s=" ";
    while (s!="\n" && i<9){    
        in >> setw(1) >> s;
        if (s==",")
            i++;
        if(i==0)
            codigo=codigo+s;
        else if(i==1){
            cant_ambientes = cant_ambientes + s;
            i++;
        }
        else if(i==2){
            cant_dormitorios = cant_dormitorios * 10 + (int)s;
            i++;
        }
        else if(i==3){
            cant_banios = cant_banios * 10 + (int)s;
            i++;
        }
        else if(i==4){
            garage = garage && (bool)s;
            i++;
        }
        else if(i==5){
            in >> direccion;
            i++;
        }
        else if(i==6){
            mts_edificados = mts_edificados * 10 + (int)s;
            i++;
        }
        else if(i==7){
            mts_totales = mts_totales * 10+ (int)s;
            i++;
        }
        else if(i==8){
            mts_espaciosVerdes = mts_espaciosVerdes * 10 + (int)s;
            i++;
        }
    }
    oDtCasa.setCodigo(codigo);
    oDtCasa.setCant_ambientes(cant_ambientes);
    oDtCasa.setCant_dormitorios(cant_dormitorios);
    oDtCasa.setCant_banios(cant_banios);
    oDtCasa.setGarage(garage);
    oDtCasa.setDireccion(direccion);
    oDtCasa.setMts_edificados(mts_edificados);
    oDtCasa.setMts_totales(mts_totales);
    oDtCasa.setMts_espaciosVerdes(mts_espaciosVerdes);
    return in;
}
ostream& operator<<(ostream& out, DtCasa& oDtCasa)
//sobraecarga del operador >> 
{
    out <<"\Codigo: \n"<< oDtCasa.getCodigo();
        <<"\Cantidad de Ambientes: \n"<< oDtCasa.getCant_ambientes();
        <<"\Cantidad de Dormitorios: \n"<< oDtCasa.getCant_dormitorios();
        <<"\Cantidad de Baños: \n"<< oDtCasa.getCant_banios();
        <<"\Tiene Garege: \n"<< oDtCasa.getGarage();
        <<"\nDireccion: "<< oDtCasa.getDireccion();
        <<"\Cantidad de Metros Edificados: "<< oDtCasa.getMts_edificados();
        <<"\Cantidad de Metros Totales: "<< oDtCasa.getMts_totales();
        <<"\Cantidad de Metros de Espacios Verdes: "<< oDtCasa.getMts_espaciosVerdes();
        <<"\n";
    return out;
}

// Lo siguiente no sé porqué estaba repetido
/*
istream& operator>>(istream& in, DtCasa& oDtCasa){
//sobraecarga del operador >> 
        string codigo = "";
        string cant_ambientes = 0;
        string cant_dormitorios= "";
        string cant_banios= "";
        string garage;
        DtDireccion direccion;
        string mts_edificados = "";
        string mts_totales = "";
        string mts_espaciosVerdes = "";
        string s=" ";
    while (s!="\n" && i<9){    
        in >> setw(1) >> s;
        if (s==",")
            i++;
        if(i==0)
            codigo=codigo+s;
        else if(i==1){
            cant_ambientes= cant_ambientes+s;
            i++;
        }
        else if(i==2){
            cant_dormitorios=cant_dormitorios+s;
            i++;
        }
        else if(i==3){
            cant_banios=cant_banios+s;
            i++;
        }
        else if(i==4){
            garage=garage+s;
            i++;
        }
        else if(i==5){
            in >> direccion;
            i++;
        }
        else if(i==6){
            mts_edificados=mts_edificados+s;
            i++;
        }
        else if(i==7){
            mts_totales=mts_totales+s;
            i++;
        }
        else if(i==8){
            mts_espaciosVerdes=mts_espaciosVerdes+s;
            i++;
        }
    }
    oDtCasa.setCodigo(codigo);
    oDtCasa.setCant_ambientes(cant_ambientes);
    oDtCasa.setCant_dormitorios(cant_dormitorios);
    oDtCasa.setCant_banios(cant_banios);
    oDtCasa.setGarage(garage);
    oDtCasa.setDireccion(direccion);
    oDtCasa.setMts_edificados(mts_edificados);
    oDtCasa.setMts_totales(mts_totales);
    oDtCasa.setMts_espaciosVerdes(mts_espaciosVerdes);
    return in;
}
ostream& operator<<(ostream& out, DtCasa& oDtCasa)
//sobraecarga del operador >> 
{
    out <<"\Codigo: \n"<< oDtCasa.getCodigo();
        <<"\Cantidad de Ambientes: \n"<< oDtCasa.getCant_ambientes();
        <<"\Cantidad de Dormitorios: \n"<< oDtCasa.getCant_dormitorios();
        <<"\Cantidad de Baños: \n"<< oDtCasa.getCant_banios();
        <<"\Tiene Garege: \n"<< oDtCasa.getGarage();
        <<"\nDireccion: "<< oDtCasa.getDireccion();
        <<"\Cantidad de Metros Edificados: "<< oDtCasa.getMts_edificados();
        <<"\Cantidad de Metros Totales: "<< oDtCasa.getMts_totales();
        <<"\Cantidad de Metros de Espacios Verdes: "<< oDtCasa.getMts_espaciosVerdes();
        <<"\n";
    return out;
}
*/