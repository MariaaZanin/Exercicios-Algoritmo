/*
Construa um algoritmo para imprimir(na tela) Etiquetas:
Solicite as informa��es descritas na tela abaixo e
imprima conforme a op��o de colunas:
*/

#include <iostream>
#include <cstdlib>
#include <locale>


using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    string tam, desc, categ;
    int et,coluna, i;
    float cod, preco, r1, resto;


    cout<< "\n Informe o c�digo do produto: ";
    cin>> cod;
    cout<< "\n Informe a descri��o do produto: ";
    cin.ignore ();
    getline(cin,desc);
    cout<< "\n Informe a categoria do produto: ";
    cin.ignore ();
    getline(cin,categ);
    cout<< "\n Informe o tamanho do produto: ";
    cin>> tam;
    cout<< "\n Informe o pre�o do produto: ";
    cin>> preco;
    cout<< "\n Informe a quantidade de ETIQUETAS: ";
    cin>> et;
    cout<< "\n Informe a op��o de n�mero de colunas [1|2]: ";
    cin>>coluna;


    if(coluna == 1)
    {
        for (i=0; i<et; i++)
        {


            cout<< "\n ----------------------------";
            cout<< "\n" << desc << "\t   "<< categ;
            cout<< "\n TAM: " << tam << "\n \t\t      R$" <<  preco;
            cout<< "\n ----------------------------";
            cout<< "\n \n ";
        }
    }
    else if(coluna==2 and et%2 ==0)
    {
        et= et/2;
        for(i=0; i<et; i++)
        {
            cout<< "\n ---------------------------- \t\t\t\t ----------------------------" ;
            cout<< "\n " << desc << "\t   " << categ << "\t\t\t\t "<< desc << "\t   " << categ;
            cout<< "\n TAM: " << tam << " \t\t\t\t\t\t" " TAM: " << tam;
            cout<< "\n \t\t    R$ " <<  preco << "\t\t\t\t\t\t     R$ " << preco;
            cout<< "\n ---------------------------- \t\t\t\t ----------------------------";
            cout<< "\n \n";

        }
    }else if(et%2 == 1)
    {
        et=et/2;
        resto= et%2;
        for(i=0; i<et; i++){
            cout<< "\n ---------------------------- \t\t\t\t ----------------------------" ;
            cout<< "\n " << desc << "\t   " << categ << "\t\t\t\t "<< desc << "\t   " << categ;
            cout<< "\n TAM: " << tam << " \t\t\t\t\t\t" " TAM: " << tam;
            cout<< "\n \t\t    R$ " <<  preco << "\t\t\t\t\t\t     R$ " << preco;
            cout<< "\n ---------------------------- \t\t\t\t ----------------------------";
            cout<< "\n \n";

        }for (i=0; i< resto; i++){

            cout<< "\n ----------------------------";
            cout<< "\n " << desc << "\t   "<< categ;
            cout<< "\n TAM: " << tam << "\n \t\t      R$" <<  preco;
            cout<< "\n ----------------------------";
            cout<< "\n \n ";
        }
    }
    cout<< "\n\n";
    system("pause");
}
