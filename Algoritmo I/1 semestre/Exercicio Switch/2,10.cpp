#include <iostream>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    float p1, a1;
int r1;
    cout<< "Informe o seu peso: ";
    cin>> p1;
    cout<< "Informe a sua altura: ";
    cin>> a1;

    r1 = p1 / (a1 * a1);
    switch (r1)
    {
    case 1 ... 18:
        cout<< "O IMC esta abaixo do peso.";
        break;
    case 19 ... 25:
        cout<< "O IMC esta no peso normal.";
        break;
    case 26 ... 30:
        cout<< "O IMC esta acima do peso.";
        break;
    case 31 ... 100 :
        cout<< "O IMC esta obeso.";
        break;

    }
}
