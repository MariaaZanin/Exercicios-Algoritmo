#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    char texto1[100], texto2[100], texto3[100];
    char *ptexto1, *ptexto2,*ptexto3;
    ptexto1 = texto1;
    ptexto2 = texto2;
    ptexto3 = texto3;
    int i=0;

    cout<< "\n Informe o texto ou palavra que deseja:";
    gets(texto1);

    while(i<=strlen(texto1)){
        if(isspace(*ptexto1)){

        }else{
        *ptexto2 = *ptexto1;
        *ptexto3 = *ptexto1;
        ptexto2++;
        ptexto3++;
        }
        ptexto1++;
        i++;
    }
    reverse(texto3, texto3+strlen(texto3));

    if(!(strcmp(texto2, texto3))){
        cout<< "\n\n A palavra/texto é um polindromo!";
    }else{
    cout<< "\n\n A palavra/texto não é um polindromo!";
    }

    cout<< "\n\n";
    system("pause");
}
