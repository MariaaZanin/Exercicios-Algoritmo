/*
Fa�a um algoritmo que calcule o valor da conta de luz de uma pessoa.
Sabe -se que o c�lculo da conta de luz segue a tabela abaixo:
Tipo de Cliente Valor do KW/h
1 (Resid�ncia) 0,60
2 (Com�rcio) 0,48
3 (Ind�stria) 1,29
*/
#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    float v1, r1;
    string t1;

    cout<< "Informe o tipo de cliente (resid�ncia = r, com�rcio = c ou ind�stria = i): ";
    cin>> t1;
    cout<< "Informe o valor gasto de luz em KW/h: ";
    cin>> v1;

    if (t1 == "r"){
        r1=v1*0.60;
        cout<< "O valor a ser pago pela resid�ncia � de: "<<r1;
    } else if (t1 == "c"){
    r1= v1*0.48;
    cout<< " O valor a ser pago pelo com�rcio � de: "<< r1;
    } else if (t1=="i"){
    r1= v1*1.29;
    cout<< "O valor a ser pago pela ind�stria � de: "<<r1;}

    cout<< "\n\n";
    system("pause");
}
