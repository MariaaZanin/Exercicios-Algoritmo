#include <iostream>
#include <locale.h>

using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    float sal1, aument, sal2, salfinal, inss;
    string nomeFunc;

    cout<< "Informe o nome do funcion�rio: ";
    cin>> nomeFunc;
    cout<< "Informe o sal�rio: ";
    cin>>sal1;
    cout<< "Informe o aumento em %: ";
    cin>>aument;

    sal2 = sal1 + (aument * sal1)/100;

    if (sal2 > 5000 or aument > 20) {
        inss = (sal2 * 10)/100;
    } else {
        inss=(sal2*5)/100;
    }

    cout<< "\n O sal�rio de " << nomeFunc << " atualizado � de: " <<sal2;
    sal2 = sal2 - inss;
    cout<< "\n Seu sal�rio Final com desconto INSS: "<<sal2;
    cout<< "\n\n";
}
