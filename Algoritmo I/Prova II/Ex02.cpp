#include <iostream>
#include <windows.h>
#include <time.h>

#define TAM 6
using namespace std;

main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int M[TAM][TAM];
    int menor, l, c, a;
    int VP[18], VI[18];

    for(l=0; l<TAM; l++)
    {
        for(c=0; c<TAM; c++)
        {
            M[l][c]= rand()%20;
        }
    }


    cout<< "\n \t\t GERANDO MATRIZ: \n";
    cout<< "\n\n";
    for(l=0; l<TAM; l++)
    {
        for(c=0; c<TAM; c++)
        {
            cout<< M[l][c] << "\t ";
        }
        cout<< "\n\n";
    }

    cout<< "\n\n \t GERANDO MATRIZ MODIFICADA: \n\n";

    for(l=0; l<1; l++)
    {
        menor = M[l][0];
        for (c=0; c<TAM; c++)
        {
            if(M[l][c]<menor)
            {
                menor= M[l][c];
            }
        }
        for(a=0; a<TAM; a++)
        {
            M[l][a]= M[l][a] * menor;
        }
    }

    for(l=1; l<2; l++)
    {
        menor = M[l][0];
        for (c=0; c<TAM; c++)
        {
            if(M[l][c]<menor)
            {
                menor = M[l][c];
            }
        }
        for(a=0; a<TAM; a++)
        {
            M[l][a]= M[l][a] * menor;
        }
    }

    for(l=2; l<3; l++)
    {
        menor = M[l][0];
        for (c=0; c<TAM; c++)
        {
            if(M[l][c]<menor)
            {
                menor = M[l][c];
            }
        }
        for(a=0; a<TAM; a++)
        {
            M[l][a]= M[l][a] * menor;
        }
    }

    for(l=3; l<4; l++)
    {
        menor = M[l][0];
        for (c=0; c<TAM; c++)
        {
            if(M[l][c]<menor)
            {
                menor = M[l][c];
            }
        }
        for(a=0; a<TAM; a++)
        {
            M[l][a]= M[l][a] * menor;
        }
    }

    for(l=4; l<5; l++)
    {
        menor = M[l][0];
        for (c=0; c<TAM; c++)
        {
            if(M[l][c]<menor)
            {
                menor = M[l][c];
            }
        }
        for(a=0; a<TAM; a++)
        {
            M[l][a]= M[l][a] * menor;
        }
    }


    for(l=5; l<6; l++)
    {
        menor = M[l][0];
        for (c=0; c<TAM; c++)
        {
            if(M[l][c]<menor)
            {
                menor = M[l][c];
            }
        }
        for(a=0; a<TAM; a++)
        {
            M[l][a]= M[l][a] * menor;
        }
    }

    for(l=0; l<TAM; l++)
    {
        for(c=0; c<TAM; c++)
        {
            cout<< M[l][c] << "\t";
        }
        cout<< "\n\n";
    }


    cout<< "\n Vetor PAR:";
    cout<< "\n Os números que estão nas colunas pares são: ";
    for(l=0; l<TAM; l++)
    {
        for(c=0; c<TAM; c++)
        {
            if(c% 2 == 0)
            {
                VP[l] = M[l][c];
                cout<< " [" << VP[l] << "] " ;
            }
        }
    }

    cout<< "\n\n Vetor ÍMPAR: ";
    cout<< "\n Os números que estão nas colunas ímpares são: ";
    for(l=0; l<TAM; l++)
    {
        for(c=0; c<TAM; c++)
        {
            if(c % 2 == 1)
            {
                VI[l] = M[l][c];
                cout<< " [" << VI[l] << "] ";
            }
        }
    }

    cout<< "\n\n";
    system("pause");
}


