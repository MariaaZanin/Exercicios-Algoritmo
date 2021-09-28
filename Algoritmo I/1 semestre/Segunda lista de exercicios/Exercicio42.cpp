#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    float h, r1, r2;

    cout<< "Informe a sua altura: ";
    cin>> h;


    r1= (72.7*h)-58;
    r2= (62.1*h)-44.7;

    cout<< "\n O peso ideal masculino para a sua altura é: "<<r1;
    cout<< "\n O peso ideal feminino para a sua altura é: "<<r2;
    cout<< "\n\n";
    system("pause");
}



