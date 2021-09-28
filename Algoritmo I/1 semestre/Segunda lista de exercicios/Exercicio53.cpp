#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;
main ()
{
    setlocale (LC_ALL, "Portuguese");

    float m1, a1, c1, c2, r1;

    cout<< "Informe o mês anterior: ";
    cin>> m1;
    cout<< "Informe o consumo de luz em KwH no mês anterior: ";
    cin>> c1;
    cout<< "Informe o mês atual: ";
    cin>> a1;
    cout<< "Informe o consumo de luz em KwH: ";
    cin>> c2;

    if (m1)
    if (c1>0 or c1<=70)
    {
        r1 = c1 * 0.9;
        cout<< "Informamos ao individuo que no mês anterios o valor a ser pago era: R$"<<r1;

    }
    else if (c1>71 or c1<=150)
    {
        r1 = c1 * 0.20;
        cout<< "Informamos ao individuo que no mês anterios o valor a ser pago era: R$"<<r1;

    }
    else if (c1>151 or c1<=200)
    {
        r1 = c1 * 0.23;
        cout<< "Informamos ao individuo que no mês anterios o valor a ser pago era: R$"<<r1;

    }
    else if (c1>201)
    {
        r1 = c1 * 0.26;
        cout<< "Informamos ao individuo que no mês anterios o valor a ser pago era: R$"<<r1;

    }
     if (c2>0 or c2<=70)
    {
        r1 = c2 * 0.9;
        cout<< "\n Informamos ao individuo que o valor a ser pago é: R$"<<r1;

    }
    else if (c2>71 or c2<=150)
    {
        r1 = c2 * 0.20;
        cout<< "\n Informamos ao individuo que o valor a ser pago é: R$"<<r1;

    }
    else if (c2>151 or c2<=200)
    {
        r1 = c2 * 0.23;
        cout<< "\n Informamos ao individuo que o valor a ser pago é: R$"<<r1;

    }
    else if (c2>201)
    {
        r1 = c1 * 0.26;
        cout<< "\n Informamos ao individuo que o valor a ser pago é: R$"<<r1;

    }


    cout<< "\n\n";
    system("pause");
}
