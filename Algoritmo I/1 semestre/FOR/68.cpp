/*
 Entrar com um número e imprimir os seus divisores, informando se este número é primo ou
não é primo.
*/
#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    float x, r1;
    int i;

    cout<< "Informe um número: ";
    cin>>x;

    for (i=1; i <= x; i++){
    r1= x/i;
    if (r1 != 1){
        cout<< " O número é divisivel por " << i;
    } else cout<<  "O número é primo";
}
    cout<< "\n\n";
    system("pause");
}
