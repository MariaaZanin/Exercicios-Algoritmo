#include <iostream>
#include <locale>
using namespace std;
main ()
{
    setlocale (LC_ALL, "Portuguese");
    int num, i, r1;

    cout<< "\n Informe um número entre 1 a 10: ";
    cin>> num;

    while (num < 1 or num > 10)
    {
        cout<< "\n O número precisa estar entre 1 a 10 \n Informe novamente: ";
        cin>> num;
    }

    for (i = 1; i <=10; i++)
    {
        cout<< "\n " << i << " X " << num << " = " << (num*i);

    }
}
