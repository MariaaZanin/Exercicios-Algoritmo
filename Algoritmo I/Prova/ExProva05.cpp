#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;
main()
{
    setlocale (LC_ALL, "Portuguese");
    int x, i, soma=0;

    cout<< "Informe um número entre 1 e 200: ";
    cin>>x;

    //Número divisivel por 3
    for(i=0; i<x+1; i++)
    {
        if(i > 0)
        {
            if(i % 3 == 0)
            {
                cout<< "\n O  número " << i << " é divisível por 3 ";
            }
        }
    }

    //soma dos numeros impares

    for(i=0; i<x+1; i++)
    {
        if(i > 0)
        {
            if(i % 2 == 1)
            {
                soma= soma+i;
            }
        }
    }

    cout<< "\n\n A soma dos números ímpares é de: "<< soma;

    //mostrar números pares

    cout<< "\n\n Os números pares são: ";
    for(i=0; i<x+1; i++)
    {
        if(i==0)
        {
            cout<< i;
        }
        if(i > 0)
        {

            if(i % 2 == 0)
            {
                cout<< " " <<i;
            }
        }
    }

    cout<< "\n\n";
    system("pause");
}
