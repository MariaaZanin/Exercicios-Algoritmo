/*
Escrever um algoritmo e um programa que l� um n�mero n�o determinado de valores
inteiros e positivos, maiores que 0 e menores que 5.000. A cada n�mero lido, mostrar
a quantidade de n�meros lidos, juntamente com a m�dia destes. Parar de informar
quando o valor informado seja igual a � 0 �.
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
    cout<< "N�mero inv�lido.";
    cout<< "\n\n";
    system("pause");
}
