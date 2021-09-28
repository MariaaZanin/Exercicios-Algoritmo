/*
Faça um algoritmo que leia dois números nas variáveis Val1 e Val2, calcule sua média na variável
Media e imprima seu valor.
*/

#include <iostream>
#include <cstdlib>

using namespace std;
main ()
{
    //dados
    float val1, val2, media;
    //Informcao
    cout<< "Informe o primeiro numero da variavel: ";
    cin>> val1;
    cout<< "Informe o segundo numero da variavel :";
    cin>> val2;
    //calculo
    media = (val1 + val2)/2;
    //resultado
    cout<< "\n O resultado da media variavel e: " << media;
    cout<< "\n\n\n";
    system ("pause");

}


