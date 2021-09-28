/*
Escrever um algoritmo e um programa que leia dois valores numéricos e mostre a
diferença do maior para o menor.
*/

#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
main ()
{
    setlocale (LC_ALL, "Portuguese");
    float n1,n2, diferen;

    cout<< "Informe o primerio número: ";
    cin>> n1;
    cout<< "Informe o segundo número: ";
    cin>> n2;

    if (n1>n2)
    {
        diferen = n1-n2;
        cout<< "A diferença seria: " <<diferen;

    }
    else
    {
        diferen = n2-n1;
        cout<< "A diferença seria: "<<diferen;

    }
    cout<< "\n\n\n";
    system ("pause");

}

