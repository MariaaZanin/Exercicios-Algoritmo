#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>
using namespace std;

int funcMaiorElemento(int M[6][6]);
bool funcEncontra(int M[6][6], int valor);
void atualizaVetor(int M[6][6], int V[]);

main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int i, l, c, tam=6, valor;
    int M[6][6], V[6];

    for(l=0;l<tam;l++){
        for(c=0;c<tam;c++){
            M[l][c] = rand()%50;
            cout<< M[l][c] << "\t";
        }
        cout<< "\n";
    }

    cout<< "Maior Elemento é: " << funcMaiorElemento(M);

    cout<< "\n Informe um valor: ";
    cin>> valor;

    if(funcEncontra(M,valor) == true){
        cout<< "\n Valor encontrado na Matriz ";
    } else{
    cout<< "\n Valor não encontrado na Matriz ";}

    cout<< "\n\n";
    atualizaVetor(M, V);
    cout<< "\n Os valores da Diagonal principal no Vetor:  ";
    for(i=0;i<6;i++){
        cout<< V[i]<< "\t";
        }

    cout<< "\n\n";
}


int funcMaiorElemento(int M[6][6]){
    int maior, l, c;
    maior = M[0][0];

    for(l=0;l<6;l++){
        for(c=0;c<6;c++){
            if(M[l][c]  > maior){
                maior = M[l][c];
            }
        }
    }
    return(maior);
}

bool funcEncontra(int M[6][6], int v){
    int l, c;

    for(l=0;l<6;l++){
        for(c=0;c<6;c++){
            if(M[l][c]  == v){
                return true;
            }
        }
    }
    return(false);

}

void atualizaVetor(int M[6][6],int V[]){
    int l, c, i;
    /*for(l=0;l<6;l++){
        for(c=0;c<6;c++){
            if(l==c){
                V[l] = M[l][c];
            }
        }
    }*/
    for(i=0;i<6;i++){
        V[i]=M[i][i];
    }
}
