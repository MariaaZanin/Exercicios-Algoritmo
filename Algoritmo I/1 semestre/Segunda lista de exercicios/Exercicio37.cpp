/*
Imprimir se um n�mero X � divis�vel por Y
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

    cout<< "Informe o primeiro n�mero: ";
    cin>> n1;
    cout<< "Informe o seundo n�mero: ";
    cin>> n2;

    d1= fmod(n1,n2);

    if (d1 > 0){
        cout<< "\n O n�mero n�o � divis�vel. ";

    }else
    {
        if (d1 == 0)
        cout<< "\n O n�mero � divis�vel. ";
    }
    cout<< "\n\n\n";
    system ("pause");



}
