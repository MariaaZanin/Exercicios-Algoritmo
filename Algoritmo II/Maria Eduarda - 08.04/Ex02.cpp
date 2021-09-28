#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;
void gera_vetor(int **v3,int **v1,int **v2,int tam1,int tam2,int tam3);
void par_impar(int **v3, int tam3);
void crescente(int **v3, int tam3);
void soma(int **v3, int tam3);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int tam1, tam2, tam3;

    cout<< "\n Informe o tamanho do primeiro vetor:";
    cin>> tam1;
    cout<< "\n Informe o tamanho do segundo vetor: ";
    cin>> tam2;
    tam3 = tam1+tam2;
    int *v1 = new int[tam1];
    int *v2 = new int[tam2];
    int *v3 = new int[tam3];

    cout<< "\n Vetor gerado: "<< endl;
    gera_vetor(&v3, &v1, &v2, tam1, tam2, tam3);
    cout<< "\n\n";
    par_impar(&v3, tam3);
    cout<< endl;
    crescente(&v3, tam3);
    cout<< "\n Soma dos valores: "<< endl;
    soma(&v3, tam3);

    cout<< "\n\n";
    system("pause");
}

void gera_vetor(int **v3,int **v1,int **v2,int tam1,int tam2,int tam3){
 int j = 0, i=0;
 srand(time(NULL));
    for(int x = 0; x<tam1; x++){
        (*((*v1)+x)) = rand()%100;

        (*((*v3)+i)) = (*((*v1)+x));
        i++;
    }
    for(int x = 0; x<tam2; x++){
        (*((*v2)+x))= rand()%100;
        (*((*v3)+i)) = (*((*v2)+x));
        i++;
    }
   for(int x=0;x<tam3;x++){
    cout<< (*((*v3)+x)) << " * ";
   }
   cout<< endl;
}

void par_impar(int **v3, int tam3){
int i;
cout<< "\n Números pares: " << endl;
for(i=0;i<tam3;i++){
    if((*((*v3)+i))%2==0){
     cout<< (*((*v3)+i)) << "\t";
    }
}

cout<< "\n\n Números impares:"<< endl;
for(i=0;i<tam3;i++){
    if((*((*v3)+i))%2==1){
     cout<< (*((*v3)+i)) << "\t";
    }
}
cout<< endl;
}

void crescente(int **v3, int tam3){
int aux=0, i, j;
cout<< "\n Ordem crescente: "<< endl;
 for(i=0; i<tam3; i++)
    {
        for(j=i+1; j<tam3; j++)
        {
            if((*((*v3)+i)) > (*((*v3)+j)))
            {
                aux=(*((*v3)+i));
                (*((*v3)+i))=(*((*v3)+j));
                (*((*v3)+j))=aux;
            }
        }
    }
    for(i=0;i<tam3;i++){
        cout<< (*((*v3)+i)) << "\t";
    }
    cout<< endl;
}

void soma(int **v3,int tam3){
float soma=0;
for(int i=0;i<tam3;i++){
    soma = (*((*v3)+i)) + soma;
}
cout<< soma;
}
