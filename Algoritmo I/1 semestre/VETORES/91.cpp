/*
Escrever um algoritmo que leia um vetor de 80 posições. Encontrar o maior valor
do vetor e sua posição; mostrá-lo juntamente com sua posição.
*/

#include <iostream>
#include <locale>
#include <cstdlib>

#define TAM 80
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    int vet[TAM];
    int i, ma=0, maior=0;


    srand (time(NULL));
    for(i=0; i<TAM; i++){
        vet[i] = rand()%TAM;
        cout<< "\n ["<< i << "] :" << vet[i];


        if(vet[i]> ma){
            ma= vet[i];
            maior= i;
        }
    }
    cout<< "\n O maior número se encontra na posição ["<< maior << "] = "<< ma;
}
