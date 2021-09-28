#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;


main ()
{
    setlocale (LC_ALL, "Portuguese");

    float saldo1, saldo2, juros, saldofinal;
    int mes;

    cout<< "\n Informe saldo inicial: ";
    cin>> saldo1;
    cout<< "\n Informe valor final: ";
    cin>> saldofinal;

    mes=0;

    do
    {
        mes++;
        cout<< "\n Mês "<< mes;
        cout<< fixed << setprecision(2);
        cout<< " \t" << saldo1;
        juros= (saldo1 * 1.5)/100;
        saldo2 = saldo1 + juros;
        cout<< "\t "<< juros << "\t" << saldo2;
        saldo1 = saldo2;

    }
    while (saldo1 < saldofinal);

    cout<< "\n\n";
}
