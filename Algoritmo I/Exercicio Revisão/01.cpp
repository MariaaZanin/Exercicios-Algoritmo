/*
Efetuar o cálculo da quantidade de litros de combustível gastos em uma viagem,
sabendo-se que o carro faz 12 km com um litro. Deverão ser fornecidos o tempo
gasto na viagem e a velocidade média
Utilizar as seguintes fórmulas:
distância = tempo * velocidade.
litros usados = distância / 12.
O algoritmo deverá apresentar os valores da velocidade média, tempo gasto
na viagem, distância percorrida e a quantidade de litros utilizados na viagem.
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
    cout<< "Informe a velocidade média: ";
    cin>> vel;

    dist=temp*vel;
    litrogasto=dist/12;

    cout<<  "\n A velocidade média é de: " << vel;
    cout<< "\n O tempo da viagem é de: " <<temp;
    cout<< "\n A distância percorrida foi: " << dist;
    cout<< "\n A quantidade de litros gasto foi: "<< litrogasto;

    cout<< "\n\n";

    system("pause");
}
