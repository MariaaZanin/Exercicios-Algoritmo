#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>
#include <time.h>


using namespace std;
void gerar(int vet[25]);
void mostrar(int vet[25]);

main()
{
    setlocale(LC_ALL, "Portuguese");

    int menu=-1, vet[25];

    do
    {
        system("cls");
        cout<< "****** MENU ******" << endl;
        cout<< "0 - Sair" << endl;
        cout<< "1 - Gerar valores" << endl;
        cout<< "2 - Mostra dados do arquivo" << endl;
        cout<< " O que você deseja: ";
        cin>> menu;

        switch(menu)
        {
        case 0:
            cout << "PROGRAMA FINALIZADO.";
            getchar();
            break;
        case 1:
            gerar(vet);
            getchar();
            break;
        case 2:
            mostrar(vet);
            getchar();
            break;
        }
    }
    while(menu!=0);
}

void gerar(int vet[25])
{
    ofstream arquivo;
    int i=0;
    arquivo.open("numeros.txt", ios::out);
    if(arquivo.is_open())
    {
        cout<< "\n Valores gerados com sucesso!";
        for(i=0; i<25; i++)
        {
            vet[i] = rand()%50;
            arquivo << vet[i];
            arquivo << "; \n";
        }
    }
    else
    {
        cout<< "\n O arquivo não foi encontrado";
    }
    arquivo.close();
    cout<< endl;
    system("pause");
}

void mostrar(int vet[25])
{
    int l, c, i=0;
    int prin[5], sec[5];
    int matriz[5][5];
    float acima=0, abaixo=0, soma=0;

    cout<< "\n Matriz gerada: "<< endl;
    for(l=0; l<5; l++)
    {
        for(c=0; c<5; c++)
        {
            matriz[l][c]= vet[i];
            cout<< matriz[l][c] << "\t";
            soma+=matriz[l][c];
            if(c==l)
            {
                prin[l]=matriz[l][c];
            }
            else if(c > l)
            {
                acima += matriz[l][c];
            }
            else if(c < l)
            {
                abaixo += matriz[l][c];
            }
            if((l+c) == (5 - 1))
            {
                sec[l] = matriz[l][c];
            }
            i++;
        }
        cout<< endl;
    }


    cout<< "\n Valores da diagonal principal: ";
    for(i=0; i<5; i++)
    {
        cout<< prin[i] << " ";
    }
    cout<< "\n Valores da diagonal secundária: ";
    for(i=0; i<5; i++)
    {
        cout<< sec[i] << " ";
    }
    cout<< "\n Soma total da matriz: " << soma;
    cout<< "\n Soma acima da diagonal principal: "<< acima;
    cout<< "\n Soma abaixo da diagonal principal: " << abaixo;
    cout<< "\n";
    system("pause");
}
