/*
Faça um algoritmo que calcule a área de um triângulo, considerando a fórmula
Utilize as variáveis AREA, BASE e ALTURA e os operadores aritméticos de multiplicação e divisão.
*/

#include <iostream>
#include <cstdlib>

using namespace std;
main ()
{
    //dado
    float c, b, a;
    // informacao
    cout<< "Informe o valor da base: ";
    cin>> b;
    cout<< "Informe o valor da altura: ";
    cin>> a;
    //calculo
    c = (b*a)/2;
    //resultado
    cout<< "\n A area total do triangulo e: " << c;
    cout<<"\n\n\n";
    system ("pause");



}

