/*
Escrever um algoritmo e um programa que efetue a leitura de tr�s valores (vari�veis
A, B e C) e apresente os valores dispostos em ordem crescente
*/
#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;
main ()
{
    setlocale (LC_ALL, "Portuguese");
    float a, b, c, ma, me,mm;

    cout<< "Informe o primeiro n�mero: ";
    cin>> a;
    cout<< "Informe o segundo n�mero: ";
    cin>> b;
    cout<< "Informe o terceiro n�mero: ";
    cin>> c;

    //maior numero
    ma=a;
    if (b>ma)
        ma=b;
    if (c>ma)
        ma=c;

    //menor numero
    me=a;
    if (b<me)
        me=b;
    if (c<me)
        me=c;

    // medio numero

    if (a<ma and a>me)
        mm=a;
    if (b<ma and b>me)
        mm=b;
    if (c<ma and c>me)
        mm=c;

    // resultado
    cout<< "\n Os n�meros em ordem crescente s�o "<<me<< "," <<mm<< "," <<ma<<".";

    //outro tipo de resultado
    cout<< "\n O menor numero �: "<< me;
    cout<< "\n O n�mero mediano �: "<< mm;
    cout<< "\n O maior n�mero �: "<<ma;
    cout<< "\n\n";
    system ("pause");

}
