#include <iostream>
#include <windows.h>
#include <time.h>

#define TAM 10
int contas[TAM];
float saldos[TAM];

using namespace std;

void funcDeposito(int cod, float dep);
void funcSaque(int cod, float saq);
void funcSaldo();

main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, aux, n, cod;
    float dep, saq;

    for(i=0; i<TAM; i++)
    {
        cout<< "\n Informe o código da " << i+1 << "º conta: ";
        cin>> contas[i];
        for(aux=0; aux<i; aux++)
        {
            if(contas[i] == contas[aux])
            {
                cout<< "\n Essa conta já existe, por favor coloque outro código.";
                i--;
                break;
            }
        }
    }

    for(i=0; i<TAM; i++)
    {
        cout<< "\n Informe o saldo da conta " << contas[i] << ": ";
        cin>>saldos[i];
    }

    do
    {
        cout<< "\n\n ***********MENU**********";
        cout<< "\n Digite 1 para efetuar depósito";
        cout<< "\n Digite 2 para efetuar saque";
        cout<< "\n Digite 3 para consultar o somatório dos saldos de todos os clientes ";
        cout<< "\n Digite 4 para finalizar o programa";
        cout<< "\n Informe o número desejado: ";
        cin>> n;

        switch(n)
        {
        case 1:
            cout<< "\n Informe o código da conta: ";
            cin>>cod;
            cout<< "\n Informe o valor que deseja depositar: ";
            cin>> dep;
            funcDeposito(cod,dep);
            break;
        case 2:
            cout<< "\n Infome o código da conta: ";
            cin>>cod;
            cout<< "\n Informe o valor que deseja sacar: ";
            cin>> saq;
            funcSaque(cod, saq);
            break;
        case 3:
            funcSaldo();
            break;
        case 4:
            cout<< "\n Programa finalizado." ;
            break;
        default:
            cout<< "\n Opção inválida, tente novamente.";
            break;
        }

    }
    while (n!=4);

    cout<< "\n\n Informações atualizadas das contas";
    cout<< "\n Contas  \t\t Saldos ";
    for(i=0; i<TAM; i++)
    {
        cout<<"\n " << contas[i] << "\t\t\t R$ " << saldos[i] << ".";
    }

    cout<< "\n\n";
    system("pause");
}


void funcDeposito(int cod, float dep)
{
    int i, aux=0;
    for(i=0; i<TAM; i++)
    {
        if(cod == contas[i])
        {
            saldos[i] = saldos[i] + dep;
            aux = 1;
            cout<< "\n O deposito foi realizado com sucesso.";
            cout<< "\n A conta " << contas[i] << " possue um saldo atualizado de: R$"<< saldos[i];
        }
    }
    if(aux==0)
    {
        cout<< "\n O código da conta é inválido.";
    }
}

void funcSaque(int cod, float saq)
{
    int i, aux=0;
    for(i=0; i<TAM; i++)
    {
        if(cod == contas[i])
        {
            if(saq <= saldos[i])
            {
                saldos[i] = saldos[i] - saq;
                aux = 1;
                cout<< "\n O saque foi realizado com sucesso.";
                cout<< "\n A conta " << contas[i] << " possue um saldo atualizado de: R$"<< saldos[i];
            }
            else
            {
                cout<< "\n O saldo é insuficiente para o saque. ";
                aux=1;
            }

        }
    }
    if(aux==0)
    {
        cout<< "\n O código da conta é inválido.";
    }
}

void funcSaldo()
{
    int i;
    float total=0;
    for(i=0; i<TAM; i++)
    {
        total = total + saldos[i];
    }
    cout<< "\n O somatório dos saldos de todos os clientes é de: R$" << total << ".";
}
