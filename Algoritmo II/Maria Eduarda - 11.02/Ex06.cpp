#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>

using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    string nome, cpf, dia, mes, ano;
    int i;

    cout<< "\n Digite o seu nome: ";
    getline(cin, nome);
    cout<< "\n Digite o CPF: ";
    getline(cin, cpf);
    cout<< "\n Digite o dia do seu nascimento: ";
    getline(cin, dia);
    if(dia.size()==1){
        dia = "0" + dia;
    }
    cout<< "\n Digite o mês do seu nascimento: ";
    getline(cin, mes);
     if(mes.size()==1){
        mes = "0" + mes;
    }
    cout<< "\n Digite o ano do seu nascimento: ";
    getline(cin, ano);

    nome[0] = toupper(nome[0]);
    for(i=0; i<nome.size(); i++)
    {
        if(i!=0 && isspace(nome[i]))
        {
            nome[i+1] = toupper(nome[i+1]);
        }
    }
    cout<< "\n Nome: " <<nome;
    cout<< "\n CPF: ";
    for(i=0; i<=11; i++)
    {
        if(i==3 or i==6)
        {
            cout<< "." << cpf[i];
        }
        else if(i==9)
        {
            cout<< "-"<< cpf[i];
        }
        else cout<< cpf[i];
    }
    cout<< "\n Data de nascimento: " << dia << "/"<< mes << "/" << ano;
    cout<< "\n\n";
    system("pause");
}
