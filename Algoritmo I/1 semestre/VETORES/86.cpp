/*
Escrever um algoritmo que l� um vetor V[10] e o escreve. Conte, a seguir,
quantos valores de V s�o negativos e escreva a informa��o.
*/
#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    int vet [10];
    int i, neg=0;

    for (i=0;i<10; i++){
        cout<< "\n Informe o " << i << "� n�mero: ";
        cin>>vet[i];

        if(vet[i] < 0 ){
            neg++;
        }


    }

    cout<< "\n Apenas " << neg << " n�meros s�o negativos.";
}
