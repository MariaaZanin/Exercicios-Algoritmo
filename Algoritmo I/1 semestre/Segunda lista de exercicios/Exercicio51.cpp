/*
Faça um algoritmo que leia a velocidade permitida em uma via, a velocidade praticada por um motorista, e informe
 se o mesmo receberá multa ou não, e o valor a pagar. Caso tenha excedido a velocidade em até 20% da permitida,
  o motorista receberá uma multa de R$ 102,00. Caso tenha excedido a velocidade acima de 20% da permitida, o motorista
  receberá uma multa de R$ 500,00
*/
#include <iostream>
#include <cstdlib>
using namespace std;
main ()
{
    float v1, temp, r1;
    cout<< "Informe os quilometros andado pelo veiculo: ";
    cin>> v1;
    cout<< "Informe o tempo (em horas) que levou para percorrer o caminho: ";
    cin>> temp;

    r1 = v1/temp;

    if(r1>0 or r1<=80){
        cout<< "Não existe multa para pagar! ";
    }else if (r1>80 or r1<96){
        cout<< "O motorista tera que pagar R$102,00 de multa! ";
    }else if(r1>=97){
    cout<< "O motorista tera que pagar R$500,00 de multa! ";
    }
    cout<< "\n\n";
    system("pause");

}
