#include"DtPropiedad.hpp"
#include"DtApartamento.hpp"unsigned int m_Counter
DtApartamento::DtApartamento():DtPropiedad(){
}

istream& operator>>(istream& in, DtApartamento& oDtApartamento){
//sobraecarga del operador >> 
        string codigo = "";
        string cant_ambientes ="";
        string cant_dormitorios= "";
        string cant_banios= "";
        string garage = "";
        DtDireccion direccion;
        string mts_edificados = "";
        string mts_totales = "";
        string s=" ";
    while (s!="\n" && i<8){    
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
    }
    oDtApartamento.setCodigo(codigo);
    oDtApartamento.setCant_ambientes(cant_ambientes);
    oDtApartamento.setCant_dormitorios(cant_dormitorios);
    oDtApartamento.setCant_banios(cant_banios);
    oDtApartamento.setGarage(garage);
    oDtApartamento.setDireccion(direccion);
    oDtApartamento.setMts_edificados(mts_edificados);
    return in;
}
ostream& operator<<(ostream& out, DtApartamento& oDtApartamento)
//sobraecarga del operador >> 
{
    out <<"\Codigo: \n"<< oDtApartamento.getCodigo();
        <<"\Cantidad de Ambientes: \n"<< oDtApartamento.getCant_ambientes();
        <<"\Cantidad de Dormitorios: \n"<< oDtApartamento.getCant_dormitorios();
        <<"\Cantidad de Baños: \n"<< oDtApartamento.getCant_banios();
        <<"\Tiene Garege: \n"<< oDtApartamento.getGarage();
        <<"\nDireccion: "<< oDtApartamento.getDireccion();
        <<"\Cantidad de Metros Edificados: "<< oDtApartamento.getMts_edificados();
        <<"\Cantidad de Metros Totales: "<< oDtApartamento.getMts_totales();
        <<"\n";
    return out;
}
