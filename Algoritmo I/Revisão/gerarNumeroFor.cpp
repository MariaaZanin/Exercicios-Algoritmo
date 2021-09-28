#include <iostream>
#include <cstdio>
#include <cstdlib>//necessario para usando o rand
#include <ctime>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL)); //para gerar numeros diferentes

    int n, i;

    for (i = 1; i <= 10; i++) //inicio; quando para; como soma
    {
    n = rand() % 200;  // os 200 é o limite de numero q pode ser sorteado, pode ser alterado
    cout<< "\n";
    cout<< "\n Número gerado: " <<n;

    if(n % 2 == 0){
        cout<< " ... o número gerado é PAR";
    }else{
    cout<< " ... o número gerado é IMPAR";
    }

    }
    cout<< "\n\n";
}
