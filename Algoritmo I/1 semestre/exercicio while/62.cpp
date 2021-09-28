/*
Criar um algoritmo que faça a leitura de 5 números pelo processo de sorteio
automático. Os números devem estar entre 0 e 100. Verifique:
62.1) Qual foi o maior numero Sorteado;
62.2) Qual foi o menor numero Sorteado;
62.3) A soma e média dos números Sorteados;
este exemplo
 gera 5 números aleatórios
srand(time(NULL)); inicializa o gerador
 x = rand() % 100; // x gera um numero aleatorio
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <iomanip>

using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    int n1 = 0, menor = 0, maior = 0, soma = 0;
    while (n1<5){
         int x = rand() % 100; // r = (rand() % 100) + 1;    int x = rand()%100;
        if (n1 == 5){
            menor = x;
            maior = x;
        } else if (x > n1){
        maior = x;
        }if (x < n1){
        menor = x;
        }
        soma += x;
        n1++;
    }
cout<< "\n O maior número é: "<<maior;
cout<< "\n O menor núemro é: "<<menor;
cout<< "\n A some é: "<<soma;

}
