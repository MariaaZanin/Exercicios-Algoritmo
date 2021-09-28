#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

void gerarv1(int *pvet1);
void gerarv2(int *pvet2, int *pvet1);
void mostrar(int *pvet1, int *pvet2);
void tudo(int *pvet1);

main()
{
    setlocale(LC_ALL,"Portuguese");
    int v1[20], v2[20];
    int *pvet1, *pvet2;
    pvet1 = v1;
    pvet2 = v2;
    int menu = -1, indice = 0;
    do
    {
        cout<< "******MENU*******";
        cout<< "\n 0 - Sair \n 1 - Gerar valores para v1 \n 2 - Preencher vetor v2 \n 3 - Mostrar vetores \n 4 - Mostrar maior, menor e média" ;
        cout<< "\n Digite o que deseja fazer: ";
        cin>> menu;
        fflush(stdin);

        switch(menu)
        {
        case 0:
            system("cls");
            cout << "PROGRAMA FINALIZADO";
            getchar();
            break;
        case 1:
            system("cls");
            gerarv1(pvet1);
            indice++;
            getchar();
            break;
        case 2:
            system("cls");
            if(indice == 0)
            {
                cout<< "\n É necessário gerar V1 primeiro.";
            }
            else
            {
                gerarv2(pvet2, pvet1);
            }
            getchar();
            break;
        case 3:
            system("cls");
            if(indice == 0)
            {
                cout<< "\n É necessário gerar V1 primeiro.";
            }
            else
            {
                mostrar(pvet1, pvet2);
            }
            getchar();
            break;
        case 4:
            system("cls");
            if(indice == 0)
            {
                cout<< "\n É necessário gerar V1 primeiro.";
            }
            else
            {
                tudo(pvet1);
            }
            getchar();
            break;
        default:
            cout<< "\n Informe um número válido!" << "\n\n";
        }

    }
    while(menu != 0);

    cout<< "\n\n";
    system("pause");
}

void gerarv1(int *pvet1)
{
    for(int i = 0; i < 20; i++)
    {
        pvet1[i] = rand() %50;
    }
    cout<< "\n V1 GERADO!";
}

void gerarv2(int *pvet2, int *pvet1)
{
    for(int i = 0; i <20; i++)
    {
        pvet2[19-i] = pvet1[i];

    }
    cout<< "\n V2 PREENCHIDO!";
}

void mostrar(int *pvet1, int *pvet2)
{
    cout<< "\n Vetor V1: " <<endl;
    for(int i = 0; i < 20; i++)
    {
        cout<< pvet1[i] << "/";
    }

    cout<< "\n\n\n Vetor V2:"<< endl;
    for(int i = 0; i < 20; i++)
    {
        cout<< pvet2[i] << "/";
    }
}

void tudo(int *pvet1)
{
    int maior = 0, menor = 51;
    float media = 0;

    for(int i = 0; i<20; i++)
    {
        if(maior < pvet1[i])
        {
            maior = pvet1[i];
        }
        if(menor > pvet1[i])
        {
            menor = pvet1[i];
        }
        media+=pvet1[i];
    }
    media = media/20;
    cout<< "\n\n O menor número é: "<< menor;
    cout<< "\n O maior número é: " << maior;
    cout<< "\n A média é: " << media;
}
