#include <iostream>
#include <locale>
#include <ctime>
#include <cstdlib>


using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    int numg, numi, cont=0;
    srand (time(NULL));
    numg = rand() % 100;
    do
    {
        cout<< "\n Informe um numero de [0-100] ";
        cin>> numi;
        cont++;

        if(numg > numi)
        {
            cout<< "\n O n�mero � maior";
        }else if (numg < numi){
             cout<< "\n O n�mero � menor";
        }
        else
            cout<< "\n Parab�ns voc� acertou!";
        cout<< "\n Em " << cont << " tentativas.";


    }
    while (numi != numg);


    }
