#include <iostream>
#include <windows.h>
#include <time.h>

int parcela;

using namespace std;
//declara fun��es
void funcClassif(int ano, int ano2, float preco);
void funcVenda(char classif, float preco);
void funcParcela(float preco);

main()
{
    setlocale(LC_ALL, "Portuguese");
    int ano, ano2;
    float preco;

    cout<< "\n Informe o ano atual: ";
    cin>>ano;
    cout<< "\n Informe o ano de fabrica��o do ve�culo: ";
    cin>>ano2;
    cout<< "\n Informe o pre�o do ve�culo: ";
    cin>> preco;

    funcClassif(ano, ano2, preco);

    cout<< "\n\n Informe a quantidade de parcelas em que deseja pagar? ";
    cin>>parcela;

    funcParcela(preco);

    cout<< "\n\n";
    system("pause");
}


void funcClassif(int ano,int ano2, float preco)
{
    char classif;
    if(ano == ano2)
    {
        classif='N';
        cout<< "\n A classifica��o do ve�culo � (Novo): " << classif;
    }
    else
    {
        ano = ano - ano2;
        switch(ano)
        {
        case 1 ... 3:
            classif='S';
            cout<< "\n A classifica��o do ve�culo � (Seminovo): " << classif;
            break;
        case 4 ... 1000:
            classif= 'U';
            cout<< "\n A classifica��o do ve�culo � (Usado): " << classif;
            break;
        }
    }
    cout<< "\n";
    funcVenda(classif, preco);
}

void funcVenda(char classif, float preco)
{
    switch(classif)
    {
    case 'N':
        preco = preco + (preco*0.05);
        cout<< "\n Devido a Classifica��o N o valor de venda � de: R$" << preco;
        break;

    case 'S':
        preco = preco + (preco*0.1);
        cout<< "\n Devido a Classifica��o S o valor de venda � de: R$" << preco;
        break;

    case 'U':
        preco = preco + (preco*0.15);
        cout<< "\n Devido a Classifica��o U o valor de venda � de: R$" << preco;
        break;
    }
}

void funcParcela(float preco){
    switch(parcela){
    case 1:
        preco = preco - (preco*0.1);
        cout<< "\n A parcela � de " << parcela << "x, ent�o o valor e vende atualizado � de: R$"<< preco;
        break;

    case 2 ... 12:
        preco = preco + (preco*0.1);
        cout<< "\n A parcela � de " << parcela << "x, ent�o o valor e vende atualizado � de: R$"<< preco;
        break;

    case 13 ... 24:
        preco = preco + (preco*0.15);
        cout<< "\n A parcela � de " << parcela << "x, ent�o o valor e vende atualizado � de: R$"<< preco;
        break;

    case 25 ... 36:
        preco = preco + (preco*0.20);
        cout<< "\n A parcela � de " << parcela << "x, ent�o o valor e vende atualizado � de: R$"<< preco;
        break;

    default:
         cout<< "\n Op��o inv�lida. \n";
        break;
    }
}
