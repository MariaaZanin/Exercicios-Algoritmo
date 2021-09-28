#include <iostream>
#include <locale>
using namespace std;
main ()
{
    setlocale (LC_ALL, "Portuguese");

    int num, i, contdiv;

    cout<< "\n Informe um número: ";
    cin>> num;

    contdiv=0;
    for (i=1 ; i<=num; i++)
    {
        if (num % i == 0)
        {
            contdiv= contdiv+1;
            cout<< "\n "<< i;
        }

    }
    if (contdiv == 2){
        cout<< "\n O número é primo";
    } else
    cout<< "\n O número NÃO é primo";
}
