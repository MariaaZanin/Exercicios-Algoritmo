/*
)Escrever um algoritmo para determinar o consumo m�dio de um autom�vel sendo fornecidos a
dist�ncia total percorrida pelo autom�vel e o total de combust�vel gasto.
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
