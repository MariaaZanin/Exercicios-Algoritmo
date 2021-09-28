/*
7 -  Escreva um algoritmo que leia um peso na Terra e o número de um planeta e imprima o valor do seu peso neste planeta.
 A relação de planetas é dada a seguir juntamente com o valor das gravidades relativas à Terra:


    #    gravidade relativa    Planeta

    1    0,37            Mercúrio

    2    0,88            Vênus

    3    0,38            Marte

    4    2,64            Júpiter

    5    1,15            Saturno

    6    1,17            Urano

   Obs: Para calcular utilize a fórmula a seguir: (planetaTerra / 10)  * gravidade.
*/

#include <iostream>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    int planetaTerra;
    float r1, p;

    cout<< "Informe o Planeta ( 1 = Mercúrio, 2 = Vênus, 3 = Marte, 4 = Júpiter, 5 = Saturno e 6 = Urano): ";
    cin>> planetaTerra;
    cout<< "Informe o peso desejado: ";
    cin>> p;


    switch (planetaTerra){
    case 1:
    r1 = (p/10)*0.37;
    cout<< "O peso no Planeta Mercúrio é: " << r1;
break;
    case 2:
    r1 = (p/10)*0.88;
    cout<< "O peso no Planeta Vênus é: " << r1;
break;
    case 3:
    r1 = (p/10)*0.38;
    cout<< "O peso no Planeta Marte é: " << r1;
break;
    case 4:
    r1 = (p/10)*2.64;
    cout<< "O peso no Planeta Júpiter é: " << r1;
break;
    case 5:
    r1 = (p/10)*1.15;
    cout<< "O peso no Planeta Saturno é: " << r1;
break;
    case 6:
    r1 = (p/10)*1.17;
    cout<< "O peso no Planeta Urano é: " << r1;
break;
    default:
            cout<< "Planeta inválido!";
    }
}
