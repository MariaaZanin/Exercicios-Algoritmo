/*
Um funcion�rio recebe um sal�rio fixo mais 4 % de comiss�o sobre as vendas. Fa�a um programa
que receba o sal�rio fixo do funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e seu
sal�rio final.
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
