/*
7 -  Escreva um algoritmo que leia um peso na Terra e o n�mero de um planeta e imprima o valor do seu peso neste planeta.
 A rela��o de planetas � dada a seguir juntamente com o valor das gravidades relativas � Terra:


    #    gravidade relativa    Planeta

    1    0,37            Merc�rio

    2    0,88            V�nus

    3    0,38            Marte

    4    2,64            J�piter

    5    1,15            Saturno

    6    1,17            Urano

   Obs: Para calcular utilize a f�rmula a seguir: (planetaTerra / 10)  * gravidade.
*/

#include <iostream>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    int planetaTerra;
    float r1, p;

    cout<< "Informe o Planeta ( 1 = Merc�rio, 2 = V�nus, 3 = Marte, 4 = J�piter, 5 = Saturno e 6 = Urano): ";
    cin>> planetaTerra;
    cout<< "Informe o peso desejado: ";
    cin>> p;


    switch (planetaTerra){
    case 1:
    r1 = (p/10)*0.37;
    cout<< "O peso no Planeta Merc�rio �: " << r1;
break;
    case 2:
    r1 = (p/10)*0.88;
    cout<< "O peso no Planeta V�nus �: " << r1;
break;
    case 3:
    r1 = (p/10)*0.38;
    cout<< "O peso no Planeta Marte �: " << r1;
break;
    case 4:
    r1 = (p/10)*2.64;
    cout<< "O peso no Planeta J�piter �: " << r1;
break;
    case 5:
    r1 = (p/10)*1.15;
    cout<< "O peso no Planeta Saturno �: " << r1;
break;
    case 6:
    r1 = (p/10)*1.17;
    cout<< "O peso no Planeta Urano �: " << r1;
break;
    default:
            cout<< "Planeta inv�lido!";
    }
}
