#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;
main()
{
    setlocale (LC_ALL, "Portuguese");
    int x, i, soma=0;

    cout<< "Informe um n�mero entre 1 e 200: ";
    cin>>x;

    //N�mero divisivel por 3
    for(i=0; i<x+1; i++)
    {
        if(i > 0)
        {
            if(i % 3 == 0)
            {
                cout<< "\n O  n�mero " << i << " � divis�vel por 3 ";
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

    cout<< "\n\n A soma dos n�meros �mpares � de: "<< soma;

    //mostrar n�meros pares

    cout<< "\n\n Os n�meros pares s�o: ";
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
