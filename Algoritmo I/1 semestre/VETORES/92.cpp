/*
92 Escrever um algoritmo e um programa que leia um vetor V[30] e o escreve. Contar
quantos valores do vetor s�o pares e quantos s�o �mpares. Mostrar estas
informa��es, juntamente com a m�dia dos valores do vetor.
*/

#include <iostream>
#include <locale>
#include <cstdlib>

#define TAM 30
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    int vet[TAM];
    int i, impar=0, par=0;
    float media=0;

    srand (time(NULL));
    for(i=0; i < TAM; i++){
       vet[i] = rand()%TAM;
    cout<< "\n [" << i << "] : " << vet[i];

    media= media+ vet[i];
    }
    for (i=0; i< TAM; i++){
        if(vet[i]%2 == 0){
            cout<< "\n � par o n�mero: " << vet[i];
            par++;
        } else
        cout<< "\n � impar o n�mero: " << vet[i];
        impar++;
    }
    cout<< "\n Com o total de par = "<< par << " e de impar = "<< impar;


}
