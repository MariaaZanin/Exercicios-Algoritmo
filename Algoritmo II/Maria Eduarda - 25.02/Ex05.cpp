#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<locale>
#include<iomanip>
#include<cmath>

#define TAM 5
using namespace std;

void Matriz(float M[TAM][TAM]);
float ParImpar(float M[TAM][TAM]);
float inverte(float M[TAM][TAM]);

main()
{
    setlocale(LC_ALL, "Portuguese");

    float M[TAM][TAM];
    int aux=0, menu;

    Matriz(M);
    ParImpar(M);
    inverte(M);


    cout<< "\n";
    system("pause");
}

void Matriz(float M[TAM][TAM]){
    int l, c;
    float aux;
    srand (time(NULL));
    cout<< " Matriz gerada: " << endl;
    for(l=0; l <TAM; l++)
    { for(c=0; c<TAM;c++){
   aux = (rand()%50);
    M[l][c] = aux/2.6;
    cout << fixed;
    cout << setprecision(1);
        cout<< M[l][c]<< "\t";
    }
    cout<< "\n";
    }
    cout<< "\n\n";
}

float ParImpar(float M[TAM][TAM]){
    int l, c, aux;

    cout<< "\n Matriz arredondada (Impares para baixo e Pares para cima): "<< endl;
    for(l=0;l<TAM;l++){
        for(c=0; c<TAM; c++){
            aux = M[l][c];
            if(aux%2==0){
                M[l][c] = ceil(M[l][c]);
            }else {
                  M[l][c] = floor(M[l][c]);
            }
        }
    }

    for(l=0;l<TAM;l++){
        for(c=0; c<TAM; c++){
                  cout << fixed;
    cout << setprecision(0);
        cout<<  M[l][c] << "\t";
        }
        cout<< endl;
        }
}

float inverte(float M[TAM][TAM]){
    int l, c, l2, c2, aux;
    int maior;

    cout<< "\n\n Matriz com o maior número da coluna na Diagonal: " << endl;
    for(l=0;l<TAM;l++){
    maior =0;
        for(c=0; c<TAM; c++){
        if(M[l][c] > maior){
            maior = M[l][c];
    l2 = l;
    c2 = c;}
    if(c==4){
        aux = M[l][l];
        M[l][l] = maior;
        M[l2][c2] = aux;
    }
        }
        }

    for(l=0;l<TAM;l++){
        for(c=0;c<TAM;c++){
            cout<< M[l][c] << "\t";
        }
    cout<< endl;
    }

}


