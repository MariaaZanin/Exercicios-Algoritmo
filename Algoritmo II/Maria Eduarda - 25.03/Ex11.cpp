#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;
void gerar(int *vet);
void soma(int *vet);
void MaiorMenor(int *vet);
int posicao(int *vet, int valor);

main()
{
    int vet[10];
    int menu = -1, indice = 0, valor;

    do
    {
        system("cls");
        cout << "*******MENU******" << endl;
        cout << " 0 - Sair" << endl;
        cout << " 1 - Gerar valores" << endl;
        cout << " 2 - Mostrar a soma dos valores" << endl;
        cout << " 3 - Mostrar o maior e o menor valor" << endl;
        cout << " 4 - Solicitar leitura de valor + posicao" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);//limpa o buffer do teclado

        switch(menu)
        {
        case 0:
            system("cls");
            cout << "PROGRAMA FINALIZADO";
            getchar();
            break;
        case 1:
            system("cls");
            gerar(vet);
            indice++;
            getchar();
            break;
        case 2:
            system("cls");
            if(indice == 0)
                cout << "Eh necessario gerar valores primeiro!";
            else
                soma(vet);
            getchar();
            break;
        case 3:
            system("cls");
            if(indice==0)
                cout<< "Eh necessario gerar valores primeiro!";
            else
                MaiorMenor(vet);
            getchar();
            break;
        case 4:
            system("cls");
            int aux = 0;
            if(indice==0)
            {
                cout<< "Eh necessario gerar valores primeiro!";
                getchar();
                break;
            }
            else
            {
                cout<< "\n Informe o valor: ";
                cin>> valor;
                for(int i=0; i<10; i++)
                {
                    if(valor == vet[i])
                    {
                        aux++;
                    }
                }
                if(aux == 0)
                {
                    cout<< "\n Esse valor nao existe no vetor!";
                    system("pause");
                    break;
                }
                else
                {
                    posicao(vet, valor);
                    getchar();
                    break;
                }
            }
        }
    }
    while(menu != 0);


}

void gerar(int *vet)
{

    cout<< " Vetor gerado: " << endl;
    for(int i=0; i <10; i++)
    {
        vet[i] = rand()%50;
        cout<< " [" << i << "]:" << vet[i];
    }
    cout<< "\n\n";
}

void soma(int *vet)
{

    int soma;
    soma = 0;
    for(int i=0; i<10; i++)
    {
        soma += vet[i];
    }
    cout<< "\n A soma do vetor eh: "<< soma<< endl;
}

void MaiorMenor(int *vet)
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
    cout<< "\n O menor numero eh: " << menor;
    cout<< "\n O maior numero eh: " << maior;
}

int posicao(int *vet, int valor)
{
    for(int i=0; i<10; i++)
    {
        if(vet[i] == valor)
        {
            cout<< "\n O valor " << vet[i] << " esta na posicao " << i;
            getchar();
            break;
        }
    }
}
