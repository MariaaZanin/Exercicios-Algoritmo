/*
Sabendo-se que 100 quilowatts de energia custa um sétimo do salário mínimo, fazer um algoritmo
que receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência. calcule
e mostre:
a) o valor em reais de cada quilowatt
b) o valor em reais a ser pago
c) o novo valor a ser pago por essa residência com um desconto de 10 %.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
main ()
{
    float sal_min,q_gast, cust_q, deve,n1, novo;

    cout<< "Informe o salario minimo: ";
    cin>> sal_min;
    cout<< "Informe a quantidade de kw gasta: ";
    cin>> q_gast;
    //cqlculo
    cust_q = (sal_min* 1/7)/100;
    deve = cust_q*q_gast;
    n1 = (deve*10)/100;
    novo = deve - n1;

    cout<< "\n O valor de cada quilowatt e: "<< cust_q;
    cout<< "\n O valor em reais a ser pago e: "<< deve;
    cout<< "\n O valor a ser pago com o desconto e: " <<novo;
    cout<< "\n\n\n";
    system("pause");

}

