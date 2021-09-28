#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<locale.h>

using namespace std;
int fibonacci(int aux);

main()
{
    setlocale(LC_ALL, "Portuguese");

    int aux;

    do
    {
        cout<< fibonacci(aux) << endl;
        aux++;
    }
    while(aux!=20);

    cout<< "\n\n";
    system("Pause");
}

int fibonacci(int aux)
{
    if(aux == 0)
    {
        return 1;
    }
    else if(aux == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(aux - 1) + fibonacci(aux - 2);
    }
}
