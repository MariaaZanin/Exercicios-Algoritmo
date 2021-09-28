#include <iostream>
#include <windows.h>
#include <time.h>

#define TAM 10
int produto[TAM];
float estoque[TAM];

using namespace std;

void funcPedido(int cod, int quant);

main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, aux=0, client, cod=0, quant=0;

    for(i=0; i<TAM; i++)
    {
        cout<< "Informe o código do " << i+1 << "º produto: ";
        cin>>produto[i];

        cout<< "Informe o total do produto (" << produto[i] << ") em estoque: ";
        cin>>estoque[i];
    }

    do
    {
        cout<< "\n Informe o código do cliente: ";
        cin>>client;
        if(client == 0){
            aux=1;
            cout<< "\n O programa foi encerrado devido cliente ser igual a 0. \n\n";
            break;
        }
        cout<< "\n Informe o código do produto que deseja comprar: ";
        cin>> cod;
        cout<< "\n Informe a quantidade do produto que deseja comprar: ";
        cin>> quant;

        funcPedido(cod,quant);

        cout<< "\n Deseja comprar novamente? (Digite 0 = não ou 1 = sim)";
        cin>> aux;
    }
    while (aux == 1);


    for(i=0; i<TAM; i++)
    {
        cout<< "\n O produto " << produto[i] <<  " possue " << estoque[i] << " no estoque";

    }

    cout<< "\n\n";
    system("Pause");
}

void funcPedido(int cod, int quant)
{
    int i, aux=0;
    for(i=0; i<TAM; i++)
    {
        if(produto[i] == cod)
        {
            aux =1;
            if(quant <= estoque[i])
            {
                estoque[i] = estoque[i] - quant;
                cout<< "\n Pedido atendido. Obrigado e volte sempre.";
            }
            else
            {
                cout<< "\n Não temos estoque suficiente dessa mercadoria. ";
            }
        }
    }
    if(aux==0)
    {
        cout<< "\n Código inexistente. ";

    }
}
