///Codigo fuente: Permite ver la tabla del 10
///Codigo creado por: Carlos Manuel Guevara Hernandez
///Carnet:GH18015
///Fecha: 17 de septiembre de 2018

///librerias obligatorias utilizadas
#include <iostream> ///utilizado para operaciones de entrada/salida.
#include <math.h>	///utilizado para procesos matematicos.
#include <windows.h>

				///cuerpo del programa
using namespace std;

int main (int argc, char *argv[])
{

int i=10;
int j;

cout<<("La tabla del 10 es ")<<endl;

for (int j=1;j<=10;j++)
{

cout<<i<<"x"<<j<<"="<<i*j<<endl;

 }

system("pause");
return EXIT_SUCCESS;

}
