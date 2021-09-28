#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

void funcGeraM(int A[3][3]);
void funcMostraM(int M[3[3], string infoM);
void funcGeraS(int A[3][3], int B [3][3], int S [3][3]);
void funcMostraS(int A[3][3], int B [3][3], int S [3][3]);

main()
{
    srand(time(NULL));
    setlocale (LC_ALL, "Portuguese");
    int A[3][3], B [3][3], P[3][3], S[3][3];
    int op;

    do{
         cout<< "\n **** MENU **** \n";
         cout<< "\n 1- Gera Matriz A[3]";
         cout<< "\n 2- Gera Matriz B [3]";
         cout<< "\n 3- Calcula Matriz S [3]";
         cout<< "\n 4- Calcula Matriz P[3]";
         cout<< "\n 5- Sair";
         cout<< "\n Informe opção: ";
         cin>>op;

         if(op == 1){
            funcGeraM(A);
            funcMostraM(A, "Matriz A");
         }else if(op==2){
             funcGeraM(B);
            funcMostraM(B, "Matriz B");
         }else if (op==3){
         funcGeraS(A,B,S);
         funcMostraS(A,B,S, "Matriz S ");
         }else if(op==4){
            funcGeraS(A,B,P);
         funcMostraS(A,B,P, "Matriz P");
         }

    }while(op>=1 and op<=4);

    cout<< "\n FIM PROGRAMA";
    cout<< "\n\n\n";

}

void funcGeraM(int M[3][3])
{
    int l, c;
    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
            M[l][c]=rand()%11;
        }
    }
}
void funcMostraM(int M[3[3], string infoM){
      int l, c;
      cout<< "\n Mostrando " << infoM << " : \n";
    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
            cout<< M[l][c]<< "\t";
        }
        cout<< "\n\n";
    }
}
void funcGeraS(int A[3][3], int B [3][3], int S [3][3]){
 int l, c;

    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
            S[l][c]= A[l][c] + B[l][c];
        }
        cout<< "\n\n";
    }
    }
    void funcMostraS(int A[3][3], int B [3][3], int S [3][3]){
    int l, c;
      cout<< "\n Mostrando Matriz A \t Matriz B \t Matriz Soma \n";
    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
            cout<< A[l][c]<< "\t";
        }
        cout<< " | ";
        for(c=0;c<3;c++){
            cout<< B[l][c]<< "\t";
        }
        cout<< " | ";
        for(c=0;c<3;c++){
            cout<< S[l][c]<< "\t";
        }
        cout<< " | ";
        cout<< "\n\n";
    }}

    void funcGeraS(int A[3][3], int B [3][3], int P[3][3]){
    int l, c, ll, cp;
    int sp;
    for(ll=0; ll<3; ll++){
        for(l=0; l<3;l++){
            sp=0;;
            for(c=0;c<3.c++){
                sp=sp+ A[ll][c] * B[c][l];
            }
            P[ll][l]=sp;
        }
    }
    }

