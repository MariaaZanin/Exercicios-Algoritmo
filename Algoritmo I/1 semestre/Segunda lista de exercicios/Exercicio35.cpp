/*
Escrever um algoritmo e um programa que leia um número inteiro. Mostrar se o
número lido é “par” ou “ímpar”.
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
        cout<< "\n O numero é par: " <<n1;

    }else
    {
        cout<< "\n O numero é impar: "<<n1;
    }
    cout<< "\n\n\n";
    system ("pause");


}

