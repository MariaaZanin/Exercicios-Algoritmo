#include <iostream>
#include <windows.h>
#include <time.h>

#define TAM 10
int V[10];
int gera, igual;
using namespace std;
//declara fun��es
int funcGera();
int funcVerifica(int igual);
void funcConsultar(int num);
void funcOrdenar();

main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int i, n, num, aux;

    do
    {
        cout<< "\n ******MENU******";
        cout<< "\n (1) Gerar Vetor[10]";
        cout<< "\n (2) Consultar n�mero";
        cout<< "\n (3) Ordenar crescente";
        cout<< "\n (4) Sair.";
        cout<< "\n Informe a op��o escolhida: ";
        cin>> n;

        switch(n)
        {
        case 1:
            funcGera();

            cout<< "\n\n";
            break;

        case 2:
            cout<< "\n Informe um n�mero: ";
            cin>> num;
            funcConsultar(num);
            cout<< "\n\n";
            break;

        case 3:
            funcOrdenar();
            cout<< "\n\n";
            break;

        case 4:
            cout<< "\n Programa finalizado.\n\n";
            break;

        default:
            cout<< "\n Op��o inv�lida, tente novamente. \n";
            break;
        }

    }
    while(n!=4);

    cout<< "\n\n";
    system("pause");
}

int funcGera()
{
    int i;
    for(gera=0; gera<TAM; gera++)
    {
        V[gera] = rand()%15;
        igual = V[gera];
        if(gera>0)
        {
            funcVerifica(igual);
        }

    }
    cout<< "\n Os valores sorteados foram: ";

    for(i=0; i<TAM; i++)
    {

        cout<< "[" << V[i] << "] ";
    }
}

int funcVerifica(int igual)
{
    int i;
    for(i=0; i<gera; i++)
    {
        if(igual == V[i])
        {
            gera=gera-1;
            cout<< "\n O n�mero " << V[i] << " repetiu.";
            break;
        }
    }
}

void funcConsultar(int num)
{
    int i, aux=0;
    for(i=0; i<TAM; i++)
    {
        if(V[i]== num)
        {
            cout<< "\n O n�mero " << num << ", pertece ao vetor." ;
            aux=1;
        }
    }
    if(aux==0)
    {
        cout<< "\n O n�mero " << num << ", n�o pertece ao vetor.";
    }
}

void funcOrdenar()
{
    int i, aux, j;
    for(i=0; i<TAM; i++)
    {
        for(j=i+1; j<TAM; j++)
        {
            if(V[i]>V[j])
            {
                aux=V[i];
                V[i]=V[j];
                V[j]=aux;
            }
        }
    }
    for(i=0; i<TAM; i++)
    {
        cout<< " [" << V[i] << "] ";
    }
}

