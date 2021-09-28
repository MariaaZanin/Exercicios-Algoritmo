#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
main ()
{
    int id, r1, r2, r3, resto;
    cout<< "Informe sua idade: ";
    cin>> id;


     r1=id/365;
    resto= id-(r1*365);
    r2=resto/30;
    resto=resto-(r2*30);
    r3=resto;


    cout<< "\n A idade descrita de outra forma e: ";
    cout<< "\n Em anos e: "<<r1;
    cout<< "\n Em mes e: "<< r2;
    cout<< "\n E em dias e: "<< r3;
    cout<< "\n\n";
    system("Pause");
}
