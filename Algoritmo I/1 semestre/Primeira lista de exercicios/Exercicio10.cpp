/*
Escreva um algoritmo para ler o salário mensal e o percentual de reajuste.
Calcular e escrever o novo salário
*/
#include <iostream>
#include <cstdlib>
using namespace std;
main ()
{
    //dados
    float s1, porcent, novo, result;
    //informacao
    cout<< "\n Informe o salario: ";
    cin>> s1;
    cout<< "\n Informe o percentual de reajuste: ";
    cin>> porcent;
    //calculo
    novo = (s1*porcent)/100;
    result = novo + s1;

    //resultado
    cout<< "\n O salario reajustado e: " << result;
    cout<< "\n\n\n";
    system("pause");


}



