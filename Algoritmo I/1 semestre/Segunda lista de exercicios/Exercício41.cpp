
#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
main ()
{
    setlocale (LC_ALL, "Portuguese");
    string n1;
    float id;

    cout<< "Informe seu nome: ";
    cin>> n1;
    cout<< "Informe a sua idade: ";
    cin>> id;

    if (id>0 and id<=10)
    {
        cout<< "\n O individuo " <<n1<< ", deverá pagar R$30,00, devido ter "<<id<< " anos";
    }
    else
    {

        if (id>=11 and id<=29)
            cout<< "\n O individuo " <<n1<< ", deverá pagar R$60,00, devido ter "<<id<< " anos";

    else
    {

        if (id>=30 and id<=45)
            cout<< "\n O individuo " <<n1<< ", deverá pagar R$120,00, devido ter "<<id<< " anos";

    else
    {

        if (id>=46 and id<=59)
            cout<< "\n O individuo " <<n1<< ", deverá pagar R$150,00, devido ter "<<id<< " anos";

    else
    {

        if (id>=60 and id<=65)
            cout<< "\n O individuo " <<n1<< ", deverá pagar R$250,00, devido ter "<<id<< " anos";

    else
    {

        if (id>=66)
            cout<< "\n O individuo " <<n1<< ", deverá pagar R$400,00, devido ter "<<id<< " anos";
    }
}
}
}
}
    cout<< "\n\n";
    system ("pause");
}



