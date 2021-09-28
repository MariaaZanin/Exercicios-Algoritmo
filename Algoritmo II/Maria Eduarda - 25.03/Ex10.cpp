#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

struct estoque
{
    int cod;
    int quant;
    char nome[50];
    char unidade[50];
    float preco;
};

void leitura(estoque *x, int i);
void mostra(estoque *x, int i);
void pesquisaEst(estoque *x, int j);
void vender(estoque *x, int j, int quant2);

main()
{
    estoque x[50];
    int menu = -1, indice = 0, aux, cod, quant2;

    do
    {
        system("cls");
        cout << "*******MENU******" << endl;
        cout << " 0 - Sair" << endl;
        cout << " 1 - Cadastrar produto" << endl;
        cout << " 2 - Lista produtos cadastrados" << endl;
        cout << " 3 - Consultar produto pelo codigo" << endl;
        cout << " 4 - Vender produto pelo codigo" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);//limpa o buffer do teclado

        switch(menu)
        {
        case 0 :
            system("cls");
            cout << "PROGRAMA FINALIZADO";
            getchar();
            break;
        case 1 :
            system("cls");
            if(indice == 50)
                cout << "Limite maximo de produtos ja cadastrados";
            else
                leitura(x, indice);
                indice++;
            break;
        case 2 :
            system("cls");
            if(indice <= 0){
                cout << "E necessario cadastrar produto primeiro";
                getchar();
                break;}
            else
                mostra(x, indice);
            getchar();
            break;
        case 3 :
            system("cls");
            if(indice <= 0){
                cout << "E necessario cadastrar produto primeiro";
                getchar();
                break;}
            else
                aux=0;
            cout<<"Digite o codigo: ";
            cin>>cod;
            for(int i = 0; i<=indice; i++)
            {
                if(x[i].cod == cod)
                {
                    pesquisaEst(x, i);
                    aux++;
                }
            }
            if(aux == 0)
            {
                cout<<"Nao existe produto com este codigo no estoque!\n";
                getchar();
            }
            getchar();
            break;
        case 4 :
            system("cls");
            if(indice <= 0){
                cout << "E necessario cadastrar produto primeiro";
                getchar();
                break;}
            else
                aux=0;
            cout<<"Digite o codigo: ";
            cin>>cod;
            cout<<"Digite o quantidade: ";
            cin>>quant2;
            for(int i = 0; i<=indice; i++)
            {
                if(x[i].cod == cod)
                {
                    vender(x, i, quant2);
                    aux++;
                }
            }
            if(aux == 0)
            {
                cout<<"Nao existe produto com este codigo no estoque!";
                getchar();
            }
            getchar();
            break;

        };
    }
    while(menu != 0);

}

void leitura(estoque *x, int i)
{
    cout << "\n\nInforme o codigo do produto: ";
    cin >> x[i].cod;
    fflush(stdin);

    cout << "Informe o nome do produto: ";
    gets(x[i].nome);
    fflush(stdin);

    cout << "Informe a unidade do produto: ";
    gets(x[i].unidade);
    fflush(stdin);

    cout << "Informe a quantidade de produto: ";
    cin >> x[i].quant;
    fflush(stdin);

    cout << "Informe o preco do produto: ";
    cin>> x[i].preco;
    fflush(stdin);
}

void mostra(estoque *x, int i)
{
    cout << "DADOS CADASTRADOS: " << endl;
    for(int j = 0; j < i; j++)
    {
        cout << "Codigo: " << x[j].cod << endl;
        cout << "Nome: " << x[j].nome << endl;
        cout << "Unidade: " << x[j].unidade << endl;
        cout << "Quantidade: " << x[j].quant << endl;
        cout << "Preco: " << x[j].preco << endl;
        cout << "\n\n";
    }
}

void pesquisaEst(estoque *x, int j)
{
    cout << "Codigo: " << x[j].cod << endl;
    cout << "Nome: " << x[j].nome << endl;
    cout << "Unidade: " << x[j].unidade << endl;
    cout << "Quantidade: " << x[j].quant << endl;
         cout << "Preco: " << x[j].preco << endl;
    cout << "\n\n";
    getchar();
}

void vender(estoque *x, int j, int quant2)
{
   if(x[j].quant >= quant2){
        cout<<"\n Quantidade do produto vendida!";
        x[j].quant -= quant2;}
    else
    {
        cout<<"Nao temos esta quantidade de produto!";
    }
    getchar();
}

