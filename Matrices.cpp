///Creado por: Carlos Manuel Guevara Hernandez
///Carnet: GH18015
#include <iostream>

using namespace std;

int main()
{
    int mat[5][5];///Declaramos una matriz

    int mat2 [5][5];

    int mat3 [5][5];

    for (int fila=0; fila<5; fila++){///Ciclo for

        for ( int col=0; col<5; col++ ){

            mat[fila][col]=0;

            if ( fila==4 || col==2 ){

                mat2 [fila][col]=0;

                mat2 [fila][col]=0;

            } else {

                mat2 [fila][col]=1;
            }

            mat3 [fila][col]= mat[fila][col] + mat2 [fila][col];
        }
    }

    for (int fila=0; fila<5; fila++){///Ciclo for

        for ( int col=0; col<5; col++ ){

                cout << mat3 [fila][col] << "\t";
        }

        cout<<endl;
    }

    system ("pause");
}
