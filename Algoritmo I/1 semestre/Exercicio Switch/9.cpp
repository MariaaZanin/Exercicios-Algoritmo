/*
9 - Elabore um algoritmo que leia duas variáveis dadas pelo usuário,
 em seguida apresente um menu para o usuário perguntando qual operação
  matemática ele deseja executar.

*/
#include <iostream>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, r1;
    int op;

    cout<< "Informe a primeira variável: ";
    cin>> n1;
    cout<< "Informe a segunda variável: ";
    cin>> n2;
    cout<< "Informe a operação matemática desejada (1 = soma, 2= subtração, 3 = multiplicação e 4 = divisão)";
    cin>> op;

    switch (op)
    {
    case 1:
        r1 = n1 + n2;
        cout<< " O resultado da soma é: " << r1;
        break;
    case 2:
        r1 = n1 - n2;
        cout<< " O resultado da subtração é: " << r1;
        break;
    case 3:
        r1 = n1 * n2;
        cout<< " O resultado da multiplicação é: " << r1;
        break;
    case 4:
        r1 = n1 / n2;
        cout<< " O resultado da divisão é: " << r1;
        break;
    default:
        cout<< "Operação inválida!";

    }
}
