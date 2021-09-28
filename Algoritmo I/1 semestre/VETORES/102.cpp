#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <locale>

#define TAM 10
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int a[TAM], b [TAM];
    int i, j, fat;

    cout<<"\n Vetor A: \n";
    for(i=0; i<TAM; i++){
        a[i]= rand()%10 + 1;
        cout<< "\t [" << a[i] << "]";
    }

    //calcular o fatorial de cada A jogando no vetor B
    for(i=0; i<TAM; i++){
            fat=1;
    for(j=1; j<= a[i]; j++){
        fat= fat * j;
    }
        b[i]= fat;

    }

    cout<< "\n Vetor B[] \n";

    for(i=0; i<10; i++){
        cout<< "\t " << b[i];
    }

}
