#include <iostream>
#include <cstdlib>
using namespace std;
main ()

{
    float din, r1, r2, r3;

    cout<< "Informe a quantia em dinheiro: ";
    cin>> din;

    r1 = din / 1.80;
    r2 = din / 2;
    r3 = din / 3.57;

    cout<< "\n A quantia em dolar e: "<<r1;
     cout<< "\n A quantia em marco alemao e: "<<r2;
     cout<< "\n A quantia em libra esterlina e: "<<r3;
     cout<< "\n\n\n";
     system ("pause");




}



