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
            cout<< "� a primeira vogal.";
        }
        break;
    case 'E':
    case 'e':
        {
            cout<< "� a segunda vogal.";
        }
        break;
    case 'I':
    case 'i':
        if ("I" or "i")
        {
            cout<< "� a terceira vogal.";
        }
        break;
    case 'O':
    case 'o':
        if ("O" or "o")
        {
            cout<< "� a quarta vogal.";
        }
        break;
    case 'U':
    case 'u':

        {
            cout<< "� a quinta vogal.";
        }
        break;
    default:
        cout<< "� consoante";

    }

// utilizando o comando switch escreva um algoritmo, que receba uma letra qualquer e verifique se a letra informada � uma vogal ou consoante
}
