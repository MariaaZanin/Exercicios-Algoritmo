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

    srand(time(NULL)); //para gerar numeros diferentes

    int i;
    float n, media=0, r1;

    for (i=1; i <=10; i++){
         n = rand() % 100;
         cout<< "\n O numero sorteado foi " << n;
         media= n+media;
    }
    r1= media/10;
    cout<< "\n A media entre os n�meros �: "<< r1;
    cout<< "\n\n";
    system("pause");
}
