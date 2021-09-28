/*
)Faça um programa que leia o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) A idade desta pessoa
b) Quantos anos ela terá em 2050.
*/
#include <iostream>
#include <cstdlib>
using namespace std;
main ()
{
    float nasc,r1, r2;

    cout<< "Informe o ano de seu nascimento: ";
    cin>> nasc;

    r1 = 2020 - nasc;
    r2 = 2050 - nasc;
    cout<< "\n Sua idade atual e: " <<r1;
    cout<< "\n Em 2050 tera: " << r2;
    cout<< "\n\n\n";
    system ("pause");

}


