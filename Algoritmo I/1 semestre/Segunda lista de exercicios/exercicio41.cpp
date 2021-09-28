/*
Um vendedor de um plano de saúde apresentou a tabela a seguir.
Crie um algoritmo que entre com o nome da pessoa e a idade, mostrar o nome e o valor que
ela deverá pagar:
*/

#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    float nn, id;

    cout<< "Informe seu nome: ";
    cin>> nn;
    cout<< "Informe a sua idade: ";
    cin>> id;

    if (id <= 10)
    {
        cout<< "\n Informamos que"<<nn<<", deverá pagar R$30,00";
    }
    if (id>11 and id==29)
    {
        cout<< "\n Informamos que "<<nn<<", deverá pagar R$60,00";

    }
    if (id>30 and id==45)
    {
        cout<< "\n Informamos que "<<nn<<", deverá pagar R$120,00";
    }
    if (id>31 and id==59)
    {
        cout<< "\n Informamos que "<<nn<<", deverá pagar R$150,00";
    }
    if (id>60 and id==65)
    {
        cout<< "\n Informamos que "<<nn<<", deverá pagar R$250,00";
    }
    if (id>66)
    {
        cout<< "\n Informamos que "<<nn<<", deverá pagar R$400,00";
    }


    cout<< "\n\n";
    system("pause");
}


