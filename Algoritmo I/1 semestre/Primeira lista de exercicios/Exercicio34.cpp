/*
Escrever um algoritmo e um programa que leia dois valores num�ricos e mostre a
diferen�a do maior para o menor.
*/

#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
main ()
{
    setlocale (LC_ALL, "Portuguese");
    float n1,n2, diferen;

    cout<< "Informe o primerio n�mero: ";
    cin>> n1;
    cout<< "Informe o segundo n�mero: ";
    cin>> n2;

    if (n1>n2)
    {
        diferen = n1-n2;
        cout<< "A diferen�a seria: " <<diferen;

    }
    else
    {
        diferen = n2-n1;
        cout<< "A diferen�a seria: "<<diferen;

    }
    cout<< "\n\n\n";
    system ("pause");

}

