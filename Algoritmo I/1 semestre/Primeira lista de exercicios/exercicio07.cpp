/*
Escreva um algoritmo para ler o n�mero total de eleitores de um munic�pio, o n�mero de votos
brancos, nulos e v�lidos. Calcular e escrever o percentual que cada um representa em rela��o ao
total de eleitores.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
main ()
{
    //dados
    float total, branco, nulo, valido, p1, p2, p3;
    //informacao
    cout<< "\n Informe o numero total de eleitores: ";
    cin>> total;
    cout<< "\n Informe o numero de votos brancos: ";
    cin>> branco;
    cout<< "\n Informe o numero de votos nulos: ";
    cin>> nulo;
    cout<< "\n Informe o numero de votos validos: ";
    cin>> valido;
    //calculo
    p1 = (branco*100)/total;
    p2 = (nulo*100)/total;
    p3 = (valido*100)/total;

    //resultado
    cout<< "\n A porcentagem total dos eleitores e:  " << 100;
    cout<< "\n A porcentagem de votos brancos e:  " << p1;
    cout<< "\n A porcentagem de votos nulos e:  " << p2;
    cout<< "\n A porcentagem de votos valdos e:  "<< p3;
    cout<< "\n\n\n";
    system ("pause");


}

