/*
Faça um algoritmo que leia um valor inteiro e apresente os resultados do quadrado e do cubo do valor
lido
*/

#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
main ()
{
    //dados
    float n1, quad, cub;
    //informacao
    cout<< "Informe o numero desejado: ";
    cin>> n1;
    //calculo
    quad = pow(n1, 2);
    cub = pow(n1, 3);
    //resultado
    cout<< "\n O resultado ao quadrado e: "<< quad;
    cout<< "\n O resultado ao cubo e: "<< cub;
    cout<< "\n\n\n";
    system ("pause");


}

