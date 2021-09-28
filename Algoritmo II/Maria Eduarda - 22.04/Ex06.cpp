#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>
#include <time.h>


using namespace std;

void ler(int *vet);
void elementos_prin(int *prin);
void elementos_sec(int *sec);
void mostrar(int matriz[5][5]);

main()
{
    setlocale(LC_ALL, "Portuguese");

    int l, c, i=0,menu=-1, matriz[5][5];
    int vet[25], prin[5], sec[5];

    ler(vet);

    for(l=0;l<5;l++){
        for(c=0;c<5;c++){
           matriz[l][c]= vet[i];
           if(c==l){
            prin[l]=matriz[l][c];
           }
           if((l+c) == (5 - 1)){
            sec[l] = matriz[l][c];
           }
           i++;
        }
    }

    do{
        system("cls");
        cout<< "****** MENU ******" << endl;
        cout<< "0 - Sair" << endl;
        cout<< "1 - Mostrar elementos da diagonal principal" << endl;
        cout<< "2 - Mostrar os elementos da diagonal secundaria" << endl;
        cout<< "3 - Mostra a soma e a matriz dos elementos acima e abaixo da diagonal principal" << endl;
        cout<< " O que você deseja: ";
        cin>> menu;

        switch(menu){
    case 0:
        cout << "PROGRAMA FINALIZADO.";
        getchar();
        break;
    case 1:
        elementos_prin(prin);
        getchar();
        break;
    case 2:
        elementos_sec(sec);
        getchar();
        break;
    case 3:
        mostrar(matriz);
        }


    }while(menu!=0);
}

void ler(int *vet)
{
    ifstream arquivo("numero.txt");
    string lnum;
    char x;
    int i=0;
    if(arquivo.is_open())
    {
        while(arquivo.get(x))
        {
            if(x == ';'){
             vet[i]=stof(lnum);
             lnum = "";
             i++;
            }
            else
                lnum += x;
        }
    }
    else
    {
        cout<< "\n O arquivo não foi encontrado";
    }
    arquivo.close();
}

void elementos_prin(int *prin){
    int i;
    cout<< "\n Valores da diagonal principal: ";
    for(i=0;i<5;i++){
        cout<< prin[i] << " ";
    }
    cout<< "\n";
    system("pause");
}

void elementos_sec(int *sec){
    int i;
    cout<< "\n Valores da diagonal secundária: ";
    for(i=0;i<5;i++){
        cout<< sec[i] << " ";
    }
    cout<< "\n";
    system("pause");
}

void mostrar(int matriz[5][5]){
    int l, c;
    float acima=0, abaixo=0, soma=0;
    cout<< "\n Matriz gerada: "<< endl;
    for(l=0;l<5;l++){
        for(c=0;c<5;c++){
            cout<< matriz[l][c] << " \t";
            soma+=matriz[l][c];
            if(c == l){

            }
                else if(c > l)
                {
                    acima += matriz[l][c];
                }
                else if(c < l)
                {
                    abaixo += matriz[l][c];
                }
        }
        cout<< endl;
    }
    cout<< "\n Soma total da matriz: " << soma;
    cout<< "\n Soma acima da diagonal principal: "<< acima;
    cout<< "\n Soma abaixo da diagonal principal: " << abaixo;
    cout<< "\n";
    system("pause");
}
