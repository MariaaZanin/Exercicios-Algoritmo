/*
Fa�a um algoritmo que calcule a �rea de um tri�ngulo, considerando a f�rmula
Utilize as vari�veis AREA, BASE e ALTURA e os operadores aritm�ticos de multiplica��o e divis�o.
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

