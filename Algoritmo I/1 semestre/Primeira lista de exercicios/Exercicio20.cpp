/*
Um plano de fidelidade acumula 1 ponto a cada R$ 5,00 gastos em compras nas lojas afiliadas. Faça
um algoritmo para ler o valor de 4 compras feitas por um cliente e exibir quantos pontos ele acumulou
no total.
Considere que o cliente pode acumular pontos fracionários.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
main ()
{
    float c1,c2,c3,c4, acu_total;

    cout<< "Informe o valor da primeira compra: ";
    cin>> c1;
    cout<< "Informe o valor da segunda compra: ";
    cin>> c2;
    cout<< "Informe o valor da terceira compra: ";
    cin>> c3;
    cout<< "Informe o valor da quarta compra: ";
    cin>> c4;

    acu_total = (c1+c2+c3+c4)/5;

    cout<< "\n O total de pontos que o cliente acumulou e: " <<acu_total;
    cout<< "\n\n\n";
    system ("pause");



}
