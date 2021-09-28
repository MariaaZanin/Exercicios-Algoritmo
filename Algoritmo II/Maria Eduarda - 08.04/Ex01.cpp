#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;
void gerar_vetor(int *vet, int *t);
void mostra_vetor(int *vet, int *t);
void pares(int **vet2, int **t2);
void impares(int **vet3, int **t3);

main()
{
    setlocale(LC_ALL,"Portuguese");
    int *tam = new int;
    *tam = 10;
    int menu = -1, indice = 0;
    int *pvet = new int[*tam];
    do
    {
        cout<< "*****MENU******" << endl;
        cout<< "0 - Sair" << endl;
        cout<< "1 - Gerar valores para o Vetor" << endl;
        cout<< "2 - Mostrar os valores do Vetor" << endl;
        cout<< "3 - Mostrar o números pares no Vetor "<< endl;
        cout<< "4 - Mostrar os números ímpares no Vetor " << endl;
        cout<< "O que deseja fazer: ";
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
            cout<< "\n VETOR GERADO!";
            gerar_vetor(pvet, tam);
            indice++;
            getchar();
            break;
        case 2:
            system("cls");
            if(indice == 0){
            cout<< "\n Gere o vetor primeiro!";
            }else{
            cout<< "\n Valores do vetor: "<< endl;
            mostra_vetor(pvet, tam);
            }
            getchar();
            break;
        case 3:
            system("cls");
            if(indice == 0){
            cout<< "\n Gere o vetor primeiro!";
            }else{
            cout<< "\n Valores pares do vetor: "<< endl;
            pares(&pvet,&tam);}
            getchar();
            break;
        case 4:
            system("cls");
            if(indice == 0){
            cout<< "\n Gere o vetor primeiro!";
            }else{
            cout<< "\n Valores impares do vetor: "<< endl;
            impares(&pvet, &tam);}
            getchar();
            break;
        default:
            cout<< "\n Informe um valor válido." << endl;
        }
    }
    while (menu != 0);

    cout<< "\n\n";
    system("pause");
}

void gerar_vetor(int *vet, int *t)
{
    int i;
    srand(time(NULL));
    for(i=0; i<*t; i++)
    {
        *vet = rand() % 40;
        vet++;
    }
}

void mostra_vetor(int *vet, int *t)
{
    int i;
    for(i=0; i<*t; i++)
    {
        cout << *vet << "\t";
        vet++;
    }
}

void pares(int **vet2, int **t2){
    int i;
    for(i=0;i<**t2;i++){
            if((*(*vet2+i))%2 == 0){
             cout<< (*(*vet2 + i)) << "\t";
            }
    }

}

void impares(int **vet3, int **t3){
    int i;
    for(i=0;i<**t3;i++){
            if((*(*vet3+i))%2 == 1){
             cout<< (*(*vet3 + i)) << "\t";
            }
    }
}
