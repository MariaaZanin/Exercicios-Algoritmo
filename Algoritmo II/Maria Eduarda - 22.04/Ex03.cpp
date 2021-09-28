#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
#include<cstring>

using namespace std;

void cadastrar(int *n);
void mostra();
void consultar();

main()
{
    setlocale(LC_ALL, "Portuguese");
    int menu = -1, n;

    do
    {
        system("cls");
        cout << "MENU" << endl;
        cout << "0 - Sair" << endl;
        cout << "1 - Cadastrar" << endl;
        cout << "2 - Mostrar" << endl;
        cout << "3 - Consultar" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);
        switch(menu)
        {
        case 0:
            cout << "PROGRAMA FINALIZADO.";
            getchar();
            break;
        case 1:
            cadastrar(&n);
            getchar();
            break;
        case 2:
            mostra();
            getchar();
            break;
        case 3:
            consultar();
            getchar;
            break;
        }
    }
    while (menu != 0);

    cout<< "\n\n";
    system("pause");
}

void cadastrar(int *n)
{
    string nome;
    cout<< "\n Informe o nome: ";
    getline(cin, nome);
    fflush(stdin);

    ofstream escreve("cadastro.txt",ios::app);
    if(escreve.is_open())
    {
        if(*n == 0)
        {
            escreve<<nome;
            (*n)++;
        }
        else
        {
            escreve << "\n" << nome;
            escreve.close();
        }
    }
    else
    {
        cout<< "\n Erro ao abrir o arquivo.";
    }
}

void mostra()
{
    ifstream arquivo;
    string name;
    char x;

    cout << "\n Nomes cadastrados: " << endl;

    arquivo.open("cadastro.txt",ios::in);
    if(arquivo.is_open())
    {
        while(arquivo.get(x))
        {
            cout << x;
        }
    }
    else
    {
        cout<< "\n Erro ao abrir o arquivo";
    }
    cout << endl;
}

void consultar()
{
    ifstream arquivo;
    string nome, nome2;
    bool cons= false;

    cout << "Informe o nome que deseja consultar: ";
    getline(cin, nome);
    fflush(stdin);

    arquivo.open("cadastro.txt",ios::in);
    if(arquivo.is_open()){
        while(getline(arquivo, nome2)){
            if(nome == nome2){
                cons = true;
            }
        }
    if(cons==true)
        cout << "O nome " << nome << " foi encontrado no arquivo!";
    else
        cout << "O nome não foi encontrado no arquivo!";
    }
    arquivo.close();
    cout<< "\n\n";
    system("pause");
}

