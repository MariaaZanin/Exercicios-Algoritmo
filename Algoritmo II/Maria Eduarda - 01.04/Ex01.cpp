#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    char texto[100];
    char *ptexto;
    int maior = 0, menor = 0, i = 0;
    ptexto = texto;
    cout<< "\n Informe o texto: ";
    gets(texto);

    while(*ptexto)
    {
        if(islower(*ptexto))
        {
            menor++;
        }
        if(isupper(*ptexto))
        {
            maior++;
        }
        *ptexto = toupper(*ptexto);
        ptexto++;
    }


    cout<< "\n No texto possui: " << maior << " letras maiúsculas e " << menor << " letras minúsculas.";
    cout<< "\n Texto maiúsculo: "<< texto;
    cout<< "\n Texto invertido: ";

    while(i <= strlen(texto))
    {
        cout<< *ptexto;
        ptexto--;
        i++;
    }

    cout<< "\n\n";
    system("Pause");
}
