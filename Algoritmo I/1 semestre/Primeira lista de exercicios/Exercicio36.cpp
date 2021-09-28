/*
Faça um algoritmo que receba três alturas e informe a altura que estiver na situação
de maior altura.
*/
#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
main ()
{
    setlocale (LC_ALL, "Portuguese");
    float n1,n2,n3;

    cout<< "Informe a primeira altura: ";
    cin>> n1;
    cout<< "Informe a segunda altura: ";
    cin>> n2;
    cout<< "Informe a terceira altura: ";
    cin>> n3;

    if (n1> n2 and  n1>n3)
    {
        cout<< "\n A maior altura é: " <<n1;
    }
    else
    {
        if (n2>n1 and n2>n3)
        {

            cout<<  "\n A maior altura é: "<<n2;
        }


    else
    {
            cout<< "\n A maior altura é: "<<n3;
    }
    }
    cout<<"\n\n\n";
        system ("pause");




}
