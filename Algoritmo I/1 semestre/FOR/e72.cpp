#include <iostream>
#include <locale>
#include <math.h>
using namespace std;

main ()
{
    setlocale (LC_ALL, "Portuguese");
    int p2, n, m, i;
    float p1;

    cout<< "\n Informe um número para N: ";
    cin>> n;
    cout<< "\n Informe um número para M: ";
    cin>>m;

    p1 = pow(n,m);
    cout<< "\n Potencia com função POW: " << p1;

    p2=1;
    for (i = 1; i <=m; i++){
        p2= n * p2;
    }
    cout<< "\n Potencia com função for " <<p2;

    cout<< "\n\n";
}
