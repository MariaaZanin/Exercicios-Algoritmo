/*
 Escrever um algoritmo e um programa que leia 10 n�meros e mostre soma e a m�dia dos
n�meros lidos.
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
    //posi��o dos vetores [0] [1] [2] [3] [4]
    soma=0;
    for (i=0; i <5; i++){
         cout<< "\n Informe "<< i << " sal�rio: ";
         cin>> sal [i];

         soma=soma+sal[i];

    }

    for (i=4; i>=0; i--)
    {
    cout<< "\n o " << i << " sal�rio: " << sal[i];
    }


    cout<< "\n Valor soma: "<< soma;
    media= soma/5;
    cout<< "\n A media entre os n�meros �: "<< media;
    cout<< "\n\n";
    system("pause");
}
