/*
Escrever um algoritmo e um programa que leia um n�mero inteiro. Mostrar se o
n�mero lido � �par� ou ��mpar�.
*/

#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cmath>
using namespace std;
main ()
{
    setlocale (LC_ALL, "Portuguese");
    int n1, resu;

    cout<< "Informe o numero: ";
    cin>> n1;

    resu= fmod (n1,2);

    if (resu == 0){
        cout<< "\n O numero � par: " <<n1;

    }else
    {
        cout<< "\n O numero � impar: "<<n1;
    }
    cout<< "\n\n\n";
    system ("pause");


}

