#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

struct cadastro
{
    char nome[50];
    int conta;
    float saldo;
};

int leitura(cadastro x[], int i);
void mostrar(cadastro x[], int i);
float deposito(cadastro x[], int i);
float sacar(cadastro x[], int i);

main()
{
    setlocale(LC_ALL, "Portuguese");
    cadastro x[20];
    int menu = -1, indice = 0, cod=0, aux=0;

    do
    {
        system("cls");
        cout << "****MENU****" << endl;
        cout << "0 - Cadastrar conta " << endl;
        cout << "1 - Visualizar dados  " << endl;
        cout << "2 - Depositar" << endl;
        cout << "3 - Sacar " << endl;
        cout << "4 - Sair " << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu)
        {
        case 0 :
            system("cls");
            if(indice == 10)
            {
                cout<< "\n Excedeu o limite de contas.";
            }
            else
            {
                indice = leitura(x, indice);
            }
            cout<<"\n\n";
            system("pause");
            getchar();
            break;
        case 1 :
            system("cls");
            if(indice == 0)
            {
                cout << "É necessário ler valores primeiro";
            }
            else
            {
                mostrar(x, indice);
            }
            cout<<"\n\n";
            system("pause");
            break;
        case 2 :
            system("cls");
            if(indice == 0)
            {
                cout << "É necessário ler valores primeiro";
            }
            else
            {
                cout<< "\n Digite a conta: ";
                cin>> cod;
                for(int i=0; i<=indice; i++)
                {
                    if(x[i].conta == cod)
                    {
                        deposito(x, i);
                        aux++;
                    }
                }
                if(aux == 0)
                {
                    cout<< "\n Não existe essa conta.";
                }
            }
            cout<<"\n\n";
            system("pause");
            getchar();
            break;
        case 3:
            system("cls");
            aux = 0;
            if(indice == 0)
            {
                cout << "É necessário ler valores primeiro";
            }
            else
            {
                cout<< "\n Digite a conta: ";
                cin>> cod;
                for(int i=0; i<=indice; i++)
                {
                    if(x[i].conta == cod)
                    {
                        sacar(x, i);
                        aux++;
                    }
                }
                if(aux == 0)
                {
                    cout<< "\n Não existe essa conta.";
                }
            }
            cout<<"\n\n";
            system("pause");
            getchar();
            break;
        case 4:
            system("cls");
            cout << "PROGRAMA FINALIZADO";
            getchar();
            break;
        };
    }
    while(menu != 5);


}

int leitura(cadastro x[], int i)
{
    int aux;
    aux = 0;
    if(i == 0)
    {
        cout << "\nInforme número da conta: ";
        cin >> x[i].conta;
        fflush(stdin);

        cout << "\nInforme o nome: ";
        gets(x[i].nome);
        fflush(stdin);

        cout << "\nInforme o saldo: ";
        cin>>x[i].saldo;
        fflush(stdin);
    }
    else
    {
        cout<< "\n Informe número da conta: ";
        cin>> x[i].conta;
        fflush(stdin);
        for(int j = 0; j<i; j++)
        {
            if(x[j].conta == x[i].conta)
            {
                cout<< "\n Inválido, digite uma conta não existente";
                aux++;
                break;
            }
        }
        if(aux!=1)
    {
        cout << "\nInforme o nome: ";
        gets(x[i].nome);
        fflush(stdin);

        cout << "\nInforme o saldo: ";
        cin>> x[i].saldo;
        fflush(stdin);
    }
    }

    i++;
    return i;
}

void mostrar(cadastro x[], int i)
{
    cout << "DADOS CADASTRADOS: " << endl;
    cout<< "\n";
    for(int j = 0; j<i; j++)
    {
        cout << "Conta: " << x[j].conta << endl;
        cout << "Nome: " << x[j].nome << endl;
        cout << "saldo: " << x[j].saldo << endl;
        cout << "\n\n";
    }
}

float deposito(cadastro x[], int i)
{
    float valor;
    cout<< "\n Informe o valor que deseja depositar: ";
    cin>> valor;

    x[i].saldo= x[i].saldo + valor;
}

float sacar(cadastro x[], int i)
{
    float valor;
    cout<< "\n Informe o valor que deseja sacar: ";
    cin>> valor;

    x[i].saldo= x[i].saldo - valor;
}
