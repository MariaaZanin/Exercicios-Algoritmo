#include <iostream>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    int n1;
    float p1;
    cout<< "Informe o preço do produto: ";
    cin>>p1;
    cout<< "Informe o código do produto: ";
    cin>>n1;
    switch (n1){
case 1:
    cout<< "A procedência do produto é do Sul";
    cout<< "\n O seu valor é de "<<p1;
    break;
    case 2:
    cout<< "A procedência do produto é do Norte";
    cout<< "\n O seu valor é de "<<p1;
    break;
     case 3:
    cout<< "A procedência do produto é do Leste";
    cout<< "\n O seu valor é de "<<p1;
    break;
     case 4:
    cout<< "A procedência do produto é do Oeste";
    cout<< "\n O seu valor é de "<<p1;
    break;
    case 5 ... 6:
    cout<< "A procedência do produto é do Nordeste";
    cout<< "\n O seu valor é de "<<p1;
    break;
    case 7 ... 9:
    cout<< "A procedência do produto é do Sudeste";
    cout<< "\n O seu valor é de "<<p1;
    break;
     case 10 ... 20:
    cout<< "A procedência do produto é do Centrooeste";
    cout<< "\n O seu valor é de "<<p1;
    break;
    case 21 ... 30:
    cout<< "A procedência do produto é do Noroeste";
    cout<< "\n O seu valor é de "<<p1;
    break;
    default:
        cout<< " Sua procedência é inválida!";
    }

}
