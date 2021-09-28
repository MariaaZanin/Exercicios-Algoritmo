#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<locale>

using namespace std;

void funcPoupanca(float valor,float deposito);
void funcCD(float valor,float deposito);

main()
{
    setlocale (LC_ALL, "Portuguese");

    int menu;
    float valor, deposito;

    do
    {
        system("cls");
        cout << "******MENU******" << endl;
        cout << "* 0 -  Sair    *" << endl;
        cout << "* 1 - Poupança *" << endl;
        cout << "* 2 - CD       *" << endl;
        cout << "****************"<< endl;
        cout << "Sua escolha: ";
        cin >> menu;


        switch(menu)
        {
        case 0 :
            system("cls");
            cout << "PROGRAMA FINALIZADO";
            getchar();
            break;
        case 1 :
            getchar();
            cout<< "\n Informe o valor do automóvel: ";
            cin>> valor;
            cout<< "\n Informe o valor que irá depositar mensalmente: ";
            cin>> deposito;
            funcPoupanca(valor, deposito);
            system("Pause");
        case 2 :
            cout<< "\n Informe o valor do automóvel: ";
            cin>> valor;
            cout<< "\n Informe o valor que irá depositar mensalmente: ";
            cin>> deposito;
            funcCD(valor, deposito);
            system("Pause");
        default:
            cout<< "Opção inválida!";
            getchar();
            break;

        }
    }
    while(menu != 0);
}

void funcPoupanca(float valor,float deposito)
{
    int mes=0;
    float aux=0, resultado =0;
    do
    {
        cout<< "\n Mês " << mes << ", saldo: R$" << aux;
        mes++;
        resultado = aux * 0.0014;
        aux = aux + resultado + deposito;
    }
    while(valor >= aux);
    cout<< "\n Mês " << mes << ", saldo: R$" << aux;
    cout<< "\n\n";
}

void funcCD(float valor,float deposito)
{
    int mes=0;
    float aux=0, resultado =0;
    do
    {
        cout<< "\n Mês " << mes << ", saldo: R$" << aux;
        mes++;
        resultado = aux * 0.0032;
        aux = aux + resultado+ deposito;
    }
    while(valor >= aux);
    cout<< "\n Mês " << mes << ", saldo: R$" << aux;
    cout<< "\n\n";
}

