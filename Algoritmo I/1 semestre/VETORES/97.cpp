#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <locale>

#define TAM 20
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    int v[TAM], p[TAM], i[TAM];
    int a, ip, ii;

    for(a=0; a<TAM; a++){

        /*cout<< "\n Informe valor v["<< a << "]";
        cin>>v[a];
        while(v[a]<1 or v[a]>200){
            cout<< "\n Informe valor VALIDOS [1-200] v["<< a << "]";
        cin>>v[a];
        }*/
        v[a]= (rand()%100)+1;
        cout<< "\n O valor é [" << v[a] << "]";
    }

    ip=0;
    ii=0;
    for(a=0; a<TAM; a++){
        if(v[a]%2 == 0){
            p[ip] = v[a];
            ip++;
        }else
        {
            i[ii] =  v[i];
            ii++;
        }
    }
    cout<< "\n Vetor Par: ";
    for(a=0; a<ip; a++){
        cout<< "\t" p[a];
    }
    cout<< "\n Vetor Impar: ";
    for(a=0; a<ii; a++){
        cout<< "\t" i[a];
    }

}
