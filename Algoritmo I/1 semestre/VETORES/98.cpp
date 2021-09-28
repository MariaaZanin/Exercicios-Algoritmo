/*
 Escrever um algoritmo e um programa que leia 2 vetores X e Y de 10 posições
de números inteiros. Ordenar os vetores em ordem crescente. Passar os valores
dos dois para um vetor Z, mantendo a ordem crescente, sendo proibido reordenalo. Mostrar o vetor Z.
*/
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <locale>

#define TAM 10
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    int x[TAM]={4,14,8,18,3,16,7,11,13,12}, y[TAM]={19,6,5,2,17,15,9,10,1,20}, z[20];
    int i, aux=0, j;

    //vetor X
    for(i=0;i<TAM;i++){
        for(j=i+1; j<TAM; j++){
            if(x[i]>x[j]){
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;
            }
        }
    }
    cout<<  "\n\n Mostrando o resultado do vetor X: ";
    for(i=0;i<TAM;i++){
        cout<< " ["<< x[i] << "] ";
    }
    cout<< "\n\n";

    //VETOR Y

    for(i=0;i<TAM;i++){
        for(j=i+1; j<TAM; j++){
            if(y[i]>y[j]){
                aux=y[i];
                y[i]=y[j];
                y[j]=aux;
            }
        }
    }
    cout<<  "\n\n Mostrando o resultado do vetor Y: ";
    for(i=0;i<TAM;i++){
        cout<< " ["<< y[i] << "] ";

    }
        cout<< "\n\n";

        //VETOR Z

    for(i=0; i<20; i++){
            z[i]= x[i];
            z[i] = y[i];}
    cout<< "\n Mostrando resultado do vetor Z reordenar a ordem:";
    cout<< "\n";
    for(i=0;i<20;i++){
        cout<< " ["<< z[i] << "] ";

    }


   for(i=0; i<20; i++) {
       for(j=i+1; j<20; j++){
            if(z[i]>z[j]){
                aux=z[i];
                z[i]=z[j];
                z[j]=aux;
            }

    }}
    cout<< "\n\n";
    cout<< "\n Mostrando resultado do vetor Z em ordem crescente:";
    cout<< "\n";
    for(i=0;i<20;i++){
        cout<< " ["<< z[i] << "] ";

    }
    cout<< "\n\n";
    system("pause");
}



