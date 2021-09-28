/*
A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
estatutários.
O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. Fazer
um algoritmo que permita entrar com o salário bruto e o valor da prestação e
informar se o empréstimo pode ou não ser concedido.
*/
#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;
main ()
{
     setlocale(LC_ALL, "Portuguese");

    float salbruto, empr, valor;

    cout<< "Informe seu salário bruto: ";
    cin>>salbruto;
    cout<< "Informe o valor do emprestimo que deseja: ";
    cin>>empr;

    valor = (salbruto*30)/100;
    valor= valor+salbruto;

    cout<< "O valor máximo é de: "<< valor;
    if (valor > empr) {
        cout<< "\n O emprestimo pode ser concedido";
    }else
    cout<< "\n O emprestimo não pode ser concedido";

    cout<< "\n\n";
    system("pause");
}
