/*
Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios, vari�vel
de acordo com o cargo, conforme a tabela abaixo. Fa�a um algoritmo que leia o
sal�rio e o cargo de um funcion�rio e calcule o novo sal�rio. Se o cargo do
funcion�rio n�o estiver na tabela, ele dever�, ent�o, receber 40% de aumento.
Mostre o sal�rio antigo, o novo sal�rio e a diferen�a
*/
#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    string c1;
    float s1, r1;
    cout<< "Informe o seu cargo (g=gerente, e=engenheiro ou t=t�cnico): ";
    cin>> c1;
    cout<< "Informe o seu sal�rio: ";
    cin>> s1;

    if(c1 == "g")
    {

        cout<< "O sal�rio inicial era: "<<s1;
        r1=s1+s1*(10/100.0);
        cout<< "\n O sal�rio com 10% de aumento �: "<<r1;
    }
    else if (c1=="e")
    {

        cout<< "O sal�rio inicial era: "<<s1;
        r1=s1+s1*(20/100.0);
        cout<< "\n O sal�rio com 20% de aumento �: "<<r1;
    }
    else if (c1=="t")
    {

        cout<< "O sal�rio inicial era: "<<s1;
        r1=s1+s1*(30/100.0);
        cout<< "\n O sal�rio com 30% de aumento �: "<<r1;
    }
    else
    {

        cout<< "O sal�rio inicial era: "<<s1;
        r1=s1+s1*(40/100.0);
        cout<< "\n O sal�rio com 40% de aumento �: "<<r1;
    }


}
