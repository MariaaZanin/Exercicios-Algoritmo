#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;
void incluir();
void mostrar();
void consulta_nome();
void consulta_numero();

main()
{
    setlocale(LC_ALL, "Portuguese");

    int menu=-1, aux=0;
    do{
    system("cls");
        cout << "MENU" << endl;
        cout << "0 - Sair" << endl;
        cout << "1 - Incluir" << endl;
        cout << "2 - Mostrar todos" << endl;
        cout << "3 - Consultar pelo nome" << endl;
        cout << "4 - Consultar pelo número" << endl;
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
            incluir();
            getchar();
            break;
        case 2:
            mostrar();
            getchar();
            break;
        case 3:
            consulta_nome();
            getchar();
            break;
        case 4:
            consulta_numero();
            getchar();
            break;
        }
    }
    while(menu != 0);

    cout<< "\n\n";
    system("pause");
}

void incluir(){
    string nome, numero;
            ofstream arquivo("pessoas.txt",ios::app);
            cout<< "\n Informe o nome: ";
            getline(cin, nome);
            arquivo<< nome << ";";
            fflush(stdin);
            cout<< "\n Informe o número: ";
            getline(cin, numero);
            arquivo<< numero << "\n";
            fflush(stdin);
            arquivo.close();
}

void mostrar(){
    ifstream arquivo;
    char x;
    cout<< "\n Dados do arquivo: "<< endl;
    arquivo.open("pessoas.txt", ios::in);
    if(arquivo.is_open()){
     while(arquivo.get(x))
        {
            cout << x;
        }
    }else{
    cout<< "\n Erro ao abrir o arquivo.";}
    cout<< "\n\n";
    system("pause");
}

void consulta_nome(){
    ifstream arquivo;
    string aux, nome;
    char aux2;
    bool x=false;

    cout << "Informe o nome a procurar: ";
    getline(cin,nome);
    fflush(stdin);

    arquivo.open("pessoas.txt", ios::in);
       if(arquivo.is_open()){
            while(arquivo.get(aux2)){
            if(aux2!=';'||!isdigit(aux2)){
                aux+=aux2;
            if(nome==aux){
                x=true;
                break;
                }
            }
            if(aux2==';'||isdigit(aux2)||aux2=='\n')
                aux="";
    }
    }else{
    cout << "\n Erro ao encontrar o arquivo;";
    }
    if(x==true)
        cout << "\n Nome " << nome << " encontrado!";
    else
        cout << "\n O nome " << nome << " não foi encontrado.";
    cout << "\n\n";
    system("pause");
}

void consulta_numero(){
    ifstream arquivo;
    string aux, numero;
    char aux2;
    bool x=false;

    cout << "Informe o numero a procurar: ";
    getline(cin,numero);
    fflush(stdin);

    arquivo.open("pessoas.txt", ios::in);
       if(arquivo.is_open()){
            while(arquivo.get(aux2)){
            if(aux2!=';'||!isalpha(aux2)){
                aux+=aux2;
            if(numero==aux){
                x=true;
                break;
                }
            }
            if(aux2==';'||isalpha(aux2)||aux2=='\n')
                aux="";
    }
    }else{
    cout << "\n Erro ao encontrar o arquivo;";
    }
    if(x==true)
        cout << "\nNumero " << numero << " encontrado!";
    else
        cout << "\nO Numero " << numero << " não foi encontrado.";
    cout << "\n\n";
    system("pause");
}
