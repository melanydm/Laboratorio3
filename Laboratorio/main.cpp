//============================================================================
// Name        : Mi Casa
// Author      : Los 5
// Version     : 0.1
// Copyright   : -
// Description : Laboratorio Tres
//============================================================================

#include "Fabrica.hpp"
#include "ISistema.hpp"
#include <list>
#include <iostream>

#include "./usuarios/datatypes/DtInmobiliaria.hpp"
#include "./propiedades/datatypes/DtApartamento.hpp"
#include "./propiedades/datatypes/DtCasa.hpp"
#include "./propiedades/datatypes/DtDepartamento.hpp"
#include "./propiedades/datatypes/DtEdificio.hpp"
#include "./propiedades/datatypes/DtZona.hpp"
#include "./propiedades/datatypes/DtOferta.hpp"
#include "./utils/datatypes/DtDireccion.hpp"

using namespace std;

void imprimirMenu();
bool isApartamento();
DtDepartamento mostrarDepartamentos(list<DtDepartamento> colDeptos);
DtEdificio mostrarEdificios(list<DtEdificio> colEdificios);
DtZona mostrarZona(list<DtZona> colZonas);

ISistema* sistema = NULL;
Fabrica* fabrica = NULL;

int main(void) {
	fabrica = new Fabrica();
	sistema = fabrica->getSistema();
	sistema->precargarDatos();
	char menu='0';
  bool salir= false;

	while(!salir){
        imprimirMenu();
        cin >> menu;
        switch (menu) {
            case '1': {
								cout << "-- Administrador - Alta Inmobiliaria --" << '\n';
                DtInmobiliaria oDtInmobiliaria;
								std::cin >> oDtInmobiliaria;
								sistema->altaInmobiliaria(oDtInmobiliaria);
								sistema->finalizar();
                break;
            }
            case '2': {
                cout << "-- Inmobiliaria - Alta Propiedad --" << '\n';
                list<DtDepartamento> colDeptos = sistema->listarDepto();
								DtDepartamento oDtDepartamento;
								mostrarDepartamentos(colDeptos);
								sistema->selectDepto(oDtDepartamento);
								list<DtZona> colZonas = sistema->listarZona();
								DtZona oDtZona; 
								mostrarZona(colZonas);
								sistema->selectZona(oDtZona);
								if(isApartamento()){
									bool existeEdificio = false;
									while(!existeEdificio){
										list<DtEdificio> colEdificios = sistema->listarEdificios();
										DtEdificio oDtEdificio;
										mostrarEdificios(colEdificios);
										if (oDtEdificio.getNombre() == ""){
											std::cout << " -- Alta de Edicio -- " << '\n';
											std::cin >> oDtEdificio;
											sistema->altaEdificio(oDtEdificio);
										} else {
											sistema->selectEdificio(oDtEdificio);
											existeEdificio = true;
										}
									}
									DtApartamento oDtApartamento;
									std::cin >> oDtApartamento;
									DtOferta oDtOferta;
									std::cin >> oDtOferta;
									sistema->altaPropiedad(oDtApartamento,oDtOferta, false);

								} else {

									DtCasa oDtCasa;
									std::cin >> oDtCasa;
									DtOferta oDtOferta;
									std::cin >> oDtOferta;
									sistema->altaPropiedad(oDtCasa , oDtOferta, true);

								}
								sistema->finalizar();
                break;
            }
            default: cout << "Error, valor incorrecto";
        }
        cout << "\nEnter para volver al menú.";
        cin.ignore();
    }
	//return EXIT_SUCCESS;
}

void imprimirMenu(){
	std::cout << "MENU" << '\n' ;
	std::cout << "1 - Alta Inmobiliaria" << '\n';
	std::cout << "2 - Alta Propiedad" << '\n' ;
	std::cout << "Ingrese una opcion: ";
}

bool isApartamento(){
	char op='0';
	bool retorno = false;
	std::cout << "1 - Apartamento" << '\n';
	std::cout << "2 - Casa " << '\n' ;
	std::cout << "Ingrese una opcion: ";
	cin >> op;
	switch (op) {
			case '1': {
				retorno = true;
				break;
			}
			case '2': {
				retorno = false;
				break;
			}
			default: cout << "Error, valor incorrecto";
	}
	return retorno;
}

DtDepartamento mostrarDepartamentos(list<DtDepartamento> colDeptos){
	DtDepartamento oDtDepartamento;

	cout << "-- Seleccionar Departamento --" << endl;

	list<DtDepartamento>::iterator it;
	int contador=0;
	for(it=colDeptos.begin(); it != colDeptos.end(); ++it){
		cout << contador << " - " << *it;
		contador++;
	}
	cout << endl;
	cout << "----------" << endl;
	std::cout << "Ingrese una opcion: ";
	int op;
	cin >> op;
	for(it=colDeptos.begin(); it != colDeptos.end(); ++it){
		if (op == contador){
			oDtDepartamento = *it;
			break;
		}
		contador++;
	}
	return oDtDepartamento;
}

DtZona mostrarZona(list<DtZona> colZonas){
	DtZona oDtZona;

	cout << "-- Seleccionar Zonas --" << endl;

	list<DtZona>::iterator it;
	int contador=0;
	for(it=colZonas.begin(); it != colZonas.end(); ++it){
		cout << contador << " - " << *it;
		contador++;
	}
	cout << endl;
	cout << "----------" << endl;
	std::cout << "Ingrese una opcion: ";
	int op;
	cin >> op;
	for(it=colZonas.begin(); it != colZonas.end(); ++it){
		if (op == contador){
			oDtZona = *it;
			break;
		}
		contador++;
	}
	return oDtZona;
}

DtEdificio mostrarEdificios(list<DtEdificio> colEdificios){
	DtEdificio oDtEdificio;

	cout << "-- Seleccionar Edificios --" << endl;

	list<DtEdificio>::iterator it;
	int contador=0;
	for(it=colEdificios.begin(); it != colEdificios.end(); ++it){
		cout << contador << " - " << *it;
		contador++;
	}
	cout << endl;
	cout << "----------" << endl;
	std::cout << "Ingrese una opcion: ";
	int op;
	cin >> op;
	for(it=colEdificios.begin(); it != colEdificios.end(); ++it){
		if (op == contador){
			oDtEdificio = *it;
			break;
		}
		contador++;
	}
	return oDtEdificio;
}

