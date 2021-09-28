#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include<algorithm>

using namespace std;


main()
{
    setlocale(LC_ALL, "Portuguese");
    char texto[150];
    int menu,i;

    cout<< "\n Informe o texto que deseja: ";
    gets(texto);
    char *ptexto = new char[strlen(texto)];
    ptexto = texto;

    cout<< "\n 1 - Criptografar \n 2 - Descriptografar: "<<endl;
    cout<< "\n O que você deseja fazer:";
    cin>> menu;

    while(*ptexto)
    {
        *ptexto = tolower(*ptexto);
        ptexto++;
    }

    switch(menu)
    {
    case 1:
        for(i=0; i<strlen(texto); i++)
        {
            if(texto[i] == 'a')
            {
                texto[i] = 'n';
            }
            else if(texto[i]=='b')
            {
                texto[i] = 'o';
            }
            else if(texto[i]=='c')
            {
                texto[i] = 'p';
            }
            else if(texto[i]=='d')
            {
                texto[i] = 'q';
            }
            else if(texto[i]=='e')
            {
                texto[i] = 'r';
            }
            else if(texto[i]=='f')
            {
                texto[i] = 's';
            }
            else if(texto[i]=='g')
            {
                texto[i] = 't';
            }
            else if(texto[i]=='h')
            {
                texto[i] = 'u';
            }
            else if(texto[i]=='i')
            {
                texto[i] = 'v';
            }
            else if(texto[i]=='j')
            {
                texto[i] = 'w';
            }
            else if(texto[i]=='k')
            {
                texto[i] = 'x';
            }
            else if(texto[i]=='l')
            {
                texto[i] = 'y';
            }
            else if(texto[i]=='m')
            {
                texto[i] = 'z';
            }
            else if(texto[i]=='n')
            {
                texto[i] = 'a';
            }
            else if(texto[i]=='o')
            {
                texto[i] = 'b';
            }
            else if(texto[i]=='p')
            {
                texto[i] = 'c';
            }
            else if(texto[i]=='q')
            {
                texto[i] = 'd';
            }
            else if(texto[i]=='r')
            {
                texto[i] = 'e';
            }
            else if(texto[i]=='s')
            {
                texto[i] = 'f';
            }
            else if(texto[i]=='t')
            {
                texto[i] = 'g';
            }
            else if(texto[i]=='u')
            {
                texto[i] = 'h';
            }
            else if(texto[i]=='v')
            {
                texto[i] = 'i';
            }
            else if(texto[i]=='w')
            {
                texto[i] = 'j';
            }
            else if(texto[i]=='x')
            {
                texto[i] = 'k';
            }
            else if(texto[i]=='y')
            {
                texto[i] = 'l';
            }
            else if(texto[i]=='z')
            {
                texto[i] = 'm';
            }
        }
        ptexto = texto;
        char aux[100];
        cout<< "\n Texto criptografado invertido:";
        for(i=strlen(texto); i>=0; i--)
        {
            if(isspace(ptexto[i]))
            {
                cout<< "#";
            }
            else
            {
                cout<< ptexto[i];
            }
        }
        cout<< endl;
        getchar();
        break;
    case 2:
         for(i=0; i<strlen(texto); i++)
    {
        if(texto[i] == 'n')
        {
            texto[i] = 'a';
        }
        else if(texto[i]=='o')
        {
            texto[i] = 'b';
        }
        else if(texto[i]=='p')
        {
            texto[i] = 'c';
        }
        else if(texto[i]=='q')
        {
            texto[i] = 'd';
        }
        else if(texto[i]=='r')
        {
            texto[i] = 'e';
        }
        else if(texto[i]=='s')
        {
            texto[i] = 'f';
        }
        else if(texto[i]=='t')
        {
            texto[i] = 'g';
        }
        else if(texto[i]=='u')
        {
            texto[i] = 'h';
        }
        else if(texto[i]=='v')
        {
            texto[i] = 'i';
        }
        else if(texto[i]=='w')
        {
            texto[i] = 'j';
        }
        else if(texto[i]=='x')
        {
            texto[i] = 'k';
        }
        else if(texto[i]=='y')
        {
            texto[i] = 'l';
        }
        else if(texto[i]=='z')
        {
            texto[i] = 'm';
        }
        else if(texto[i]=='a')
        {
            texto[i] = 'n';
        }
        else if(texto[i]=='b')
        {
            texto[i] = 'o';
        }
        else if(texto[i]=='c')
        {
            texto[i] = 'p';
        }
        else if(texto[i]=='d')
        {
            texto[i] = 'q';
        }
        else if(texto[i]=='e')
        {
            texto[i] = 'r';
        }
        else if(texto[i]=='f')
        {
            texto[i] = 's';
        }
        else if(texto[i]=='g')
        {
            texto[i] = 't';
        }
        else if(texto[i]=='h')
        {
            texto[i] = 'u';
        }
        else if(texto[i]=='i')
        {
            texto[i] = 'v';
        }
        else if(texto[i]=='j')
        {
            texto[i] = 'w';
        }
        else if(texto[i]=='k')
        {
            texto[i] = 'x';
        }
        else if(texto[i]=='l')
        {
            texto[i] = 'y';
        }
        else if(texto[i]=='m')
        {
            texto[i] = 'z';
        }
    }
    ptexto = texto;
    cout<< "\n Texto descriptografado:";
    for(i=strlen(texto); i>=0; i--)
    {
        if(ptexto[i] == '#')
        {
            cout<< " ";
        }
        else
        {
            cout<< ptexto[i];
        }

    }
        getchar();
        break;
    }

    cout<< "\n\n";
    system("pause");
}




