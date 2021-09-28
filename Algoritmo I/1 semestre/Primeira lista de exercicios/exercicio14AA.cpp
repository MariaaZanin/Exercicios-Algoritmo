/*
)Desenvolva um algoritmo que fa�a o calculo do sal�rio liquido de um profissional que trabalhe por
hora.
Para fazer este programa, � necess�rio possuir alguns dados b�sicos, tais como valor da hora
de trabalho, numero de horas trabalhadas no M�s e o percentual de desconto do INSS.
O programa em quest�o deve apresentar o valor do sal�rio bruto, o valor descontado e o
valor do sal�rio liquido.
Passos ;
1 � estabelecer a leitura da vari�vel HT (Horas Trabalhadas)
2 � estabelecer a leitura da vari�vel VH ( Valor da Hora Trabalhada)
3 � estabelecer a leitura da vari�vel PD (percentual de desconto)
4 � Calcular o Sal�rio Bruto (SB), sendo este a mult. de HT por VH
5 � Calcular o Total de Descontos TD com base no valor do PD / 100.
6 � Calcular o sal�rio liquido SL, subtraindo o desconto do sal�rio bruto
7 � Apresentar os valores dos sal�rio bruto, liquido : SB, TD e SL
*/

#include <iostream>
#include <cstdlib>
using namespace std;
main ()
{
    //dado
    float ht, vh, pd, sb, td, sl;
    //informacao
    cout<< "Informe horas trabalhadas: ";
    cin>> ht;
    cout<< "Informe o valor da hora trabalhada: ";
    cin>> vh;
    cout<< "Informe o valor de desconto: ";
    cin>> pd;
    //calculo
    sb = ht * vh;
    td = (sb*pd)/100;
    sl = sb - td;
    //resultado
    cout<< "\n O salario bruto e: " << sb;
    cout<< "\n O valor do desconto e: "<< td;
    cout<< "\n O salario liquido e: "<< sl;
    cout<< "\n\n\n";
    system ("pause");




}

