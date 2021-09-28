/*
)Crie um algoritmo que leia um valor de um depósito e o valor da taxa de juros. Calcule e imprima o
valor do rendimento e o valor total após o rendimento
*/
#include <iostream>
#include <cstdlib>
using namespace std;
main ()
{
    float depos, j1, r1, r2;

    cout<< "Informe valor do deposito: ";
    cin>> depos;
    cout<< "Informe a taxa de juros: ";
    cin>> j1;

    r1 = (depos * j1)/100;
    r2 = r1+depos;

    cout<< "\n O valor do rendimento e: " <<r1;
    cout<< "\n O valor total do rendimento e: "<< r2;
    cout<< "\n\n\n";
    system ("pause");



}



