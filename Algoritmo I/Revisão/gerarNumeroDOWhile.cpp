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
    string resp; //palavras e char para 1 letra

    do
    {
        i++;
        cout<< "\n O programa rodou: "<< i << " vez." ;
        n = rand() % 200;  // os 200 � o limite de numero q pode ser sorteado, pode ser alterado
        cout<< "\n N�mero gerado: " <<n;

        if(n % 2 == 0){
        cout<< " ... o n�mero gerado � PAR";
        }else{
        cout<< " ... o n�mero gerado � IMPAR";
        }
    cout<< "\n Deseja continuar? Sim/Nao: ";
    cin>> resp;
    } while (resp == "SIM" or resp == "sim" or resp == "Sim");

    cout<< "\n\n";
}



    system("pause");
}

