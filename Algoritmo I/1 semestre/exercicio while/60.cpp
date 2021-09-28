/*
Fa�a um programa que receba o sal�rio de um funcion�rio chamado Carlos. Sabe-se
que outro funcion�rio chamado Jo�o, tem sal�rio equivalente a um ter�o do sal�rio de
Carlos. Carlos aplicar� seu sal�rio integralmente na caderneta de poupan�a, que est�
rendendo 2 % ao m�s, e Jo�o aplicar� seu sal�rio integralmente no fundo de renda
fixa, que est� rendendo 5% ao m�s. O programa dever� calcular e mostrar a
quantidade de meses necess�rios para que o valor pertencente a Jo�o iguale ou
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
    cout<< "Informe o sal�rio do Carlos: ";
    cin>>salc;
    salj=salc/3;
    cout<<fixed<<setprecision(2);
    while (salc>salj)
    {
        mes++;
        salc= salc+(salc*0.02);
        salj= salj+(salj*0.05);
    }
    cout<<mes<< " meses, para Jo�o ter "<< salj << " e carlos : "<< salc;



}
