/*
)Suponha que um caixa eletrônico disponha apenas de notas de 1, 2,5,10,20,50 e 100 reais .
Considerando que alguém está sacando um determinado valor, escreva um algoritmo que mostre a
quantidade de cada tipo de notas que o caixa deve fornecer. Suponha que o sistema monetário não
utilize centavos
*/
#include <iostream>
#include <cstdlib>
using namespace std;
main ()
{
    int m1,m2,m5,m10,m20,m50,m100, saque, resto;

    cout<< "Informe o valor do saque: ";
    cin>> saque;

    m100=saque/100;
    resto=saque%100;
    m50=resto/50;
    resto=resto%50;
    m20=resto/20;
    resto=resto%20;
    m10=resto/10;
    resto=resto%10;
    m5=resto/5;
    resto=resto%5;
    m2=resto/2;
    resto=resto%2;
    m1=resto;

    cout<< "\n Numero de cedulas: ";
    cout<< "\n Cedulas de 100: " <<m100;
    cout<< "\n Cedulas de 50: " <<m50;
    cout<< "\n Cedulas de 20: " <<m20;
    cout<< "\n Cedulas de 10: " <<m10;
    cout<< "\n Cedulas de 5: " <<m5;
    cout<< "\n Cedulas de 2: " <<m2;
    cout<< "\n Cedulas de 1: " <<m1;
    cout<< "\n\n\n";
    system ("pause");






}

