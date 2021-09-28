#include <iostream>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    int id;

    cout<< "Informe a idade do nadador: ";
    cin>> id;

    switch (id){

case 5 ... 7:
    cout<< "O nadador é classificado em Infantil A.";
    break;
    case 8 ... 10:
    cout<< "O nadador é classificado em Infantil B.";
    break;
    case 11 ... 13:
    cout<< "O nadador é classificado em Juvenil A.";
    break;
    case 14 ... 17:
    cout<< "O nadador é classificado em Juvenil B.";
    break;
    case 18 ... 100:
    cout<< "O nadador é classificado em Adulto.";
    break;



    }

}
