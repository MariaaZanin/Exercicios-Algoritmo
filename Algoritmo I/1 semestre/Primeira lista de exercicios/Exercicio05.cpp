/*
Fa�a um algoritmo que leia dois n�meros inteiros (Int1 e Int2) e imprima o quociente e o resto da
divis�o inteira de Int1 por Int2.
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
main ()
{
    //dados
    float n1, n2, quociente, resto;
    //informacao
    cout<< "Informe o valor do dividendo: ";
    cin>> n1;
    cout<< "Informe o valor do divisor: ";
    cin>> n2;
    //calculo
    quociente =  (n1/n2);
    resto =  fmod(n1,n2);


    cout<< "\n O resultado da equacao e: " << quociente;
    cout<< "\n O restante da equacao e: " << resto;




}


//fmod
