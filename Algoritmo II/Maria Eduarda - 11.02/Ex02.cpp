#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>

using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    string nome, endereco, idade, tel;

    cout<< "\n Digite o seu nome: ";
    getline(cin, nome);
    cout<< "\n Digite sua idade: ";
    getline(cin,idade);
    cout<< "\n Digite o seu telefone: ";
    getline(cin,tel);
    cout<< "\n Digite o seu endere�o: ";
    getline(cin,endereco);

    cout<< "\n Seu nome � " + nome + " , voc� tem " + idade + " anos, mora na rua: " + endereco + " e seu telefone �: " + tel;

    cout<< "\n\n";
    system("pause");
}
