#include <string>
#include <map>
#include <iostream>
#include <iterator>

using namespace std;

std::map<string, int> usuarios;

// Generar un esqueleto del método main() a partir del comportamiento contenido en los
// Diagramas de Secuencia del Sistema de la solución de los siguientes Casos de Uso:
// Alta Inmobiliaria
// Alta Propiedad

void funcion(int *q);

int main()
{

        usuarios["Wally"] = 95;
        usuarios["Pedro"] = 87;
        usuarios["Pedro"] = 66;
        usuarios["Pedro"] = 76;
        for (std::map<string, int>::iterator it = usuarios.begin(); it != usuarios.end(); ++it)
                std::cout << it->first << " => " << it->second << '\n';

        std::cout << usuarios["Wally"] << std::endl;

        std::cout << "Tamano => " << usuarios.size() << std::endl;

        std::map<string, int>::iterator ite;

        ite = usuarios.find("Wally");
        if (ite != usuarios.end())
        {
                std::cout << ite->first << " => " << ite->second << '\n';
                std::cout << "Chau Wally" << '\n';
                usuarios.erase(ite);
        }

        std::cout << "Tamano => " << usuarios.size() << std::endl;

        // print content:
        for (std::map<string, int>::iterator it = usuarios.begin(); it != usuarios.end(); ++it)
                std::cout << it->first << " => " << it->second << '\n';


        // PUNTEROS

        int a;
        int *p;

        a = 100;
        p = &a;
        // Llamamos a funcion con un puntero
        funcion(p); // (1)
        cout << "Variable a: " << a << endl;
        cout << "Variable *p: " << *p << endl;
        // Llamada a funcion con la dirección de "a" (constante)
        funcion(&a); // (2)
        cout << "Variable a: " << a << endl;
        cout << "Variable *p: " << *p << endl;

        return 0;
}

void funcion(int *q)
{
        // Cambiamos el valor de la variable apuntada por
        // el puntero
        *q += 50;
        q++;
}
