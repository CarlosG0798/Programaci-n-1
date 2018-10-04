///Codigo fuente: Factorial de un numero
///Codigo creado por: Carlos Manuel Guevara Hernandez
///Carnet:GH18015
///Fecha: 17 de septiembre de 2018

///Librerias a utilizar en el programa
#include <iostream>
#include <windows.h>
#include <cstdlib>

///Inicio del programa
using namespace std;
///Cuerpo del programa
int main()

{
    int num;
    int fact=1;
    cout << "Ingrese un numero: ";
    cin >> num;
    for (int i=1; i<=num; i++)
        {
            fact = fact*i;
            cout << fact << endl;
        }

        cout << "El resultado es: " << fact << endl;

      system ("pause"); ///Para que el programa no se cierre despues de ejecutarse

     return EXIT_SUCCESS; ///Finaliza el programa
}

