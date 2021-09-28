#include <iostream>
#include <locale.h>

using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    float sal1, aument, sal2, salfinal, inss;
    string nomeFunc;

    cout<< "Informe o nome do funcionário: ";
    cin>> nomeFunc;
    cout<< "Informe o salário: ";
    cin>>sal1;
    cout<< "Informe o aumento em %: ";
    cin>>aument;

    sal2 = sal1 + (aument * sal1)/100;

    if (sal2 > 5000 or aument > 20) {
        inss = (sal2 * 10)/100;
    } else {
        inss=(sal2*5)/100;
    }

    cout<< "\n O salário de " << nomeFunc << " atualizado é de: " <<sal2;
    sal2 = sal2 - inss;
    cout<< "\n Seu salário Final com desconto INSS: "<<sal2;
    cout<< "\n\n";
}
