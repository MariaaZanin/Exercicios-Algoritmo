/*
Um motorista deseja colocar no seu tanque X reais de gasolina.
Escreva um algoritmo para ler o preço do litro da gasolina e o valor do pagamento.
Exibir quantos litros ele conseguiu colocar no tanque
*/

#include <iostream>
#include <cstdlib>
using namespace std;
main ()
{
    float din,gaso,r1;

    cout<< "Informe o valor em reais: ";
    cin>>  din;
    cout<< "Informe o valor da gasolina: ";
    cin>> gaso;

    r1 = din/gaso;

    cout<< "\n A quantidade de litros foi: " << r1;
    cout<< "\n\n\n";
    system ("pause");




}



