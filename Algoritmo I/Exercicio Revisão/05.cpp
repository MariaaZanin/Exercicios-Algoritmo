/*
Criar um algoritmo que leia a idade de uma pessoa e informar a sua classe
eleitoral:
� n�o-eleitor (abaixo de 16 anos)
� eleitor obrigat�rio (entre 18 e 65 anos)
� eleitor facultativo (entre 16 e 18 anos e maior de 65 anos)
*/
#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    int id;

    cout<< "Informe sua idade: ";
    cin>> id;

    switch (id){
    case 0 ... 15:
        cout<< "\n N�o-eleitor";
        break;
    case 16 ... 17:
        cout<< "\n Eleitor facultativo";
        break;
    case 18 ... 65:
        cout<< "\n Eleitor obrigat�rio";
        break;
    case 66 ... 100:
        cout<< "\n Eleitor facultativo";
        break;
    }
    cout<< "\n\n";
    system("pause");
}
