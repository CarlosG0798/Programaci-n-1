///Codigo fuente: Ingresar cinco notas y sacar el promedio de las mismas
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
{    float notas [5]; ///Declaracion de variable para notas
     float suma; ///Declaracion de varible para suma
     float promedio; ///Declaracion de variable para el promedio

     for ( int i=0; i<=4; i++ )
     {
     do {
      system ("cls");
      cout << "Ingrese la nota " << i+1 << endl;
      cin >> notas[i];
       } while ( notas [i] < 0 || notas[i] > 10 );

      suma = suma + notas[i];
     }
      system ("cls");
      cout << "Sus notas son: "  << endl;

      for ( int i=0; i<=4; i++ ){
      cout << notas [i] << endl;
     }


      promedio = suma/5;
      cout << "El promedio es de: " << promedio << endl; ///Aqui da la nota promedio

      system ("pause"); ///Para que el programa no se cierre despues de ejecutarse

     return EXIT_SUCCESS; ///Finaliza el programa
}
