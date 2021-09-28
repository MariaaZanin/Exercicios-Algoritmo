/*
Uma empresa irá dar um aumento de salário aos seus funcionários de acordo com a
categoria de cada empregado. O aumento seguirá a seguinte regra:
 A, C, F, e H ganharão 10 % de aumento sobre o salário
 B, D , E , I , J e T ganharão 15 % de aumento sobre o salário
 K e R ganharão 25 % de aumento sobre o salário
 L, M , N , O P e S ganharão 35 % de aumento sobre o salário
 U, V , X , Z e W ganharão 50 % de aumento sobre o salário
Faça o algoritmo que leia o nome, categoria e salário do empregado, e mostre o salário
reajustado
*/

#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    string n1, l1;
    float s1, r1;

    cout<< "Informe o seu nome: ";
    cin>> n1;
    cout<< "Informe a sua categoria: ";
    cin>> l1;
    cout<< "Informe o seu salário atual: ";
    cin>> s1;


    if (l1=="A" or l1=="C" or l1=="F" or l1=="H")
    {
        r1= s1 + s1 * (10/100);
        cout<< " O salário do empregado"<<n1<<" com 10% de aumento é: "<< r1;
    }
    else if (l1=="B" or l1=="D" or l1=="E" or l1=="I" or l1=="J" or l1=="T")
    {
        r1= s1+s1*(15/100);
        cout<< "O salário do empregado"<<n1<< "com 15% de aumento é: "<<r1;
    }
    else if (l1=="K" or l1=="R")
    {
        r1= s1+s1*(25/100);
        cout<< "O salário do empregado"<<n1<<"com 25% de aumento é: "<<r1;
    }
    else if (l1=="L" or l1=="M" or l1=="N" or l1=="O" or l1=="P" or l1=="S")
    {
        r1=s1+s1*(35/100);
        cout<< "O salário do empregado"<<n1<<"com 35% de aumento é: "<<r1;
    }
    if (l1=="U" or l1=="V" or l1=="X" or l1=="Z" or l1=="W")
    {
        r1=s1+s1*(50/100);
        cout<< "O salário do empregado"<<n1<<"com 50% de aumento é: "<<r1;
    }

    cout<< "\n\n";
    system("pause");

}
