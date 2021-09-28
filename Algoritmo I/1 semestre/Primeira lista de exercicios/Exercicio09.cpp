/*
) Considerando que para um consorcio, sabe-se o numero total de prestações, a quantidade de
prestações já pagas e o valor atual da prestação, escreva um algoritmo que determine o total pago
pelo consorciado e o saldo devedor.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
main ()

{
    //dados
    float prest_total, prest_pagas, valor_atual, total_pago, saldo_deve, valor_prod;
    //informacao
    cout<< "Informe o numero total de prestacoes: ";
    cin>> prest_total;
    cout<< "Informe o numero de prestacoes pagas: ";
    cin>> prest_pagas;
    cout<< "Informe o valor atual das pestacoes: ";
    cin>> valor_atual;
    //calculo
    valor_prod = prest_total * valor_atual;
    total_pago = valor_atual * prest_pagas;
    saldo_deve = (prest_total*valor_atual) - total_pago;
    //resultado

    cout<< "\n O valor total do consorcio e: "<< valor_prod;
    cout<< "\n O valor pago pelo cliente e: "<< total_pago;
    cout<< "\n O valor que o cliente deve e: "<< saldo_deve;
    cout<< "\n\n\n";
    system ("pause");



}

