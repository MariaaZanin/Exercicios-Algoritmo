#include <iostream>
#include <locale>
using namespace std;

#define TAM 10
main ()
{
    setlocale (LC_ALL, "Portuguese");

    int i, num, maior, menor;

    for (i=1; i <= TAM; i++)
    {
        cout<< "\n Informe " << i << " n�mero: ";
        cin>> num;

        if(i == 1)
        {
            maior = num;
            menor = num;
        }
        else
        {
            if (num > maior)
            {
                maior = num;
            }
            if (num < menor)
            {
                menor=num;
            }
        }

    }

    cout<< "\n O maior n�mero �: "<< maior;

    cout<< "\n O menor n�mero �: "<< menor;

    cout<< "\n\n";
}


