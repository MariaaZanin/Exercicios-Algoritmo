//fun��o sem parametro e sem retorno

#include<iostream>
using namespace std;
void mostraErro();

main()
{
    setlocale (LC_ALL, "Portuguese");
    int num;
    cout << " Informe n� 3 e 19 e impar ";
    cin >> num;
    if ( num < 3 || num > 19 )
    {
        mostraErro();
    }
    else
    {
        if ( num%2==0)
        {
            mostraErro();
        }

        else
        {
            cout << "\n Parab�ns voc� sabe ler enunciados!";
        }
    }
}



void mostraErro()
{
    cout << "\n****************** ";
    cout << "\n***VC NAO SABE**** ";
    cout << "\n**LER ENUNCIADOS** ";
    cout << "\n****************** ";
}
