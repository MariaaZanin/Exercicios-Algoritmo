/*
Escrever um algoritmo que leia um vetor de 80 posi��es. Encontrar o maior valor
do vetor e sua posi��o; mostr�-lo juntamente com sua posi��o.
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
    cout<< "\n O maior n�mero se encontra na posi��o ["<< maior << "] = "<< ma;
}
