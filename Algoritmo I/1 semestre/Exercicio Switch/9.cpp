/*
9 - Elabore um algoritmo que leia duas vari�veis dadas pelo usu�rio,
 em seguida apresente um menu para o usu�rio perguntando qual opera��o
  matem�tica ele deseja executar.

*/
#include <iostream>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, r1;
    int op;

    cout<< "Informe a primeira vari�vel: ";
    cin>> n1;
    cout<< "Informe a segunda vari�vel: ";
    cin>> n2;
    cout<< "Informe a opera��o matem�tica desejada (1 = soma, 2= subtra��o, 3 = multiplica��o e 4 = divis�o)";
    cin>> op;

    switch (op)
    {
    case 1:
        r1 = n1 + n2;
        cout<< " O resultado da soma �: " << r1;
        break;
    case 2:
        r1 = n1 - n2;
        cout<< " O resultado da subtra��o �: " << r1;
        break;
    case 3:
        r1 = n1 * n2;
        cout<< " O resultado da multiplica��o �: " << r1;
        break;
    case 4:
        r1 = n1 / n2;
        cout<< " O resultado da divis�o �: " << r1;
        break;
    default:
        cout<< "Opera��o inv�lida!";

    }
}
