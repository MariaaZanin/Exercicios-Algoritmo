#include <iostream>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    int n1;
    float p1, r1;

    cout<< "Informe o pre�o do produto: ";
    cin>> p1;
    cout<< "Informe a forma de pagamento (1 = � vista em dinheiro ou cheque, 2 = � vista no cart�o, 3= em duas vezes ou 4 em tr�s vezes): ";
    cin>> n1;

    switch (n1){
case 1:
    r1 = p1 - ( p1 * 0.10);
    cout<< " Com 10% de desconto o pre�o do produto �: " <<r1;
    break;
    case 2:
    r1 = p1 - ( p1 * 0.05);
    cout<< " Com 5% de desconto o pre�o do produto �: " <<r1;
    break;
     case 3:
    cout<< " Em duas vezes o pre�o do produto �: " <<p1;
    break;
      case 4:
           r1 = p1 + ( p1 * 0.10);
    cout<< " Em 3 vezes, com 10% de juros o pre�o do produto �: " <<r1;
    break;
1
}
}
