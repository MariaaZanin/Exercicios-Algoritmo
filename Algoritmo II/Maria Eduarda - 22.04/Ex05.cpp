#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>
#include <time.h>


using namespace std;

main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, aux=0, linha=0;
    float vet[100], maior=0;
    string lnum;
    char x;
    ifstream arquivo;
    arquivo.open("Ex05.txt", ios::in);
    if(arquivo.is_open()){
        while(arquivo.get(x))
            {
                if(x == ';')
                {
                    lnum += x;
                    vet[i] = stof(lnum);
                    lnum = "";
                    i++;
                    aux++;
                }
                else
                    lnum += x;
            }

    }else{
    cout<< "\n O arquivo n�o foi encontrado";
    }
    cout<< "\n Valores do arquivo: " << endl;
    for(i=0;i<aux;i++){
        cout<< vet[i] << " * ";
        if(maior < vet[i]){
            maior=vet[i];
            linha = i+1;
        }
    }
    cout<< endl;
    cout<< "\n O maior n�mero �: "<< maior;
    cout<< "\n Na linha: "<< linha << " (come�ando a contagem na posi��o 1)"; ;
    cout<< "\n\n";
    system("pause");
}
