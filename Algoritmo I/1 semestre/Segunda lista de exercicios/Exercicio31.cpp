#include <iostream>
#include <cstdlib>
using namespace std;
main ()

{
    float sal_min,sal,r1;

    cout<< "Informe o valor do salario minimo: ";
    cin>> sal_min;
    cout<< "Ingorme o valor do salario do funcionario: ";
    cin>> sal;

    r1 = sal/sal_min;
    cout<< "\n O total de salarios minimos recebidos e: " <<r1 ;
    cout<< "\n\n\n";
    system ("pause");

}
