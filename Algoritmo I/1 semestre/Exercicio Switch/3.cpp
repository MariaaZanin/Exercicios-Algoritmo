#include <iostream>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    int n1;
    float p1;
    cout<< "Informe o pre�o do produto: ";
    cin>>p1;
    cout<< "Informe o c�digo do produto: ";
    cin>>n1;
    switch (n1){
case 1:
    cout<< "A proced�ncia do produto � do Sul";
    cout<< "\n O seu valor � de "<<p1;
    break;
    case 2:
    cout<< "A proced�ncia do produto � do Norte";
    cout<< "\n O seu valor � de "<<p1;
    break;
     case 3:
    cout<< "A proced�ncia do produto � do Leste";
    cout<< "\n O seu valor � de "<<p1;
    break;
     case 4:
    cout<< "A proced�ncia do produto � do Oeste";
    cout<< "\n O seu valor � de "<<p1;
    break;
    case 5 ... 6:
    cout<< "A proced�ncia do produto � do Nordeste";
    cout<< "\n O seu valor � de "<<p1;
    break;
    case 7 ... 9:
    cout<< "A proced�ncia do produto � do Sudeste";
    cout<< "\n O seu valor � de "<<p1;
    break;
     case 10 ... 20:
    cout<< "A proced�ncia do produto � do Centrooeste";
    cout<< "\n O seu valor � de "<<p1;
    break;
    case 21 ... 30:
    cout<< "A proced�ncia do produto � do Noroeste";
    cout<< "\n O seu valor � de "<<p1;
    break;
    default:
        cout<< " Sua proced�ncia � inv�lida!";
    }

}
