/*
Fa�a um programa que receba dois n�meros, calcule e mostre a subtra��o do primeiro pelo segundo
*/

#include <iostream>
#include <cstdlib>

using namespace std;
main ()
{
    //dado
    float n1, n2, subt;
    //informacao
    cout<< "\n Informe o primeiro numero: ";
    cin>> n1;
    cout<< "\n Informe o segundo numero: ";
    cin>> n2;
    //calculo
    subt = n1 - n2;
    //resultado
    cout<< "\n O resultado da subtracao e: " << subt;
    cout<< "\n\n\n";
    system ("pause");


}


