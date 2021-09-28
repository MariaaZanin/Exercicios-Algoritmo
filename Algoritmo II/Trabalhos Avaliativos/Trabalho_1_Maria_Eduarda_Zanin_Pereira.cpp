#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<locale>

using namespace std;

int Inserir(int vet[], int cont, int aux2);
int Mostrar(int vet[], int cont);
int Excluir(int vet[], int cont);
void Ordenar(int vet[], int cont);

main()
{
    setlocale(LC_ALL, "Portuguese");

    int aux=0, menu, cont=0, aux2=0;
    int vet[10];

    do
    {
        cout<< "\n";
        cout<< "******* MENU *******" << endl;
        cout<< "0 - Sair " << endl;
        cout<< "1 - Inserir " << endl;
        cout<< "2 - Mostrar " << endl;
        cout<< "3 - Excluir" << endl;
        cout<< "\n Sua escolha: ";
        cin>> menu;
        fflush(stdin);

        switch(menu)
        {
        case 0:
            system("cls");
            cout << "PROGRAMA FINALIZADO";
            getchar();
            break;
        case 1:
            system("cls");

            if(cont == 10)
            {
                cout<< "\n O vetor já está completo. ";
                break;
            }
            else
            {
                Inserir(vet, cont, aux2);
            }
            aux2= aux2+1;
            aux = 1;
            cont++;
            getchar();
            break;
        case 2:
            system("cls");
            if(aux == 0)
            {
                cout << "\n É necessário inserir um valor no Vetor primeiro.";
            }
            else
            {
                Ordenar(vet, cont);
                Mostrar(vet, cont);
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
                Excluir(vet,cont);
            }
            cout<< "\n";
            break;
        default:
            cout<< "\n Opção inválida.";
            getchar();
            system("cls");
            break;
        }
    } while(menu != 0);

    cout<< endl;
    system("pause");
}

//Função inserir
int Inserir(int vet[], int cont, int aux2)
{
    int i;
    for(i=aux2; i <=cont; i++)
    {
        cout<< "\n Informe um valor para o Vetor: ";
        cin>> vet[i];
        aux2 ++;
    }

    Ordenar(vet, cont);
    cout<< endl;
}

//Função Mostrar
int Mostrar(int vet[], int cont)
{
    int i;
    cout<< "\n Vetor gerado em ordem crescente: " <<endl;
    for(i=0; i<cont; i++)
    {
        if(vet[i]!= 0)
        {
            cout<< vet[i] << "\t";
        }
    }
    cout<< endl;
}

// Função Excluir
int Excluir(int vet[], int cont)
{
    int i, exc, aux, aux2, lugar;
    aux=0;
    cout<< "\n Informe o número que deseja excluir: ";
    cin>> exc;
    cout<< "\n Informe em que vetor ele pertence: ";
    cin>> lugar;

    for(i=0; i<cont; i++)
    {
        if(vet[i] == exc)
        {
            aux = 1;
            vet[i] = 0;
        }
    }
    if(aux == 0)
    {
        cout<< "\n O número não existe no vetor.";
    }
    else
    {
        cout<< "\n Número excluido com sucesso. ";
    }

    Ordenar(vet, cont);
    cout<< endl;
}

// Função Ordenar
void Ordenar(int vet[], int cont)
{
    int i, aux, j;
    for(i=0; i<cont; i++)
    {
        for(j=i+1; j<cont; j++)
        {
            if(vet[i]>vet[j])
            {
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
    }
}
