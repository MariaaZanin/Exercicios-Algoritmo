#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<locale>

using namespace std;

int GeraVet(int vet[]);
int contrario(int vet[]);
float media(int vet[]);
int MaiorMenor(int vet[]);
void Ordenar(int vet[]);

main()
{
    setlocale(LC_ALL, "Portuguese");

    int aux=0, menu;
    int vet[10];

    do
    {
        cout<< "\n";
        cout<< "******* MENU *******" << endl;
        cout<< "0 - Gerar Vetor" << endl;
        cout<< "1 - Trocar a ordem" << endl;
        cout<< "2 - Média do vetor" << endl;
        cout<< "3 - Maior e menor número" << endl;
        cout<< "4 - Ordem crescente " << endl;
        cout<< "5 - Sair"<< endl;
        cout<< "\n Sua escolha: ";
        cin>> menu;
        fflush(stdin);

        switch(menu)
        {
        case 0:
            system("cls");
            GeraVet(vet);
            cout<< "\n";
            aux = 1;
            break;
        case 1:
            system("cls");
            if(aux == 0)
            {
                cout << "\n É necessário gerar a matriz primeiro.";
            }
            else
            {
                contrario(vet);
            }
            cout<< "\n";
            break;
        case 2:
            system("cls");
            if(aux == 0)
            {
                cout << "\n É necessário gerar a matriz primeiro.";
            }
            else
            {
                media(vet);
            }
            cout<< "\n";
            break;
        case 3:
            system("cls");
            if(aux == 0)
            {
                cout << "\n É necessário gerar a matriz primeiro.";
            }
            else
            {
                MaiorMenor(vet);
            }
            cout<< "\n";
            break;
        case 4:
            system("cls");
            if(aux == 0)
            {
                cout << "\n É necessário gerar a matriz primeiro.";
            }
            else
            {
                Ordenar(vet);
            }

            cout<< "\n";
            break;
        case 5:
            system("cls");
            cout << "PROGRAMA FINALIZADO";
            getchar();
            break;
        default:
            cout<< "\n Opção inválida.";
            getchar();
            system("cls");
            break;
        }

    }
    while(menu != 5);

}

int GeraVet(int vet[])
{
    int i;
    srand (time(NULL));
    cout<< " Vetor gerado: " << endl;
    for(i=0; i <10; i++)
    {
        vet[i] = rand()%50;
        cout<< " [" << i << "]:" << vet[i];
    }
    cout<< "\n\n";
}

int contrario(int vet[])
{
    int vet2[10];
    int i, j;

    for(i=0; i< 10; i++)
    {
        vet2[i] = vet[i];
    }

    for (i=0; i < 10; i ++)
    {
        vet[i] = vet2[9 - i];
    }

    cout<< "\n O vetor ao contrario é: " << endl;
    for(i=0; i <10; i++)
    {
        cout<< " [" << i << "]:" << vet[i];
    }
}

float media(int vet[])
{
    float media;
    media = 0;
    int i;
    for(i=0; i<10; i++)
    {
        media= media+vet[i];
    }
    media = media/10;
    cout<< "\n A média é: "<< media;
}

int MaiorMenor(int vet[])
{
    int i, menor, maior;
    menor = 100;
    maior = 0;

    for(i=0; i<10; i++)
    {
        if(vet[i] > maior)
        {
            maior = vet[i];
        }
        if(vet[i] < menor)
        {
            menor = vet[i];
        }
    }
    cout<< "\n O menor número é: " << menor;
    cout<< "\n O maior número é: " << maior;
}

void Ordenar(int vet[])
{
    int i, aux, j;
    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(vet[i]>vet[j])
            {
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
    }
    cout<< "\n O vetor em ordem crescente: ";
    for(i=0; i<10; i++)
    {
        cout<< " [" << vet[i] << "] ";
    }
}
