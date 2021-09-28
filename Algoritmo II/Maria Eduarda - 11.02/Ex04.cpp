#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>

using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    char texto[100];
    int i, espaco=0, vogais=0, consoante=0, numero=0, caractere=0;

    cout<< "\n Digite o seu texto: ";
    gets(texto);
    getchar();

    for(i=0; i<=strlen(texto); i++)
    {
        texto[i] = tolower(texto[i]);
    }

    for(i=0; i<strlen(texto); i++)
    {
        if(texto[i]=='a'||texto[i]=='e'||texto[i]=='i'||texto[i]=='o'||texto[i]=='u')
        {
            vogais++;
        }
        if(texto[i]=='b'||texto[i]=='c'||texto[i]=='d'||texto[i]=='f'||texto[i]=='g'||texto[i]=='h'||texto[i]=='j'||texto[i]=='k'||texto[i]=='l'||texto[i]=='m'||texto[i]=='n'||texto[i]=='p'||texto[i]=='q'||texto[i]=='r'||texto[i]=='s'||
                texto[i]=='t'||texto[i]=='v'||texto[i]=='w'||texto[i]=='x'||texto[i]=='y'||texto[i]=='z')
        {
            consoante++;
        }
        if(isdigit(texto[i]))
        {
            numero++;
        }
        if(!isalnum(texto[i]))
        {
            if(isspace(texto[i]))
            {
                espaco++;
            }
            caractere++;
        }
    }


    cout<< "\n Total de caractere: ";
    cout<< strlen(texto);
    cout<< "\n Total de espaço em branco: ";
    cout<< espaco;
    cout<< "\n Total de vogais: ";
    cout<< vogais;
    cout<< "\n Total de consoantes: ";
    cout<< consoante;
    cout<< "\n Total de números: ";
    cout<< numero;
    cout<< "\n Total de caracteres especiais: ";
    cout<< caractere-espaco;


    cout<< "\n\n";
    system("pause");
}
