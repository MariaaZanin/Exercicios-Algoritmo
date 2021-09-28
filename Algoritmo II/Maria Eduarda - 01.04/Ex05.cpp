#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;
#define TAM 20
main()
{
    setlocale(LC_ALL, "Portuguese");
    int aposta[TAM], valor[TAM];
    int i, acerto, quant;
    int *paposta, *pvalor, *p;
    paposta = aposta;
    pvalor = valor;
    acerto = 0;
    cout<< "\n Informe quantos números quer apostar: ";
    cin>>quant;

    int certos[quant];
    p = certos;
    cout<< "\n Informe os valores que deseja apostar: " << endl;
    for(i=0; i<quant; i++)
    {
        cin>> paposta[i];
    }
    for(int i = 0; i < TAM; i++)
    {
        pvalor[i] = rand() %101;
    }
    cout<< "\n\n";
    for(i=0; i<TAM; i++)
    {
        cout<< pvalor[i] << "\t";
    }
    cout<< endl;
    int j;
    for(i=0; i<quant; i++)
    {
        for(j=0; j<TAM; j++)
        {
            if(pvalor[i] == paposta[j])
            {
                cout<< "ponteiro valor: "<< pvalor[i]<< endl;
                p[acerto]=pvalor[i];
                cout<< "ponteiro p: "<<p[acerto]<<endl;
                acerto++;
            }
        }
    }
    if(acerto>0)
    {
        cout<< "\n O jogador acertou: " << acerto<< ", foram eles: "<<endl;
        for(i=0; i<acerto; i++)
        {
            cout<< p[i] <<"\n";
        }
    }
    else
    {
        cout<< "\n O jogador não acertou nenhum número!";
    }
}
