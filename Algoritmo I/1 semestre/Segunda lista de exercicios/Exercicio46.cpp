/*
 Criar um algoritmo que leia uma data( dia, m�s e ano separados) imprima se a
 data � v�lida ou n�o (Ano bissexto (Ano % 4 = = 0)
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
    cout<< "Informe o n�mero correspondente ao m�s: ";
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
        m2= "Mar�o";
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
        cout<< "N�mero invalido!";

    }

    cout<< "\n O dia �: "<<d1;
    cout<< "\n O n�mero � referente ao m�s: "<<m2;
    cout<< "\n O ano �: "<<a1;



    cout<< "\n\n";
    system("pause");
}



