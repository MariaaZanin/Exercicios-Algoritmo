#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib> //para usar o system pause
using namespace std;
main ()
{
    setlocale(LC_ALL,"Portuguese");
    {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL)); //para gerar numeros diferentes

    int n, i=0;
    char resp; //palavras e char para 1 letra

    cout<< "\n Deseja iniciar? S/N: "<<resp;
    cin>> resp;
    /* resp = 'S';
    cout<< "O resp" << resp; */


     while (resp == 's' or  resp== 'S')
    {
        i++;
        cout<< "\n O programa rodou: "<< i << " vez." ;
        n = rand() % 200;  // os 200 é o limite de numero q pode ser sorteado, pode ser alterado
        cout<< "\n Número gerado: " <<n;

        if(n % 2 == 0){
        cout<< " ... o número gerado é PAR";
        }else{
        cout<< " ... o número gerado é IMPAR";
        }
    cout<< "\n Deseja continuar? Sim/Nao: ";
    cin>> resp;
    }

    cout<< "\n\n";
}
    system("pause");
}


