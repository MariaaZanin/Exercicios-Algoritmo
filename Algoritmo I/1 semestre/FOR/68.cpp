/*
 Entrar com um n�mero e imprimir os seus divisores, informando se este n�mero � primo ou
n�o � primo.
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

    cout<< "Informe um n�mero: ";
    cin>>x;

    for (i=1; i <= x; i++){
    r1= x/i;
    if (r1 != 1){
        cout<< " O n�mero � divisivel por " << i;
    } else cout<<  "O n�mero � primo";
}
    cout<< "\n\n";
    system("pause");
}
