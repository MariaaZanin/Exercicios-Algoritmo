#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>

using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    char texto[50];
    int i;

    cout<< "\n Digite o seu texto: ";
    gets(texto);
    getchar();

    cout<< "\n O texto sem espaço: ";
        for(i=0; i<=strlen(texto); i++){
        if(isalpha(texto[i])){
            cout<< texto[i];
        }
    }

    cout<< "\n O texto invertido e sem espaço: ";

    for(i=strlen(texto)-1; i>=0; i--){
        if(isalpha(texto[i])){
            cout<< texto[i];
        }
    }

    cout<< "\n\n";
    system("pause");
}
