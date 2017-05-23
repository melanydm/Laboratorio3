//============================================================================
// Name        : Mi Casa
// Author      : Los 5
// Version     : 0.1
// Copyright   : -
// Description : Laboratorio Tres
//============================================================================

#include <stdexcept>

using namespace std;



int main(void) {
	char menu='0';
    int cantEmpresas=0;
    bool salir= false;
 //  	DtEmpresa empresas = new DtEmpresa*[MAX_EMPRESAS];
	while(!salir){
        imprimirMenu();
        cin >> menu;
        switch (menu) {
            case '1': {
                cout << "Ingrese la C.I: ";
                string ci;
                cin >> ci;
                cout << "Ingrese Nombre: ";
                string nombre;
                cin >> nombre;
                cout << "Ingrese Apellido: ";
                string apellido;
                cin >> apellido;
                cout << "Ingrese la Dirección \n(pais, ciudad, nro, calle.): ";
                DtDireccion dir;
                cin >> dir;//error en la sobrecarga de direccion terminar con .

                cout << "\n\nEmpleado: " << ci << " - " << nombre << " - " << apellido << " - " << dir;

                agregarEmpleado(ci,nombre,apellido,dir); //Acà explota
                break;
            }
            case '2': {
                cout << "1.Empresa nacional\n2.Empresa extranjera\ningrese un tipo: ";
                int tipoemp;
                cin >> tipoemp;
                DtEmpresa emp;
                if (tipoemp==1)
                {
                    cout << "Ingrese la identificacion de la empresa: ";
                    string id;
                    cin >> id;
                    cout << "Ingrese la dirección de la empresa: ";
                    DtDireccion dir;
                    cin >> dir;
                    cout << "Ingrese el RUT de la empresa: ";
                    string rut;
                    cin >> rut;
                    DtNacional nac(id, dir, rut);

                    cout << "\n\nEmpresa nacional: " << id << " - " << dir << " - " << rut;

                    try {
                        agregarEmpresa(nac);
                        cantEmpresas++;
                    } catch (std::exception& e) {//0x746e801
                        cout << e.what();
                    }
                }
                else
                {
                    cout << "Ingrese la identificacion de la empresa: ";
                    string id;
                    cin >> id;
                    cout << "Ingrese la dirección de la empresa: ";
                    DtDireccion dir;
                    cin >> dir;
                    cout << "Ingrese el nombre de fantasia de la empresa: ";
                    string nomFan;
                    cin >> nomFan;
                    DtExtranjero ext(id, dir, nomFan);
                    //cin >> nac;

                    cout << "\n\nEmpresa extranjera: " << id << " - " << dir << " - " << nomFan;

                    agregarEmpresa(ext);
                };


                break;
            }
            case '3':
            {
                int cantEmpleados=0;
                cout<<"Ingrese la cantidad de empleados: ";
                cin >> cantEmpleados;
                for(int i = 0; i<cantEmpleados; i++){
                    cout<< "\nNombre: " << listarEmpleados(cantEmpleados)[i]->getNombre();
                    cout<< "\nApellido: " <<  listarEmpleados(cantEmpleados)[i]->getApellido();
                    cout<< "\nC.I.: " << listarEmpleados(cantEmpleados)[i]->getCi();
                    cout<< "\nDirecciòn: " << listarEmpleados(cantEmpleados)[i]->getDireccion();

                }
                cin.ignore();
                break;
            }
            case '4': {
                cout << "Ingrese la C.I: ";
                string ci;
                cin >> ci;
                cout << "Ingrese el Id de la empresa: ";
                string id;
                cin >> id;
                cout << "Ingrese El sueldo: ";
                float sueldo;
                cin >> sueldo;
                try {
                    agregarRelacionLaboral(ci,id, sueldo);
                } catch (std::exception& e) {
                    cout << e.what() << '\n';
                }

                break;
            }
            case '5': {
                cout << "Ingrese la C.I: ";
                string ci;
                cin >> ci;
                cout << "Ingrese el Id de la empresa: ";
                string id;
                cin >> id;
                cout << "Ingrese la fecha de desvinculaciòn: ";
                DtFecha fDesvin;
                cin >> fDesvin;
                finalizarRelacionLaboral(ci,id, fDesvin);
                break;
            }
            case '6': {
                cout << "Ingrese la C.I: ";
                string ci;
                cin >> ci;
                DtEmpresa *dataEmp={NULL};
                dataEmp= obtenerInfoEmpresaPorEmpleado(ci, cantEmpresas);
                int i= 0;
               // while (i<2 && &dataEmp[i]!=NULL){
                    cout<< "\nId de la empresa: " << dataEmp[0].getId();
                    cout<< "\nDirección: porquería que no funciona\n";
                    cout<< "\nId de la empresa: " << dataEmp[1].getId();
                    cout<< "\nDirección: porquería que no funciona";
                //    i++;
             //   }
                cout << "\nEnter para volver al menú.";
                cin.ignore();
                break;
            }
            case '7': {
                for (int i=0; i<MAX_EMPRESAS && colEmpresas[i] != NULL; i++){
                cout << colEmpresas[i]->getId() << "\n";
                cout << colEmpresas[i]->getDireccion() << "\n";
                break;
                }
            }
            case '8': {
                salir= true;
                break;
            }
            default: cout << "Error, valor incorrecto";
        }
        cout << "\nEnter para volver al menú.";
        cin.ignore();
    }

	return EXIT_SUCCESS;
}