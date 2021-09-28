/*
Imprimir se um número X é divisível por Y
*/

#include <iostream>
#include<cstdlib>
#include <locale.h>
#include <cmath>
using namespace std;
main()
{
    setlocale (LC_ALL,"Portuguese");
    float n1,n2, d1;

    cout<< "Informe o primeiro número: ";
    cin>> n1;
    cout<< "Informe o seundo número: ";
    cin>> n2;

    d1= fmod(n1,n2);

    if (d1 > 0){
        cout<< "\n O número não é divisível. ";

    }else
    {
        if (d1 == 0)
        cout<< "\n O número é divisível. ";
    }
    cout<< "\n\n\n";
    system ("pause");



}
