#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

void funConsSaldo(float s);
float funcSaque(float ps);
float funcDeposito(float ps);
main()
{
    setlocale (LC_ALL, "Portuguese");
    float saldo = 0;
    char op;

    do
    {
        cout<< "\n **** MENU **** \n";
        cout<< "\n C- Consulta Saldo";
        cout<< "\n Q - Efetua Saque";
        cout<< "\n D- Efetua Deposito";
        cout<< "\n S- Sair";
        cout<< "\n Informe opção: ";
        cin>>op;
        op= toupper (op); //mesmo for minuscula a letra, fica maiuscula
        if(op=='C')
        {
            funConsSaldo(saldo);
        }
        else if (op == 'Q')
        {
            saldo = funcSaque(saldo);
        } else if (op == 'D'){
            saldo = funcDeposito (saldo);
        }

    }
    while (op != 'S');


}

void funConsSaldo(float s)
{
    cout<< " \n**********************";
    cout<< "\n * SALDO ATUAL: " << s;
    cout<< " \n**********************\n";
}

float funcSaque(float ps)
{
    float vlsSaque;
    cout<< "\n Informe valor Saque: ";
    cin>>vlsSaque;
    if(ps >= vlsSaque)
    {
        ps= ps-vlsSaque;
    }
    else
    {
        cout<< "\n Saldo Insuficiente!";
    }
    return ps;
}

float funcDeposito(float ps)
{
    float vlsDep;
    cout<< "\n Informe valor Depósito: ";
    cin>>vlsDep;
    if(vlsDep > 0)
    {
        ps = ps+vlsDep;
    }else{
    cout<< "\n Valor deposito inválido";
    }
    return ps;
}
