#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;
main()
{
    setlocale(LC_ALL, "");

    int num, i, resultado, aux=0, aux2=0, aux3;
    char resp;

    resp = 's';

    do
    {
        resultado = 0;
        cout<< "Digite um número: ";
        cin>> num;

        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                resultado++;
            }
        }

        if (resultado == 0)
        {
            cout<< "É um número primo\n";
            aux++;
        }
        else
        {
            cout<< "\n  Não é um número primo";
            aux2++;
        }

        cout<< "\n Deseja informar outro número (S/N)? ";
        cin>> resp;
    }
    while((resp == 's') or (resp == 'S'));

    aux3 = aux + aux2;
    cout<< "\n\n Foram apresentados "<< aux3 << " números.";
    cout<< "\n Sendo " << aux << " primos. ";
    cout<< "\n E " << aux2<< " não primos. ";

    cout<< "\n\n";
    system("pause");
}
