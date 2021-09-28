#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;
main ()
{
    setlocale(LC_ALL,"Portuguese");

    int n1;
    cout<< "Informe o valor final da placa (entre os números 0 até o 9):";
    cin>>n1;

    switch(n1){
case 1 ... 3:
    cout<< "\n O vencimento do IPVA é até 30/04/2020.";
    break;
case 4 ... 6:
    cout<< "\n O vencimento do IPVA é até 31/05/2020.";
    break;
case 7:
case 8:
    cout<< "\n O vencimento do IPVA é até 30/06/2020.";
    break;
case 9:
case 0:
    cout<< "\n O vencidomento do IPVA é até 31/07/2020.";
    break;
default:
    cout<< "\n Opção inválida!";

    }
    cout<< "\n\n";
    system("pause");
}
