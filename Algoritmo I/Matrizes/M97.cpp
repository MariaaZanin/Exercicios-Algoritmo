/*Escrever um algoritmo que leia uma matriz M[3][3].
Mostrar a matriz lida.
Encontrar o menor elemento da matriz mostr�-lo juntamente com sua posi��o.
*/
#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;
main()
{
    setlocale (LC_ALL, "Portuguese");
    srand(time(NULL));
        //L  C
    int M[3][3];
    int l, c, me, pl, pc; //pl = posi��o da linha e pc= posi��o da coluna

    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
             M[l][c] = rand()%100;
             cout<< M[l][c] << "\t";
        }
        cout<< "\n";
    }

    pl=0; pc=0;
    me = M[0][0];
    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
                if(M[l][c] < me){
                    me = M[l][c];
                    pl=l;
                    pc=c;
                }
        }

        }
        cout<< "\n O menor numero �: " <<me;
        cout<< "\n E esta na linha: "<< pl << " e esta na coluna: "<< pc;
        cout<< "\n Matriz = " <<me << "[" << pl << "][" << pc << "]";
}
