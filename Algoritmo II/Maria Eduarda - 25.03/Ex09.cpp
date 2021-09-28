#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

void leitura(float *ptempo);

main()
{
    float ptempo=1000;
    while(ptempo != 0)
    {
        cout<<"\n Informe o tempo(segundos) que percorreu (informe 0 para finalizar o programa): ";
        leitura(&ptempo);
        if(ptempo == 0)
        {
            break;
        }
        else
        {
            cout<<"\n O melhor tempo foi: "<< ptempo;
        }
    }

    cout<< "\n\n";
    system("Pause");
}

void leitura(float *ptempo)
{
    float aux;
    cin>>aux;
    if(aux < *ptempo)
    {
        *ptempo = aux;
    }
}
