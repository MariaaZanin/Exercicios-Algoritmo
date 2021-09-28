
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>

using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    char texto[100];
    char l;
    int i;

    cout<< "\n Digite o seu texto: ";
    gets(texto);
    getchar();

    cout<< "\n Informe um letra: ";
    cin>> l;

    cout<< "\n O texto sem a letra escolhida: ";
    for(i=0; i<=strlen(texto); i++){
    if(texto[i] != l){
            cout<< texto[i];
        }
    }


    cout<< "\n\n";
    system("pause");
}
