#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>

using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    string texto1, texto2, texto3, ma, me, mm;
    int i;

    cout<< "\n Digite o primeiro texto: ";
    getline(cin, texto1);
    for(i=0; i<=texto1.size(); i++)
    {
        texto1[i] = toupper(texto1[i]);
    }

    cout<< "\n Digite o segundo texto: ";
    getline(cin, texto2);
    for(i=0; i<texto2.size(); i++)
    {
        texto2[i]=toupper(texto2[i]);
    }
    cout<< "\n Digite o terceiro texto: ";
    getline(cin, texto3);

    for(i=0; i<texto3.size(); i++)
    {
        texto3[i]=toupper(texto3[i]);
    }


    if(texto1.size()>= texto2.size() and texto1.size()>=texto3.size())
    {
        ma= texto1;
        if(texto2.size()>= texto3.size())
        {
            mm= texto2;
            me= texto3;
        }
        else
        {
            mm=texto3;
            me=texto2;
        }
    }

    if(texto2.size()>= texto1.size() and texto2.size()>=texto3.size())
    {
        ma= texto2;

        if(texto1.size()>= texto3.size())
        {
            mm= texto1;
            me= texto3;
        }
        else
        {
            mm=texto3;
            me=texto1;
        }
    }
    if(texto3.size()>= texto1.size() and texto3.size()>=texto2.size())
    {
        ma=texto3;
        if(texto1.size()>= texto2.size())
        {
            mm=texto1;
            me=texto2;
        }
        else
        {
            mm=texto2;
            me=texto1;
        }
    }

    cout<< "\n Os textos em ordem crescente: ";
    cout<< "\n" << ma;
    cout<< "\n" << mm;
    cout<< "\n" << me;

    cout<< "\n\n";
    system("pause");
}
