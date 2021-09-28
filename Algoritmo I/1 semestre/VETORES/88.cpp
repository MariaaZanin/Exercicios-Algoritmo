/*
Escrever um algoritmo e um programa que leia um vetor B[50] de números
inteiros e o escreve. Encontrar o menor e o maior valor lido. Mostrar os valores
encontrados.
*/

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    int vetB[50];
    int i, ma=0, me=50;

    srand (time(NULL));
    for(i=0; i <50; i++){
        vetB[i] = rand()%100;
        cout<< "\n [" << i << "]:" << vetB[i];

        if(ma < vetB[i]){
            ma= vetB[i];
        }
        if (me>vetB[i]){
            me=vetB[i];
        }

    }
    cout<< "\n O maior número é: "<< ma;
    cout<< "\n O menor número é: "<< me;

    cout<< "\n\n";

}

