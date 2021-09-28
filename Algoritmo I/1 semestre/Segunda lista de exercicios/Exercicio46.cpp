/*
 Criar um algoritmo que leia uma data( dia, mês e ano separados) imprima se a
 data é válida ou não (Ano bissexto (Ano % 4 = = 0)
 */

#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    int d1,a1,m1;
    string m2;

    cout<< "Informe o ano: ";
    cin>> a1;
    cout<< "Informe o número correspondente ao mês: ";
    cin>> m1;
    cout<< "Informe o dia: ";
    cin>>d1;

    switch (m1)
    {
    case 1:
        m2= "Janeiro";
        break;
    case 2:
        m2= "Fevereiro";
        break;
    case 3:
        m2= "Março";
        break;
    case 4:
        m2= "Abril";
        break;
    case 5:
        m2= "Maio";
        break;
    case 6:
        m2= "Junho";
        break;
    case 7:
        m2= "Julho";
        break;
    case 8:
        m2= "Agosto";
        break;
    case 9:
        m2= "Setembro";
        break;
    case 10:
        m2= "Outubro";
        break;
    case 11:
        m2= "Novembro";
        break;
    case 12:
        m2="Dezembro";
        break;
    default:
        cout<< "Número invalido!";

    }

    cout<< "\n O dia é: "<<d1;
    cout<< "\n O número é referente ao mês: "<<m2;
    cout<< "\n O ano é: "<<a1;



    cout<< "\n\n";
    system("pause");
}



