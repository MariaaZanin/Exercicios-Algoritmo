/*
Criar um algoritmo que fa�a a leitura de 5 n�meros pelo processo de sorteio
autom�tico. Os n�meros devem estar entre 0 e 100. Verifique:
62.1) Qual foi o maior numero Sorteado;
62.2) Qual foi o menor numero Sorteado;
62.3) A soma e m�dia dos n�meros Sorteados;
este exemplo
 gera 5 n�meros aleat�rios
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
cout<< "\n O maior n�mero �: "<<maior;
cout<< "\n O menor n�emro �: "<<menor;
cout<< "\n A some �: "<<soma;

}
