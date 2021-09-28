/*
Escrever um algoritmo e um programa que lê um número não determinado de valores
inteiros e positivos, maiores que 0 e menores que 5.000. A cada número lido, mostrar
a quantidade de números lidos, juntamente com a média destes. Parar de informar
quando o valor informado seja igual a “ 0 ”.
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;
main ()

{
    float valor1, quantidade, media, soma;


    cout<< "Informe um numero inteiro positivo menor que 5000: ";
    cin>>valor1;

   do
    {

        soma=soma+valor1;
        quantidade=quantidade+1;
        media= soma/quantidade;



    }
 while (valor1 != -1);
    cout<< "Número inválido.";
    cout<< "\n\n";
    system("pause");
}
