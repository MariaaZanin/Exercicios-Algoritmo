#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<locale.h>

using namespace std;
int func(int base,int expoente);

main()
{
    setlocale(LC_ALL, "Portuguese");
    int base, expoente;
    cout << "Informe a base: ";
    cin >> base;
    cout << "Informe o expoente: ";
    cin >> expoente;


    cout << "\n O "<< base << " elevado na " << expoente << " é: " << func(base,expoente);

    cout<< "\n\n";
    system("Pause");
}

int func(int base,int expoente)
{
    if (expoente == 0)
    {
        return 1;
    }
    else
    {
        return base * func(base, (expoente-1));
        }
}


