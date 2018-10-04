///Creado por: Carlos Manuel Guevara Hernandez
///Numero de carnet: GH18015
#include <iostream> /// Libreria para entrada y salida de datos

void l (); ///funcion que limpia la pantalla
int cl (int clear); ///corrobora que los datos ingresados sean correctos y validos

using namespace std;


int main()
{

    int produccion; ///produccion de soda diaria
    int produccion2; ///produccion de jugo diaria
    float jugosAz; ///cuanta azucar es necesaria para producir todos los jugos
    float jugosAg; ///cuanta agua se necesita para producir todos los jugos
    float sodAz; ///cuanta azucar se necesitara para producir todas las sodas
    float sodAg; ///cuanta agua se requiere para producir todas las sodas

    do{
        l ();

        cout << "Ingrese la cantidad de produccion de sodas diaria: ", cin >> produccion;
        ///ingresa la cantidad de sodas producidas a diario

        cl (produccion);

    } while ( produccion < 1 || cin.fail());///repite el ciclo hasta que este correcto el dato ingresado

    do{

        l ();

        cout << "Ingrese la cantidad de produccion de jugos diaria: ", cin >> produccion2;
		///ingresa la cantidad de jugos producidas a diario
        cl (produccion2);

      } while ( produccion2 < 1 || cin.fail()); ///repite el ciclo hasta que este correcto el dato ingresado

	///saca el total de azucar requerida para la produccion diaria de jugo
      jugosAz = produccion2 * 600;

	///saca el total de agua requerida para la produccion diaria de jugo
      jugosAg = produccion2* 700;

      l ();
	///muestra los resultados
      cout << "La cantidad requerida de azucar en jugos es: " << jugosAz << "g" << endl;
      cout << "La cantidad requerida de agua en jugos es: " << jugosAg << "ml" << endl;

	///saca el total de azucar requerida para la produccion diaria de soda
      sodAz = produccion * 800;

    ///saca el total de agua requerida para la produccion diaria de soda
	  sodAg = produccion * 500;

	///muestra los resultados
      cout << "La cantidad requerida de azucar en sodas es: " << sodAz << "g" << endl;
      cout << "La cantidad requerida de agua en sodas es: " << sodAg << "ml" << endl;

}

void l ()
      {
          system ("cls");
      }

int cl (int clear)
    {
          if (clear == 0) {
            cout << "No se realizo produccion alguna" <<  endl;
          }
          if (cin.fail() || clear <= 0)
    	{
			cin.clear(); /// limpia la variable ingresada
        	cin.ignore(); /// borra caracteres
        	system("pause"); /// pausa el programa
    	}
    return clear;///retorna la misma variable

      }
