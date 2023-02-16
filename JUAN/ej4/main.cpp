#include <iostream>

using namespace std;

float promedio (int v[], int tam);

int main(){

        int tam = 10, numeros[tam];


        cout << "\n Ingresar 10 numeros enteros: "<< endl;

        for (i=0;i <= 9; i++)

        {

          cout << "\n Digite el numero entero: "<< endl;

          cin >>  numeros[i];

        }

        cout << "\n El promedio de los numeros ingresados es: "<< promedio(numeros,tam)<< endl;

        return = 0;
}

float promedio (int v[], int tam )
{
        float suma;

        for(int i=0; i<=tam; i++)

                suma = suma +v[i];

        return suma/tam;

}

        prom = promedio(numeros);

  cout << "El promedio es: " << prom << endl;

  return 0;
}

