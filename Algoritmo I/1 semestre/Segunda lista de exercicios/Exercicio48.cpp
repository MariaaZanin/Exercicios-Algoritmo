/*
Fa�a um algoritmo que leia um n�mero que represente um m�s do ano. Ap�s a leitura
escreva por extenso qual o m�s lido. Caso o n�mero digitado n�o esteja na faixa de
1..12 escreva uma mensagem informando o usu�rio do erro da digita��o.
*/

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    int mes;
    string mesext;

    cout<< "Informe um n�mero correspondente ao m�s do ano desejado: ";
    cin>> mes;
    switch (mes)
    {
    case 1:
        mesext= "Janeiro";
        break;
    case 2:
        mesext="Fevereiro";
        break;
    case 3:
        mesext="Mar�o";
        break;
    case 4:
        mesext="Abril";
        break;
    case 5:
        mesext="Maio";
        break;
    case 6:
        mesext="Junho";
        break;
    case 7:
        mesext="Julho";
        break;
    case 8:
        mesext="Agosto";
        break;
    case 9:
        mesext="Setembro";
        break;
    case 10:
        mesext="Outubro";
        break;
    case 11:
        mesext="Novembro";
        break;
     case 12:
        mesext="Dezembro";
        break;
     default:
        cout<< "N�mero invalido!";
    }

    cout<< "O n�mero referente ao m�s �: " <<mesext;
    cout<< "\n\n";
    system("Pause");
}


