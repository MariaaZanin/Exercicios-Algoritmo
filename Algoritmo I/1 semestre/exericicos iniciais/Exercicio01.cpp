
/*
 Elaborar um programa para um restaurante que leia o preço por KG e o consumo (em gramas) de um cliente.
 Exiba na tela o valor a ser pago pelo cliente.
*/

#include <iostream>
#include <cstdlib>

using namespace std;
main ()


{
    //dados
    float precokg, consumo, valor;
    //informacao
    cout<< "Informe o preco por KG: ";
    cin>> precokg;
    cout<< "Informe o consumo do cliente: ";
    cin>> consumo;
    cout<< "\n\n";
    // calculo
    valor = (precokg/1000) * consumo;
    //resultado
    cout<< "\n O resultado a ser pago pelo cliente e: " << valor;
    cout<< "\n\n\n";
    system ("pause");


}
