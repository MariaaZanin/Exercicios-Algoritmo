/*
71) Escrever um algoritmo e um programa que leia 10 n�meros e mostre o menor e o maior.
*/
#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL)); //para gerar numeros diferentes

    int i, n;
    float ma=0, me=0;

    for(i=1; i <=10; i++)
    {
        n= rand() % 100; //sorteia os numeros at� o limite desejado, no caso aqui � = 100
        cout<< "\n O n�mero sorteado �: " << n;

        ma=n;
        if (ma>n){
            ma=n;
        }

        me=n;
       if (me<n){
            me=n;
        }
    }
    cout<< "\n O menor n�mero �: "<< me;
    cout<< "\n O maior n�mero �: "<< ma;

    cout<< "\n\n";
    system("pause");
}

