/*
Efetuar o c�lculo da quantidade de litros de combust�vel gastos em uma viagem,
sabendo-se que o carro faz 12 km com um litro. Dever�o ser fornecidos o tempo
gasto na viagem e a velocidade m�dia
Utilizar as seguintes f�rmulas:
dist�ncia = tempo * velocidade.
litros usados = dist�ncia / 12.
O algoritmo dever� apresentar os valores da velocidade m�dia, tempo gasto
na viagem, dist�ncia percorrida e a quantidade de litros utilizados na viagem.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "portuguese");

    float temp, vel, dist, litrogasto;

    cout<< "Informe o tempo gasto na viagem: ";
    cin>> temp;
    cout<< "Informe a velocidade m�dia: ";
    cin>> vel;

    dist=temp*vel;
    litrogasto=dist/12;

    cout<<  "\n A velocidade m�dia � de: " << vel;
    cout<< "\n O tempo da viagem � de: " <<temp;
    cout<< "\n A dist�ncia percorrida foi: " << dist;
    cout<< "\n A quantidade de litros gasto foi: "<< litrogasto;

    cout<< "\n\n";

    system("pause");
}
