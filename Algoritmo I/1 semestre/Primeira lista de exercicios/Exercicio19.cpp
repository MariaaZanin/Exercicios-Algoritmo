/*
Pedrinho tem um cofrinho com muitas moedas e deseja saber quantos reais conseguiu poupar.
Faça um algoritmo para ler a quantidade de cada tipo de moeda e mostre o valor total economizado
em reais.
Considere que existam moedas de 1, 5, 10, 25 e 50 centavos e ainda moeda de 1 real. Não avendo
moeda de um destes tipos a quantidade respectiva é zero.
*/
#include <iostream>
#include <cstdlib>
using namespace std;
main ()
{
    float n1,n2,n3,n4,n5, n6,r1,r2,r3,r4,r5,r6, total;
    cout<< "Informe a quantidade de moeda de 1 centavo: ";
    cin>> n1;
    cout<< "Informe a quantidade de moeda de 5 centavos: ";
    cin>> n2;
    cout<< "Informe a quantidade de moeda de 10 centavos: ";
    cin>> n3;
    cout<< "Informe a quantidade de moeda de 25 centavos: ";
    cin>> n4;
    cout<< "Informe a quantidade de moeda de 50 centavos: ";
    cin>> n5;
    cout<< "Informe a quantidade de moeda de 1 real: ";
    cin>> n6;
    //calculo
    r1 = n1*0.01;
    r2 = n2*0.05;
    r3= n3*0.10;
    r4= n4*0.25;
    r5=n5*0.50;
    r6 =n6*1;
    total = r1+r2+r3+r4+r5+r6;
    cout<< "\n O valor de moedas encontrado e: " <<total;
    cout<< "\n\n\n";
    system ("pause");


}


