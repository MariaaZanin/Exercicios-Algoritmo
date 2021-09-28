#include <iostream>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    char l1;

    cout<< "Informe a letra:";
    cin>> l1;

    switch (l1)
    {
    case 'A':
    case 'a':

        {
            cout<< "É a primeira vogal.";
        }
        break;
    case 'E':
    case 'e':
        {
            cout<< "É a segunda vogal.";
        }
        break;
    case 'I':
    case 'i':
        if ("I" or "i")
        {
            cout<< "É a terceira vogal.";
        }
        break;
    case 'O':
    case 'o':
        if ("O" or "o")
        {
            cout<< "É a quarta vogal.";
        }
        break;
    case 'U':
    case 'u':

        {
            cout<< "É a quinta vogal.";
        }
        break;
    default:
        cout<< "É consoante";

    }

// utilizando o comando switch escreva um algoritmo, que receba uma letra qualquer e verifique se a letra informada é uma vogal ou consoante
}
