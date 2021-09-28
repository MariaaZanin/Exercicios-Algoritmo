#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<time.h>

#define TAM 5
using namespace std;

main()
{
    setlocale(LC_ALL, "Portuguese");
    int A[TAM];
    int i,j, verifica=0,cont=0, aux;

	srand(time(NULL));
	for(i=0; i<TAM; i++)
	{
		A[i] = (rand()%100);

		for(j=0; j<i; j++)
		{
			if(A[j] == A[i])
			{
				i--;
			}
		}
	}

    for(i=0;i<TAM; i++){
        cout<< "\n [" << i << "]:" << A[i];
    }

    cout<< "\n\n VETOR EM ORDEM CRESCENTE: ";
        for(i=0;i<TAM;i++){
        for(j=i+1; j<TAM; j++){
            if(A[i]>A[j]){
                aux=A[i];
                A[i]=A[j];
                A[j]=aux;
            }
        }
    }

    for(i=0;i<TAM;i++){
        cout<< " ["<< A[i] << "] ";
    }
    cout<< "\n\n";
    system("pause");
}
