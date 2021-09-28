#include <iostream>
#include <locale>

using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    int n1;

     cout<< "Informe o mes desejado em numero: ";
     cin>> n1;
     switch (n1)
     {
     case 1:
        cout<< "O mês é janeiro.";
        break;
     case 2:
        cout<< "O mês é fevereiro. ";
        break;
         case 3:
        cout<< "O mês é março. ";
        break;
        case 4:
        cout<< "O mês abril. ";
        break;
        case 5:
        cout<< "O mês maio. ";
        break;
        case 6:
        cout<< "O mês é junho. ";
        break;
        case 7:
        cout<< "O mês é julho. ";
        break;
        case 8:
        cout<< "O mês é agosto. ";
        break;
        case 9:
        cout<< "O mês é setembro. ";
        break;
        case 10:
        cout<< "O mês é outubro. ";
        break;
        case 11:
        cout<< "O mês é novembro. ";
        break;
        case 12:
        cout<< "O mês é dezembro. ";
        break;
        default:
            cout<< "O mês e inválido! ";
     }


}
