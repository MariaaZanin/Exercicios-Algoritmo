#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>

using namespace std;
void gerar (int *pvet);
void teste(int *pvet, int valor);
main()
{
    setlocale(LC_ALL,"Portuguese");

    int vet[10];
    int *pvet;
    int valor, aux=0;
    pvet = vet;
    srand(time(NULL));

    gerar(pvet);
    /*for(int i=0;i<10;i++){
        cout<< pvet[i] << "\t";
        cout<< &pvet[i] << "\n";
    }*/

    cout<< "\n Informe um valor: ";
    cin>> valor;

    teste(pvet, valor);

    cout<< "\n\n";
    system("pause");
}

void gerar(int *pvet)
{
    for(int i = 0; i < 10; i++)
    {
        pvet[i] = rand() %50;

    }
}

void teste(int *pvet, int valor){
    int aux;
    aux=0;
for(int i=0; i<10; i++)
    {
        if(valor == pvet[i])
        {
            cout<< "\n O valor é: "<< pvet[i];
            cout<< "\n E o endereço é: " << &pvet[i];
            aux++;
        }
    }

    if(aux == 0 )
    {
        cout<< "\n Esse valor não existe no vetor";
    }
    }
