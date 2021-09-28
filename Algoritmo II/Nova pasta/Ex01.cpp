#include <iostream>
#include <windows.h>
#include <time.h>

#define TAM 15
void deposito(float conta[],float valor[], int indice);
void saque(float conta[],float valor[],int indice);
void positivo(float conta[],float valor[],int indice);
void negativo(float conta[],float valor[],int indice);
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float conta[TAM], valor[TAM];
    int menu = -1, indice = 0;

    do
    {
        cout<< "\n**** MENU ****" <<endl;
        cout<< " 0 - Efetuar deposito" << endl;
        cout<< " 1 - Efetuar saque " << endl;
        cout<< " 2 - Listar saldos positivos "<< endl;
        cout<< " 3 - Listar saldos negativos com juros" << endl;
        cout<< " 4 - Sair"<<endl;
        cout<< "\n O que deseja fazer: ";
            cin>> menu;

        switch(menu)
        {
        case 0:
            if(indice == 15){
                cout<< "\n Conta inválida!";
            }
            else{
            deposito(conta, valor, indice);
            indice++;
            }
        break;
        case 1:
            if(indice == 0){
                cout<< "\n É necessário dapositar antes!";
            }
            else{
            saque(conta, valor, indice);
            }
            break;
        case 2:
             if(indice == 0){
                cout<< "\n É necessário dapositar antes!";
            }
            else{
                positivo(conta, valor, indice);
            }
            break;
        case 3:
            if(indice == 0){
                cout<< "\n É necessário dapositar antes!";
            }
            else{
                negativo(conta, valor, indice);
            }
            break;
        case 4:
            cout<< "\n PROGRAMA FINALIZADO";
            break;
        default:
            cout<< "\n Opção inválida, tente novamente. \n";
            break;
        }
    }
    while(menu != 4);

    cout<< "\n\n";
    system("pause");
}

void deposito(float conta[],float valor[], int indice){
    cout<< "\n Informe a conta: ";
    cin>> conta[indice];
    cout<< "\n Informe o valor: ";
    cin>> valor[indice];
}

void  saque(float conta[],float valor[],int indice){
    int i, conta2=0, valor2=0, aux=0;
    cout<< "\n Informe a conta: ";
    cin>> conta2;
    cout<< "\n Informe o valor que deseja sacar: ";
    cin>> valor2;
    for(i=0;i<indice;i++){
        if(conta2 == conta[i]){
            valor[i] = valor[i] - valor2;
            cout<< "\n Saque concluido";
            aux++;
        }
    }
    if(aux == 0){
        cout<< "\n Essa conta não existe!";
    }
}

void positivo(float conta[],float valor[],int indice){
    int i, aux, j, aux2;
    float valor2[TAM], conta2[TAM];
    for(i=0;i<indice;i++){
        valor2[i] = valor[i];
        conta2[i] = conta[i];
    }
    for(i=0; i<indice; i++)
    {
        for(j=i+1; j<indice; j++)
        {
            if(valor2[i] > 0){
            if(valor2[i]<valor2[j])
            {
                aux=valor2[i];
                aux2 = conta2[i];
                conta2[i] = conta2[j];
                valor2[i]=valor2[j];
                valor2[j]=aux;
                conta2[j]=aux2;
            }
            }
        }
    }
    cout<< "\n Saldos positivos em ordem crescente: "<<endl;
    cout<< "CONTA \t\t SALDO" << endl;
    for(i=0; i<indice; i++)
    {
        cout<< " " << conta2[i] << " \t\t " << valor2[i] << endl;
    }
}

void negativo(float conta[],float valor[],int indice){
    int i;
    cout<< "\n Saldos negativos atualizados com 3% de juros: "<< endl;
    for(i=0;i<indice;i++){
        if(valor[i]<0){
            valor[i] = valor[i] + (valor[i] * 0.03);
            cout<< valor[i];
        }
    }
}
