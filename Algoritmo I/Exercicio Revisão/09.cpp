/*
9) Escrever um algoritmo que gere e mostre 10 números ímpares
*/
#include <iostream>
#include <cstdlib>
#include <locale>
#include <ctime>

using namespace std;
main ()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL)); //para gerar numeros diferentes

    int i, n;
    i=0;

    for (i=0; i<10; i++){
        n = rand() % 100;

    if(n % 2 == 0){
        n++;
        cout<<"\n" <<n;
    } else
    cout<<"\n"<< n;

    }



    cout<< "\n\n";
    system("pause");
}
