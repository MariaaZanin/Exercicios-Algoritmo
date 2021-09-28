/*
) Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10 %
*/

#include <iostream>
#include <cstdlib>
using namespace std;
main ()

{
    //dado
    float n1, nov, aa;
    //informacao
    cout<< "\n Informe o preco do produto: ";
    cin>> n1;
    //calculo
    nov = (n1*10)/100;
    aa = n1 - nov;

    //resultado
    cout<< "\n O preco do produto era: " << n1;

    cout<< "\n O preco com o desconto e: " << aa;
    cout<< "\n\n\n";
    system ("pause");



}
