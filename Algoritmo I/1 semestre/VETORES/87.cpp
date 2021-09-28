
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
main ()
{
    int vet [10];
    int i, x, cont;
    char resp;

    srand (time(NULL));

    for(i=0; i <10; i++)
    {
        vet[i] = rand()%20;
        cout<< "\n [" << i << "]:" << vet[i];
    }

    do{


    cout<< "\n Informe valor para variavel X: ";
    cin>>x;

    cont=0;

    for(i=0; i<10; i++)
    {
        if (x == vet[i])
        {
            cont++;
        }
    }

    if(cont==0)
    {
        cout<< "\n Não existe " << x << " no vetor";
    }else
    cout<< "\n O valor "<< x << " aparece "<< cont << " vezes no vetor";

    cout<< "\n Deseja consultar outro numero S/N?";
    cin>>resp;
    resp= toupper(resp); //deixa a letra maiuscula
    }while (resp=='S');
    cout<< "\n\n";
    //main(); usa isso pra repetir e n precisar abrir e fecha dnv
}
