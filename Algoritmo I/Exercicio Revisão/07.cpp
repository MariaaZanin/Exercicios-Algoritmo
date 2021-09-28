
#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    float v1,v2;
    int forma;

    cout<< "Informe o valor do produto: ";
    cin>>v1;
    cout<< "Informe a forma de pagamento (1=à vista dinheiro ou cheque, 2=À vista no cartão, 3= em 2x ou 4= em 3x): ";
    cin>>forma;

    if(forma == 1){
        v2= v1 - ((v1*10)/100);
        cout<< "\n O valor atualizado do produto com desconto 10% é de: " <<v2;
    }else if(forma==2){
         v2= v1 - ((v1*5)/100);
        cout<< "\n O valor atualizado do produto com desconto 5% é de: " <<v2;
    } else if (forma==3){
        cout<< "\n O valor não muda é: "<< v1;
    } else if (forma==4){
        v2= v1 + ((v1*10)/100);
        cout<< "\n O valor atualizado do produto com juros é de: " <<v2;
    }else
    cout<< "Opção inválida!";



    cout<< "\n\n";
    system("pause");
}
