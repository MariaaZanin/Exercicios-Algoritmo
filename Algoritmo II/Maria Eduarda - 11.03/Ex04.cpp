#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

struct livro
{
    char nome[50];
    char editora[50];
    char isbn[50];
    int ano;
    int pagina;
    float preco;
};

void leitura(livro x[], int i);
void mostra(livro x[], int i);
void caro(livro x[], int i);
void barato(livro x[], int i);
void anopublicado(livro x[], int i);

main()
{
    setlocale(LC_ALL, "Portuguese");
    livro x[50];
    int menu = -1, indice = 0, valor;

    do
    {
        system("cls");
        cout << "****MENU****" << endl;
        cout << "0 - Incluir livro " << endl;
        cout << "1 - Mostrar livros cadastrados  " << endl;
        cout << "2 - Livro mais caro" << endl;
        cout << "3 - Livro mais barato " << endl;
        cout << "4 - Mostrar os livros mais publicados em determinado ano" << endl;
        cout << "5 - Sair " << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu)
        {
        case 0:
            system("cls");
            if(indice == 20)
            {
                cout<< "\n Excedeu o valor de livros.";
            }
            else
            {
                leitura(x, indice);
                indice++;
            }
            cout<<"\n\n";
            system("pause");
            getchar();
            break;
        case 1:
            system("cls");
            if(indice ==0)
            {
                cout<< "\n É necessário incluir o livro primeiro.";
            }
            else
            {
                mostra(x, indice);
            }
            cout<<"\n\n";
            system("pause");
            getchar();
            break;
        case 2:
            system("cls");
            if(indice ==0)
            {
                cout<< "\n É necessário incluir o livro primeiro.";
            }
            else
            {
                caro(x, indice);
            }
            cout<<"\n\n";
            system("pause");
            getchar();
            break;
        case 3:
            system("cls");
            if(indice ==0)
            {
                cout<< "\n É necessário incluir o livro primeiro.";
            }
            else
            {
                barato(x, indice);
            }
            cout<<"\n\n";
            system("pause");
            getchar();
            break;
        case 4:
            system("cls");
            if(indice ==0)
            {
                cout<< "\n É necessário incluir o livro primeiro.";
            }
            else
            {
                anopublicado(x, indice);
            }
            cout<<"\n\n";
            system("pause");
            getchar();
            break;
        case 5:
            system("cls");
            cout << "PROGRAMA FINALIZADO";
            getchar();
            break;
        };

    }
    while(menu != 5);

    cout<< "\n\n";
    system("pause");
}

void leitura(livro x[], int i)
{
    cout << "\nInforme o nome do livro: ";
    gets(x[i].nome);
    fflush(stdin);

    cout << "\nInforme a editora: ";
    gets(x[i].editora);
    fflush(stdin);

    cout << "\nInforme o isbn: ";
    gets(x[i].isbn);
    fflush(stdin);

    cout << "\nInforme o ano de edição: ";
    cin>> x[i].ano;
    fflush(stdin);

    cout << "\nInforme o número de páginas: ";
    cin>> x[i].pagina;
    fflush(stdin);

    cout << "\nInforme o preço: ";
    cin>> x[i].preco;
    fflush(stdin);
}

void mostra(livro x[], int i)
{
    int j;
    cout << "\n LIVROS CADASTRADOS : " << endl;
    for(j=0; j<i; j++)
    {
        cout << "Nome: " << x[j].nome<< endl;
        cout << "Editora: " << x[j].editora << endl;
        cout << "Isbn: " << x[j].isbn << endl;
        cout << "Ano: " << x[j].ano << endl;
        cout << "Página: " << x[j].pagina << endl;
        cout << "Preço: " << x[j].preco << endl;
        cout << "\n\n";
    }
}

void caro(livro x[], int i)
{
    int j, aux;
    float maior;
    maior = 0;
    for(j=0; j<i; j++)
    {
        if(maior < x[j].preco)
        {
            maior = x[j].preco;
            aux = j;
        }
    }
    cout<< "\n O livro mais caro é: " << x[aux].nome << ", qual custa: " << maior << endl;
}

void barato(livro x[], int i)
{
    int j, aux;
    float menor;
    menor = 1000;
    for(j=0; j<i; j++)
    {
        if(menor > x[j].preco)
        {
            menor = x[j].preco;
            aux = j;
        }
    }
    cout<< "\n O livro mais caro é: " << x[aux].nome << ", qual custa: " << menor << endl;
}

void anopublicado(livro x[], int i)
{
    int valor, aux;
    aux = 0;
    cout<< "\n Informe o ano que deseja: ";
    cin>> valor;
    for(int j=0; j<=i;j++)
                {
                    if(x[j].ano == valor){
                        aux++;
                    }

                }

    if(aux == 0){
        cout<< "\n Não existe livros publicados nesse ano.";
    } else {
    cout<< "\n Livros Publicados no ano " << valor << " são:" << endl;

    for(int j=0; j<i; j++)
    {
        if(valor == x[j].ano)
        {
            cout<< "\n " << x[j].nome;
        }
    }}
}
