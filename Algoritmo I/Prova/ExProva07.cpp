#include <iostream>
#include <cstdlib>
#include <locale>

#define TAM 10

using namespace std;
main()
{
    setlocale (LC_ALL, "Portuguese");

    int vet[TAM];
    int i, j, aux;
    float media =0;

    //media dos valores
    for(i=0; i<TAM; i++){
    cout<< "Informe um valor entre 0 e 200: ";
    cin>>vet[i];
    media= media+vet[i];
    }
    media= media/TAM;
    cout<< "\n A m�dia dos valores armazenados no vetor � de: "<< media;

    //valor menor que a m�dia
    cout<< "\n\n Os valores do vetor que s�o menores que a m�dia s�o: ";
    for(i=0; i<TAM; i++){
        if(vet[i]<media){
            cout<< "[" << vet[i] << "] ";
        }
    }


    //vetor em ordem decrescente
    cout<< "\n\n Em ordem decrescente os valores do vetor: ";

    for(i=0; i<TAM; i++){
        for(j=i+1; j<TAM; j++){
            if(vet[i]<vet[j]){
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
    }}
    for(i=0;i<TAM; i++){
        cout<< " [" << vet[i] << "] ";
    }

    //os valores maior que a m�dia
    cout<< "\n\n Os valores do vetor que s�o meiores que a m�dia s�o: ";
    for(i=0; i<TAM; i++){
        if(vet[i]>media){
            cout<< "[" << vet[i] << "] ";
        }
    }

    cout<< "\n\n";
    system ("pause");
}
