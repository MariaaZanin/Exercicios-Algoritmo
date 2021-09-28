#include <iostream>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    int t;

    cout<< "Informe o tempo de corrida (15 min = 1, 30 min = 2, 1 hr = 3, 1 hr 30 min = 4 e 2 hr = 5): ";
    cin>> t;

    switch (t)
    {
    case 1:
        cout<< "As calorias perdidas foram 170.";
        break;
    case 2:
        cout<< "As calorias perdidas foram 350.";
        break;
    case 3:
        cout<< "As calorias perdidas foram 700.";
        break;
    case 4:
        cout<< "As calorias perdidas foram 1050.";
        break;
    case 5:
        cout<< "As calorias perdidas foram 1400.";
        break;
    default:
        cout<< "Tempo inválido!";
    }

}
