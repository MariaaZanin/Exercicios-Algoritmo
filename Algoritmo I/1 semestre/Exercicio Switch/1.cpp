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
        cout<< "O m�s � janeiro.";
        break;
     case 2:
        cout<< "O m�s � fevereiro. ";
        break;
         case 3:
        cout<< "O m�s � mar�o. ";
        break;
        case 4:
        cout<< "O m�s abril. ";
        break;
        case 5:
        cout<< "O m�s maio. ";
        break;
        case 6:
        cout<< "O m�s � junho. ";
        break;
        case 7:
        cout<< "O m�s � julho. ";
        break;
        case 8:
        cout<< "O m�s � agosto. ";
        break;
        case 9:
        cout<< "O m�s � setembro. ";
        break;
        case 10:
        cout<< "O m�s � outubro. ";
        break;
        case 11:
        cout<< "O m�s � novembro. ";
        break;
        case 12:
        cout<< "O m�s � dezembro. ";
        break;
        default:
            cout<< "O m�s e inv�lido! ";
     }


}
