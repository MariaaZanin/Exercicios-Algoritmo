#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<locale>
#include <string>

using namespace std;

int leitura(string texto);
void verifica(int valor);
int soma(int valor);

main()
{
    setlocale(LC_ALL, "Portuguese");
    int menu = -1, aux = 0;
    int valor;

    do
    {
        system("cls");
        cout << "******MENU******" << endl;
        cout << "* 0 - Sair     *" << endl;
        cout << "* 1 - Ler      *" << endl;
        cout << "* 2 - Verifica *" << endl;
        cout << "* 3 - Soma     *" << endl;
        cout << "****************"<< endl;
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
            valor = leitura("\n Informe um número: ");
            aux = 1;
            getchar();
            break;
        case 2 :
            system("cls");
            if(aux == 0)
                cout << "\n É necessário informar valores primeiro.";
            else
                verifica(valor);
            getchar();
            break;
        case 3 :
            system("cls");
            if(aux == 0)
                cout << "É necessário informar os valores primeiro.";
            else
                soma(valor);
            getchar();
            break;

        default:
            system("cls");
            cout<< "Opção inválida!";
            getchar();
            break;

        }
    }
    while(menu != 0);

    cout<< "\n\n";
    system("pause");
}

int leitura(string texto)
{
    int tex;
    cout<< texto;
    cin>> tex;
    return tex;
}

void verifica(int valor)
{
    int i, aux= 0;
    for(i = valor; i > 1; i--)
    {
        if(valor % i == 0)
        {
            aux++;
        }
    }
    if(aux > 1)
    {
        cout<< "\n O número não é primo.";
    }
    else
        cout<< "\n O número é primo.";
}

int soma(int valor)
{
    int i, soma=0;
    if(valor < 0 or valor >= 999)
    {
        cout<< "\n O programa não roda com esse valor, informe um valor válido. ";

    }
    else
    {
        string num = to_string(valor);
        for(i=0; i<num.size(); i++)
        {
            char num2[1] = {num[i]};
            soma += atoi(num2);
        }
        cout<< "\n A soma dos algarismos é: " << soma;
    }

}
