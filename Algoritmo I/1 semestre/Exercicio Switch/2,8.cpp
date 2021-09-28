#include <iostream>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    int n1;
    float p1, r1;

    cout<< "Informe o preço do produto: ";
    cin>> p1;
    cout<< "Informe a forma de pagamento (1 = À vista em dinheiro ou cheque, 2 = à vista no cartão, 3= em duas vezes ou 4 em três vezes): ";
    cin>> n1;

    switch (n1){
case 1:
    r1 = p1 - ( p1 * 0.10);
    cout<< " Com 10% de desconto o preço do produto é: " <<r1;
    break;
    case 2:
    r1 = p1 - ( p1 * 0.05);
    cout<< " Com 5% de desconto o preço do produto é: " <<r1;
    break;
     case 3:
    cout<< " Em duas vezes o preço do produto é: " <<p1;
    break;
      case 4:
           r1 = p1 + ( p1 * 0.10);
    cout<< " Em 3 vezes, com 10% de juros o preço do produto é: " <<r1;
    break;
1
}
}
