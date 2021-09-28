
#include <iostream>
#include <cstdlib>
using namespace std;
main ()

{
    float temp,r1;
    cout<< "Informe os graus celcius: ";
    cin>> temp;

    r1 = 180*(temp+32)/100;

    cout<< "\n O resultado em Fahrenheit e: "<<r1;
    cout<< "\n\n\n";
    system ("pause");

}
