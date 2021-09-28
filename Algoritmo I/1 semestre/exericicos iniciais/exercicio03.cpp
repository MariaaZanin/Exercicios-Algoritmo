
/*
Faça um algoritmo que leia três notas, calcule e mostre a média aritmética dessas notas.
*/

#include <iostream>
#include <cstdlib>

using namespace std;
main ()

{
    //dados
    float n1, n2, n3, media;
    //informacao
    cout<< "\n Informe o primeiro numero: ";
    cin>> n1;
    cout<< "\n Informe o segundo numero: ";
    cin>> n2;
    cout<< "\n Informe o terceiro numero: ";
    cin>> n3;
    //calculo
    media = (n1+n2+n3)/3;
    //resultado
    cout<< "\n O resultado da media aritmetica e: " << media;
    cout<< "\n\n\n";

    system ("pause");

}
