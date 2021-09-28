/*
Uma empresa concederá um aumento de salário aos seus funcionários, variável
de acordo com o cargo, conforme a tabela abaixo. Faça um algoritmo que leia o
salário e o cargo de um funcionário e calcule o novo salário. Se o cargo do
funcionário não estiver na tabela, ele deverá, então, receber 40% de aumento.
Mostre o salário antigo, o novo salário e a diferença
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
    cout<< "Informe o seu cargo (g=gerente, e=engenheiro ou t=técnico): ";
    cin>> c1;
    cout<< "Informe o seu salário: ";
    cin>> s1;

    if(c1 == "g")
    {

        cout<< "O salário inicial era: "<<s1;
        r1=s1+s1*(10/100.0);
        cout<< "\n O salário com 10% de aumento é: "<<r1;
    }
    else if (c1=="e")
    {

        cout<< "O salário inicial era: "<<s1;
        r1=s1+s1*(20/100.0);
        cout<< "\n O salário com 20% de aumento é: "<<r1;
    }
    else if (c1=="t")
    {

        cout<< "O salário inicial era: "<<s1;
        r1=s1+s1*(30/100.0);
        cout<< "\n O salário com 30% de aumento é: "<<r1;
    }
    else
    {

        cout<< "O salário inicial era: "<<s1;
        r1=s1+s1*(40/100.0);
        cout<< "\n O salário com 40% de aumento é: "<<r1;
    }


}
