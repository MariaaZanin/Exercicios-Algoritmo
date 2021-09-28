#include <iostream>

using namespace std;
main ()
{
    int matriz [3][4];
    int l, c;

    for(l=0;l<3;l++){
        for(c=0;c<4;c++){
        cout<< "\n Informe um valor: ";
        cin>> matriz[l][c]; //informar um valor pra matriz
        }
        //caso queira informar um valor p matriz por ex:  matriz[l][c] = l;
    }
    for(l=0;l<3;l++){
        for(c=0;c<4;c++){
            cout<< matriz[l][c] << "\t";
        }
        cout<< "\n";
    }
    /*matriz[0][0]=0;
    matriz [0][1]=1;
    matriz [0][2]=2;
    matriz [0][3]=3;
    //segunda linha
    matriz [1][0]=4;
    matriz [1][1]=5;
    matriz [1][2]=6;
    matriz [1][3]=7;
    //terceira linha
    matriz [2][0]=8;
    matriz [2][1]=9;
    matriz [2][2]=10;
    matriz [2][3]=11;
    */

}
