#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iomanip>

using namespace std;

struct cadastro
{
    char nome[50];
    int codigo;
    int unidade;
    float valor;
    int estoque;
};

int cadastrar(cadastro x[], int i);
void mostra(cadastro x[], int i);
void consultar(cadastro x[],int j);
void vender(cadastro x[], int j, int quantidade);

main()
{
    setlocale(LC_ALL, "Portuguese");
    cadastro x[50];
    int menu = -1, indice = 0, cod =0, aux;

    do
    {
        system("cls");
        cout << "******MENU****** "<< endl;
        cout << "0 - Sair " << endl;
        cout << "1 - Cadastrar produto" << endl;
        cout << "2 - Listar produtos cadastrados" << endl;
        cout << "3 - Consultar produto pelo código" << endl;
        cout << "4 - Vender produto"<< endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

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
            {
                cout<< "\n Excedeu o limite de cadastro.";
            }
            else
            {
              indice = cadastrar(x, indice);
            }
            cout<<"\n\n";
            system("pause");
            break;
        case 2 :
            system("cls");
            if(indice < 0){
                cout << "é necessário ler valores primeiro";}
            else{
                mostra(x, indice);}
                cout<<"\n\n";
                system("pause");
            getchar();
            break;
        case 3:
            system("cls");
            aux = 0;
            if(indice < 0)
            {
                cout << "E necessario ler valores primeiro";
            }
            else
            {
                cout<< "\n Digite o código: ";
                cin>> cod;
                for(int i=0; i<=indice; i++)
                {
                    if(x[i].codigo == cod)
                    {
                        consultar(x, i);
                        aux++;
                    }
                }
                if(aux == 0)
                {
                    cout<< "\n Não existe esse código.";
                }
            }
            cout<<"\n\n";
            system("pause");
            getchar();
            break;
        case 4:
            system("cls");
            if(indice < 0)
            {
                cout << "E necessario ler valores primeiro";
            }
            else
            {
                int quantidade = 0;
                aux = 0;
                cout<< "\n Informe o código do produto: ";
                cin>> cod;
                cout<< "\n Informe a quantidade que deseja comprar: ";
                cin>> quantidade;
                for(int i=0; i<=indice; i++){
                    if(x[i].codigo == cod){
                        vender(x, i, quantidade);
                        aux++;
                    }
                }
                if(aux==0){
                    cout<< "\n Não existe esse código.";
                }
            }
            cout<<"\n\n";
            system("pause");
            getchar();
            break;
        };
    }
    while(menu != 0);

}

int cadastrar(cadastro x[], int i)
{

        cout<< "\n Informe o código do produto: ";
        cin>>x[i].codigo;
        fflush(stdin);
        cout<< "\n Informe o nome do produto: ";
        gets(x[i].nome);
        fflush(stdin);
        cout<< "\n Informe a unidade de produto: ";
        cin>>x[i].unidade;
        fflush(stdin);
        cout<< "\n Informe o valor de venda: ";
        cin>>x[i].valor;
        fflush(stdin);
        cout<< "\n Informe a quantidade em estoque: ";
        cin>>x[i].estoque;
        fflush(stdin);
    i++;
    return i;
}

void mostra(cadastro x[], int i)
{
    cout << "PRODUTOS CADASTRADOS: " << endl;
    cout<< "\n";
    for(int j = 0; j <i; j++)
    {
        cout << "Código do produto: " << x[j].codigo<< endl;
        cout << "Nome do produto: " << x[j].nome << endl;
        cout << "Unidade do produto: " << x[j].unidade << endl;
        cout << "Valor do produto: " << x[j].valor << endl;
        cout << "Estoque do produto: " << x[j].estoque << endl;
        cout << "\n\n";
    }
}

void consultar(cadastro x[],int j){
    cout << "Codigo: " << x[j].codigo << endl;
    cout << "Nome: " << x[j].nome << endl;
    cout << "Unidade: " << x[j].unidade << endl;
    cout << "Estoque: " << x[j].estoque<< endl;
    cout << "Valor: " << x[j].valor << endl;
    cout << "\n\n";
    getchar();
}

void vender(cadastro x[], int j, int quantidade){
    if(x[j].estoque >= quantidade){
        cout<<"\n Quantidade do produto "<<x[j].nome<<" vendida!";
        x[j].estoque -= quantidade;
    }else{
        cout<<"\n Não possue essa quantidade de "<<x[j].nome;
    }
    getchar();
}
