#include <iostream>
#include <locale>
using namespace std;
#define TAM 10

main ()
{
    setlocale (LC_ALL, "Portuguese");

    int i, num;
    float soma = 0, media;

    for (i=1; i <= TAM; i++)
    {
        cout<< "\n Informe " << i << " n�mero: ";
        cin>> num;

        soma = soma+num;

    }

  cout<< "\n O valor de soma: "<< soma;
  media= soma/TAM;
  cout<< "\n O valor da m�dia �: "<< media;

  cout<< "\n\n";
}
