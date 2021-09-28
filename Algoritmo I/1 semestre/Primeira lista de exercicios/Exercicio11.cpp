/*
)Escrever um algoritmo para determinar o consumo médio de um automóvel sendo fornecidos a
distância total percorrida pelo automóvel e o total de combustível gasto.
*/
#include <iostream>
#include <cstdlib>
using namespace std;
main ()
{
    //dados
    float media, dist, combs;
    //informacao
    cout<< "\n Informe a distancia total percorrida pelo automovel: ";
    cin>> dist;
    cout<< "\n Informe o consumo total de combustivel gasto: ";
    cin>> combs;
    // calculo
    media = dist/combs;
    //resultado
    cout<< "\n O consumo pelo automovel foi: " << media;
    cout<< "\n\n\n";
    system ("pause");


}
