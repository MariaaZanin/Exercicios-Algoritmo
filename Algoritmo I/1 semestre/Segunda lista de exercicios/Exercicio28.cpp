
#include <iostream>
#include <cstdlib>
using namespace std;
main ()
{
    float nasc,aan, r1,r2,r3,r4;

    cout<< "Informe o ano de nascimento: ";
    cin>> nasc;
    cout<< "Informe o ano atual: ";
    cin>> aan;

    r1 = aan - nasc;
    r2 = r1*12;
    r3 = r1*360;
    r4 = r1*52.1429;
    cout<< " \n A idade da pessoa em anos e: "<<r1;
    cout<< " \n A idade da pessoa em meses e: "<<r2;
    cout<< " \n A idade da pessoa em dias e: "<<r3;
    cout<< " \n A idade da pessoa em semanas e : "<< r4;
    cout<< "\n\n\n";
    system ("pause");

}

