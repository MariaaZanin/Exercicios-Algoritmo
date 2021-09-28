/*
Escrever um algoritmo e um programa que leia 5 números, A, B, C, D e E. Mostrar o
maior número e o menor número
*/

#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
main ()
{
    setlocale (LC_ALL, "Portuguese");
    float a,b,c,d,e,ma,me,mm;
    cout<< "Informe o primeiro número: ";
    cin>> a;
    cout<< "Informe o segundo número: ";
    cin>> b;
    cout<< "Informe o terceiro número: ";
    cin>> c;
    cout<< "Informe o quarto número: ";
    cin>> d;
    cout<< "Informe o quinto número: ";
    cin>> e;

    //maior
    ma  = a;
    if (b>ma)
        ma=b;
    if (c>ma)
        ma=c;
    if (d>ma)
        ma=d;
    if (e>ma)
        ma=e;

    //menor
    me = a;
    if (b<me)
        me= b;
    if (c<me)
        me = c;
    if (d<me)
        me = d;
    if (e<me)
        me = e;

    //mediano
    if (a<ma and a>me)
        mm=a;
    if (b<ma and b>me)
        mm=b;
    if (c<ma and c>me)
        mm=c;
    if (d<ma and d>me)
        mm=d;
    if (e<ma and e>me)
        mm=e;

    cout<< "\n O número maior é: "<<ma;
    cout<< "\n O número mediano é: "<<mm;
    cout<< "\n O número menor é: "<<me;


    cout<< "\n\n\n";
    system ("pause");
}

