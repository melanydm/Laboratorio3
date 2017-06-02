#include"DtPropiedad.hpp"
#include"DtApartamento.hpp" //unsigned int m_Counter


DtApartamento::DtApartamento():DtPropiedad(){
}

istream& operator>>(istream& in, DtApartamento& oDtApartamento){
//sobraecarga del operador >> 
        string codigo = "";
        int cant_ambientes = 0;
        int cant_dormitorios= 0;
        int cant_banios= 0;
        bool garage = false;
        DtDireccion direccion;
        int mts_edificados = 0;
        int mts_totales = 0;
        string s=" ";
        int i = 0;

    while (s!="\n"&&i<8)
{   in >> setw(1) >> s;
    if (s==",")
        i++;
    if(i==0)
        codigo=codigo+s;
    else if(i==1){
        cant_ambientes = cant_ambientes * 10 + toInt(s);
    }
    else if(i==2){
        cant_dormitorios = cant_dormitorios * 10 + toInt(s);
    }
    else if(i==3)
        cant_banios = cant_banios * 10 + toInt(s);
    else if(i==4)
        garage = garage;
    else if(i==5)
    {
        in >> direccion;
        i++;
    }
    else if(i==6)
        mts_edificados = mts_edificados * 10 + toInt(s);
    else if(i==7)
        mts_totales = mts_totales * 10 + toInt(s);
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
{
    out <<"\nCodigo: \n"<< oDtApartamento.getCodigo()
        <<"\nCantidad de Ambientes: \n"<< oDtApartamento.getCant_ambientes()
        <<"\nCantidad de Dormitorios: \n"<< oDtApartamento.getCant_dormitorios()
        <<"\nCantidad de Baños: \n"<< oDtApartamento.getCant_banios()
        <<"\nTiene Garege: \n"<< oDtApartamento.getGarage()
        <<"\nnDireccion: "<< printDireccion(oDtApartamento.getDireccion())
        <<"\nCantidad de Metros Edificados: "<< oDtApartamento.getMts_edificados()
        <<"\nCantidad de Metros Totales: "<< oDtApartamento.getMts_totales()
        <<"\n";
    return out;
}
