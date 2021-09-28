/*
Um funcionário recebe um salário fixo mais 4 % de comissão sobre as vendas. Faça um programa
que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
salário final.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
main ()
{
    //dado
    float fixo, venda, finish;
    //informacao
    cout<< "Informe o salario fixo do funcionario: ";
    cin>> fixo;
    cout<< "Informe o valor de vendas do funcionario: ";
    cin>> venda;
    //calculo
    finish = ((venda*4)/100) + fixo;
    //resultado
    cout<< "\n O salario final do funcionario e: "<< finish;
    cout<< "\n\n\n";
    system ("pause");





}
