/*
Faça um programa que receba dois números diferentes e mostre o maior
*/

#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
main ()
{
    setlocale(LC_ALL,"Portuguese");

    float n1, n2;

    cout<< "Informe o primeiro número: ";
    cin>> n1;
    cout<< "Informe o segundo número: ";
    cin>> n2;

    if (n1>n2){
        cout<< "\n O maior numero e: "<<n1;

    }else
    {
        cout<< "\n O maior numero e: "<< n2;
    }
    cout<< "\n\n\n";
    system ("pause");


}
