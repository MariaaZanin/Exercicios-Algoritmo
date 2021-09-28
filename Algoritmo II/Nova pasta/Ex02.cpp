#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int tam;
    int mat[tam][tam];
    int l, c, aux = -1;
    do
    {
        cout<< "\n Informe o tamanho da matriz: ";
        cin>>tam;
    if(tam <= 4 || tam <= 9){
        for(l=0; l<tam; l++)
        {
            for(c=0; c<tam; c++)
            {
                if(l%2==0)
                {
                    if(c%2 == 0)
                    {
                        mat[l][c] = 1;
                    }
                    if(c%2 == 1)
                    {
                        mat[l][c]=0;
                    }
                }
                else
                {
                    if(c%2 == 0)
                    {
                        mat[l][c] = 0;
                    }
                    if(c%2 == 1)
                    {
                        mat[l][c]=1;
                    }
                }

            }
        }

        for(l=0; l<tam; l++)
        {
            for(c=0; c<tam; c++)
            {
                cout<< mat[l][c];
                cout<< "\t";
            }
            cout<<endl;
        }
        aux = 0;
    }else
    cout<<"Invalido! Tente novamente!" << endl;
    }while (aux == 0);


}
