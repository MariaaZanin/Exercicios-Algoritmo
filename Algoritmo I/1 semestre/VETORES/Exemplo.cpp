/*
 Escrever um algoritmo e um programa que leia 10 números e mostre soma e a média dos
números lidos.
*/
#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    float soma, media, sal[5];
    //posição dos vetores [0] [1] [2] [3] [4]
    soma=0;
    for (i=0; i <5; i++){
         cout<< "\n Informe "<< i << " salário: ";
         cin>> sal [i];

         soma=soma+sal[i];

    }

    for (i=4; i>=0; i--)
    {
    cout<< "\n o " << i << " salário: " << sal[i];
    }


    cout<< "\n Valor soma: "<< soma;
    media= soma/5;
    cout<< "\n A media entre os números é: "<< media;
    cout<< "\n\n";
    system("pause");
}
