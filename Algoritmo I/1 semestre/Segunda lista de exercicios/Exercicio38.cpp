
#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;
main ()
{
    setlocale (LC_ALL, "Portuguese");
    float s1,credito;

    cout<< "Informe o saldo médio do último ano: ";
    cin>> s1;



    cout << "O valor do crédito e o resultado do cliente será: ";
    if (s1 > 601){
        credito = (s1*40)/100;
        cout<< "\n O credito é 40% e o resultado é:  "<<credito;
    }else{
    if (s1 >= 401 and s1<=600){
        credito = (s1*30)/100;
        cout<< "\n O crédito é 30% e o resultado é: "<<credito;

    }else{
    if (s1 >= 201 and s1<=400){
        credito = (s1*20)/100;
        cout<< "\n O crédito é 20% e o resultado é: "<<credito;

    }else
    {
        if (s1>=0 and s1<=200)
        cout<< "\n Não possui nenhum crédito. ";

    }
    }
    }



    cout<< "\n\n\n";
    system ("pause");

}



