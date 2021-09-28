#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<locale.h>

using namespace std;
float func(float aux);

main()
{
    setlocale(LC_ALL, "Portuguese");
    float aux;
    cout << "Informe um numero: ";
    cin>> aux;

    cout<< "\n O número harmonico é: " << func(aux);

    cout<< "\n\n";
    system("Pause");
}

float func(float aux)
{
    if (aux == 1)
    {
        return(1);
    }
    else
    {
        return(1/aux + func(aux -1));
        }
}
