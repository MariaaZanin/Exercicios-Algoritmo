#include <iostream>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    int n1;
    cout<< "Informe o seu DDD: ";
    cin>>n1;
    switch(n1){
    case 61:
        cout<< "Seu DDD � de Brasilia.";
        break;
        case 71:
        cout<< "Seu DDD � de Salvador.";
        break;
    case 11:
        cout<< "Seu DDD � de S�o Paulo.";
        break;
        case 21:
        cout<< "Seu DDD � do Rio de Janeiro.";
        break;
        case 32:
        cout<< "Seu DDD � de Juiz de Fora.";
        break;
        case 19:
        cout<< "Seu DDD � de Campinas.";
        break;
        case 27:
        cout<< "Seu DDD � de Vitoria.";
        break;
        case 31:
        cout<< "Seu DDD � de Belo Horizonte.";
        break;
        default:
            cout<< "DDD inv�lido!";

    }


}
