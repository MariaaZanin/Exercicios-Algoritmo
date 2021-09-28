/*
Faça um programa que receba o peso de uma pessoa, calcule e mostre.
a) O novo peso, se a pessoa engordar 15 % sobre o peso digitado
b) O novo peso, se a pessoa emagrecer 20 % sobre o peso digitado
*/
#include <iostream>
#include <cstdlib>
using namespace std;
main ()
{
    //dado
    float p1, engord, emagrec, em1;
    //informacao
    cout<< "Informe o seu peso: ";
    cin>> p1;
    //calculo
    engord = ((p1*15)/100) + p1 ;
    em1 = ((p1*20)/100);
    emagrec = p1 - em1;
    //resultado
    cout<< "\n O peso da pessoa que engordou e: " << engord;
    cout<< "\n O peso da pessoa que emagreceu e: " << emagrec;
    cout<< "\n\n\n";
    system ("pause");

}
