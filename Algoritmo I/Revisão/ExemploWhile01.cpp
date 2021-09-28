#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib> //para usar o system pause
using namespace std;
main ()
{
    setlocale(LC_ALL,"Portuguese");
    {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL)); //para gerar numeros diferentes

    int id;
    char sexo; //palavras e char para 1 letra

    cout<< "\n Informe idade: ";
    cin>>id;
    cout<< "\n Informe o sexo? F/M: "<<sexo;
    cin>> sexo;


     while (sexo != 'M' and  sexo != 'F')
    {
      cout<< "\n Informe o sexo CORRETAMENTE M/F ";
      cin>> sexo;
    }


    cout<< "\n\n";
}
    system("pause");
}
