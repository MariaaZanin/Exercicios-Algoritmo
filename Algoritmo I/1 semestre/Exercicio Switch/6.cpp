/*
6 - A polícia rodoviária resolveu fazer cumprir a lei e cobrar dos motoristas o DUT. Sabendo-se que o mês
 em que o emplacamento do carro deve ser renovado é determinado pelo último número da placa do mesmo, crie
  um algoritmo que, a partir da leitura da placa do carro, informe o mês em que o emplacamento deve ser renovado.
  */
  #include <iostream>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    int n1;

    cout<< "Informe o ultimo número da placa do seu carro (de 1 a 12): ";
    cin>> n1;

     switch (n1)
     {
     case 1:
        cout<< "O embalamento deve ser renovado em janeiro.";
        break;
     case 2:
        cout<< "O embalamento deve ser renovado em fevereiro. ";
        break;
         case 3:
        cout<< "O embalamento deve ser renovado em março. ";
        break;
        case 4:
        cout<< "O embalamento deve ser renovado em abril. ";
        break;
        case 5:
        cout<< "O embalamento deve ser renovado em maio. ";
        break;
        case 6:
        cout<< "O embalamento deve ser renovado em junho. ";
        break;
        case 7:
        cout<< "O embalamento deve ser renovado em julho. ";
        break;
        case 8:
        cout<< "O embalamento deve ser renovado em agosto. ";
        break;
        case 9:
        cout<< "O embalamento deve ser renovado em setembro. ";
        break;
        case 10:
        cout<< "O embalamento deve ser renovado em outubro. ";
        break;
        case 11:
        cout<< "O embalamento deve ser renovado em novembro. ";
        break;
        case 12:
        cout<< "O embalamento deve ser renovado em dezembro. ";
        break;
         default:
             cout<< "Número inválido, tenta novamente!";

     }

}
