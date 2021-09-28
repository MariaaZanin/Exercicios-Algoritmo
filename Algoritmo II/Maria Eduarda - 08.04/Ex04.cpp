#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;
void gerar_vetor(int **vet, int **tam);
void mostrar(int **vet, int **tam);
void trocar(int **vet, int **tam);

main()
{
    setlocale(LC_ALL,"Portuguese");
    int *tam = new int;
    int *vet = new int[*tam];
    int menu = -1, indice=0;
    do
    {
        cout<< "******MENU******" << endl;
        cout<< "0 - Sair" << endl;
        cout<< "1 - Gerar valores" << endl;
        cout<< "2 - Mostrar vetor e sua ordem inversa" << endl;
        cout<< "3 - Mostrar vetor modificado" << endl;
        cout<< "O que deseja fazer:";
        cin>> menu;
        switch(menu)
        {
        case 0:
            system("cls");
            cout << "PROGRAMA FINALIZADO";
            getchar();
            break;
        case 1:
            system("cls");
            gerar_vetor(&vet, &tam);
            indice++;
            getchar();
            break;
        case 2:
            system("cls");
            if(indice ==0){
                cout<< "\n Gere o vetor primeiro."<<endl;
            } else
            mostrar(&vet, &tam);
            getchar();
            break;
        case 3:
            system("cls");
            if(indice ==0){
                cout<< "\n Gere o vetor primeiro."<<endl;
            } else
            trocar(&vet, &tam);
            getchar();
            break;
        }
    }
    while(menu !=0);

    cout<< "\n\n";
    system("pause");
}

void gerar_vetor(int **vet, int **tam)
{
    cout<< "\n Informe o tamanho do vetor: ";
    cin>>**tam;
    int i=0;
    srand(time(NULL));
    for(i=0;i<**tam;i++)
    {
         (*((*vet)+i)) = rand()%50;
    }
    cout << "VETOR GERADO! \n\n";
}

void mostrar(int **vet, int **tam){
    cout<< "\n VETOR: "<< endl;
 int i=0;
for(i=0;i<**tam;i++)
    {
         cout<< (*((*vet)+i)) << " * ";
    }
    cout<< "\n VETOR INVERSO: "<< endl;

 for(i=**tam-1;i>=0;i--){
    cout<< (*((*vet)+i)) << " * ";
}
cout<< "\n\n";
}

void trocar(int **vet, int **tam){
    int i, j,aux, vet2[**tam];
    float aux2 = **tam/2;
    cout<<"VETOR: " << endl;
    for(i=0;i<**tam;i++){
        cout<<(*((*vet)+i))<<" * ";
        vet2[i] = (*((*vet)+i));
    }
    cout<< "\n\n";
    for(i=0;i<aux2;i++){
        aux = vet2[i];
        vet2[i] = vet2[**tam-i-1];
        vet2[**tam-i-1] = aux;
    }
    cout<<"VETOR TROCADO: " << endl;
    for(i=0;i<**tam;i++){
        cout<<vet2[i]<<" * ";
    }
    cout<< "\n\n";
}

