/*
Faça um programa que receba o salário de um funcionário chamado Carlos. Sabe-se
que outro funcionário chamado João, tem salário equivalente a um terço do salário de
Carlos. Carlos aplicará seu salário integralmente na caderneta de poupança, que está
rendendo 2 % ao mês, e João aplicará seu salário integralmente no fundo de renda
fixa, que está rendendo 5% ao mês. O programa deverá calcular e mostrar a
quantidade de meses necessários para que o valor pertencente a João iguale ou
ultrapasse o valor pertencente a Carlos.
*/
#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");

    float salc, salj;
    int mes = 0;
    cout<< "Informe o salário do Carlos: ";
    cin>>salc;
    salj=salc/3;
    cout<<fixed<<setprecision(2);
    while (salc>salj)
    {
        mes++;
        salc= salc+(salc*0.02);
        salj= salj+(salj*0.05);
    }
    cout<<mes<< " meses, para João ter "<< salj << " e carlos : "<< salc;



}
