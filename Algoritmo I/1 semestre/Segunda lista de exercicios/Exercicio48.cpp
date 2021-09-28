/*
Faça um algoritmo que leia um número que represente um mês do ano. Após a leitura
escreva por extenso qual o mês lido. Caso o número digitado não esteja na faixa de
1..12 escreva uma mensagem informando o usuário do erro da digitação.
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

    cout<< "Informe um número correspondente ao mês do ano desejado: ";
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
        mesext="Março";
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
        cout<< "Número invalido!";
    }

    cout<< "O número referente ao mês é: " <<mesext;
    cout<< "\n\n";
    system("Pause");
}


