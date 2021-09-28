#include <iostream>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    int c1;
    float s1,s2, r1;
    cout<< "Informe o seu cargo (Técnico = 1, Gerente = 2 ou Demais = 3): ";
    cin>> c1;
    cout<< "Informe o seu sálario: ";
    cin>> s1;

    switch (c1){
case 1:
    s2= s1*0.5;
    r1= s2+s1;
    cout<< "O salário do  Técnico com o aumento é: "<<r1;
    break;
    case 2:
    s2= s1*0.3;
    r1= s2+s1;
    cout<< "O salário do  Técnico com o aumento é: "<<r1;
    break;
    case 3:
    s2= s1*0.2;
    r1= s2+s1;
    cout<< "O salário do  Técnico com o aumento é: "<<r1;
    break;
    default:
        cout<< "Inválido!";

    }


}
