#include <iostream>
#include <windows.h>
#include <time.h>

#define TAM 10
char Mat_Letra [TAM][TAM];

using namespace std;
//declara funções
void Preenche_Matriz();
void funcReserva(int l2,int c2);


main()
{
    setlocale(LC_ALL, "Portuguese");

    int l2=0, c2=0;
    char aux;

    Preenche_Matriz();
    do
    {

        cout<< "\n Informe o número da linha da poltrona que deseja sentar: ";
        cin>>l2;
        cout<< "\n Informe o número da coluna da poltrona que deseja sentar: ";
        cin>>c2;

        funcReserva(l2, c2);

        cout<< "\n Deseja reservar mais uma poltrona (S/N)?  ";
        cin>> aux;
    }
    while (aux == 's' or aux == 'S');

    cout<< "\n\n";
    system("pause");
}

void Preenche_Matriz()
{
    int l, c;
    for(l=0; l<TAM; l++)
    {
        for(c=0; c<TAM; c++)
        {
            Mat_Letra[l][c] = 'L';
        }
    }

    for(l=0; l<TAM; l++)
    {
        for(c=0; c<TAM; c++)
        {
            cout<< Mat_Letra[l][c] << "\t";
        }
        cout<< "\n";
    }
}

void funcReserva(int l2,int c2)
{
    int l, c;
    for(l=0; l<TAM; l++)
    {
        for(c=0; c<TAM; c++)
        {
            if(l==l2 and c==c2)
            {
                if(Mat_Letra[l][c] != 'R')
                {
                    Mat_Letra[l][c] = 'R';
                    cout<< "\n A poltrona foi Reservada. \n";
                }
                else
                {
                    cout<< "\n A poltrona solicitada já está Reservada, por favor escolha outra. \n";
                }
            }
        }
    }
    cout<< "\n";
    for(l=0; l<TAM; l++)
    {
        for(c=0; c<TAM; c++)
        {
            cout<< Mat_Letra[l][c] << "\t";
        }
        cout<< "\n";
    }
}
