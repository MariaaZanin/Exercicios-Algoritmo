
#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;
main ()
{
    setlocale (LC_ALL, "Portuguese");
    float s1,credito;

    cout<< "Informe o saldo m�dio do �ltimo ano: ";
    cin>> s1;



    cout << "O valor do cr�dito e o resultado do cliente ser�: ";
    if (s1 > 601){
        credito = (s1*40)/100;
        cout<< "\n O credito � 40% e o resultado �:  "<<credito;
    }else{
    if (s1 >= 401 and s1<=600){
        credito = (s1*30)/100;
        cout<< "\n O cr�dito � 30% e o resultado �: "<<credito;

    }else{
    if (s1 >= 201 and s1<=400){
        credito = (s1*20)/100;
        cout<< "\n O cr�dito � 20% e o resultado �: "<<credito;

    }else
    {
        if (s1>=0 and s1<=200)
        cout<< "\n N�o possui nenhum cr�dito. ";

    }
    }
    }



    cout<< "\n\n\n";
    system ("pause");

}



