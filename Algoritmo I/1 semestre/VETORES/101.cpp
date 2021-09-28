#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <locale>

#define TAM 30
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    int v[TAM];
    int i, j, aux, k, x;

    cout<< "\n Vetor v[20]: \n";
    for(i=0; i<20; i++)
    {
        v[i]= (rand()%100)+1;
        cout<< "\t v["<< v[i] << "]";
    }

    for(i=0; i<19; i++)
    {
        for(j=i+1; j<20; j++)
        {
            if(v[j]<v[i])
            {
                aux= v[i];
                v[i]=v[j];
                v[j]=aux;
            }

        }
    }

    cout<< "\n Vetor v[20] ORDENADO: \n";
    for(i=0; i<20; i++)
    {
        cout<< "\t v["<< v[i] << "]";
    }


    for(i=1; i<10; i++)
    {
        cout<< "\n Informe um valor " << i << ": " ;
        cin>> aux;

        //achar posição para inserir
        for(j=0; j<19+i; j++)
        {
            // ele compara com o maior numero e vai jogando pro lado ate se encaixar
            if(aux <= v[j])
            {
                for(k=19+i; k>j; k--)
                {
                    v[k] = v[k-1];
                }
                v[j]=aux;
                break;
            }

        }

    }
    cout<< "\n Vetor V[30]: ORDENADO \n";
    for(x=0; x<28; x++)
    {
        cout<< "\n V [" << x << "] [" << v[x] << "]" ;
    }

}
