/*
0 Escrever um algoritmo e um programa que leia um vetor A[100] de n�meros
inteiros. Mostrar o vetor lido.
Ler um n�mero inteiro e multiplicar todo o vetor pelo n�mero lido.
Mostrar o vetor modificado.
*/

#include <iostream>
#include <cstdlib>
#include <locale>


#define TAM 100
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    int vetA[TAM], vetB[TAM];
    int i, n;

    srand (time(NULL));
    for(i=0; i<TAM; i++){
        vetA[i] = rand()%100;
        cout<< "\n [" << i << "]:" << vetA[i];
    }
    cout<< "\n\n Informe um n�mero inteiro: ";
    cin>> n;
    for(i=0; i<TAM; i++){
        vetB[i] = vetA[i] * n;
        cout<< "\n O n�mero " << vetA[i] <<" x " << n << " = "<< vetB[i];
    }
}
