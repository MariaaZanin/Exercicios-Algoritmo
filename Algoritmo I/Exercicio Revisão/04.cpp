/*
A prefeitura do Rio de Janeiro abriu uma linha de cr�dito para os funcion�rios
estatut�rios.
O valor m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio bruto. Fazer
um algoritmo que permita entrar com o sal�rio bruto e o valor da presta��o e
informar se o empr�stimo pode ou n�o ser concedido.
*/
#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;
main ()
{
     setlocale(LC_ALL, "Portuguese");

    float salbruto, empr, valor;

    cout<< "Informe seu sal�rio bruto: ";
    cin>>salbruto;
    cout<< "Informe o valor do emprestimo que deseja: ";
    cin>>empr;

    valor = (salbruto*30)/100;
    valor= valor+salbruto;

    cout<< "O valor m�ximo � de: "<< valor;
    if (valor > empr) {
        cout<< "\n O emprestimo pode ser concedido";
    }else
    cout<< "\n O emprestimo n�o pode ser concedido";

    cout<< "\n\n";
    system("pause");
}
