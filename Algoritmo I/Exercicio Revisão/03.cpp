/*
Escrever um algoritmo que l� 3 valores a,b,c. Por meio da formula apresentada a
baixo encontre o maior destes 3 valores e o escreva com a mesagem � � O
MAIOR�.
*/
#include <iostream>
#include <cstdlib>
#include <locale>
#include <math.h>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3;

    cout<< "Informe um n�mero: ";
    cin>>n1;
    cout<< "Informe um n�mero: ";
    cin>>n2;
    cout<< "Informe um n�mero: ";
    cin>>n3;

    if (n1>n2 and n1>n3){
        cout<< "\n O maior n�mero �: "<<n1;
    } else
    if (n2>n1 and n2>n3){
        cout<< "\n O maior n�mero �: "<<n2;
    } else
    cout<< "\n O maior n�mero �: " <<n3;

    cout<< "\n\n";
    system("pause");
}

