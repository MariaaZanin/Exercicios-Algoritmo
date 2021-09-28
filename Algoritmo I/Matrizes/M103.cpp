#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
main()
{
    setlocale (LC_ALL, "Portuguese");
    int M[4][4]; // = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15, 16};
    int l, c, la, ca, cf; //la = linha anterior ca=coluna anterior
    //cf= coluna final;
    char enc;

    //pedindo valor p MATRIZ
    for(l=0; l<4; l++)
    {
        for(c=0; c<4; c++)
        {

            do
            {
                enc = 'N';
                cout<< "\n Informe o valor da Matriz [" << l << "][" << c << "] :";
                cin>> M[l][c];
                for(la=0; la<=1; la++) // for para comparar o valor das linhas
                {
                    if(la == l){ // compara o valor da L, ai se n tiver nenhum igual
                       cf=c;
                    }
                    else cf=4; // vai até o 4, pq é o limite das linhas

                    for(ca=0; ca<cf; ca++) //compara as colunas informada com a anterior
                    {
                        if(M[l][c] == M[la][ca])
                        {
                            cout<< "\n Valor já existe em M[" << la << "][" << ca << "]";
                            enc = 'S'; // entra como S por causa do WHILE
                            la = l; //  mantem o valor da linha
                            break; // sai fora do laço e reinicia até n repetir o valor
                        }
                    }
                }
            }
            while(enc == 'S'); // volta para o for e vai tudo dnv

        }
    }

    cout<< "\n\n";
    //mostrando a matriz
    for(l=0; l<4; l++)
    {
        for(c=0; c<4; c++)
        {
            cout<< M[l][c] << "\t";
        }
        cout<< "\n\n";
    }
}
