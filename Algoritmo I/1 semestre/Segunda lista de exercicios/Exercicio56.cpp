/*
Escrever um algoritmo para uma empresa que decide dar um reajuste a seus 584 funcionários de acordo com os seguintes critérios:
a) 50% para aqueles que ganham menos do que três salários mínimos;
b) 20% para aqueles que ganham entre três até dez salários mínimos;
c) 15% para aqueles que ganham acima de dez até vinte salários mínimos;
d) 10% para os demais funcionários.

Leia o nome do funcionário, seu salário e o valor do salário mínimo. Calcule o seu novo salário reajustado.
Escrever o nome do funcionário, o reajuste e seu novo salário.
*/

#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    string n1;
    float reajuste, salatual, salmin, salnovo, QntSal;

    cout<< "Informe o seu nome: ";
    cin>> n1;
    cout<< "Informe o seu salário: ";
    cin>> salatual;
    cout<< "Informe o salário médio: ";
    cin>> salmin;

        QntSal = salatual / salmin;
    if (QntSal <= 3){
        reajuste = salatual * 0.5;
        salnovo= reajuste+salatual;
        cout<< "O salário do funcionario "<< n1 << " o aumento é de: "<< reajuste <<" o salario novo é de: "<<salnovo;
    }else if ( QntSal > 3 or QntSal <= 10){
    reajuste= salatual * 0.2;
    salnovo= reajuste+salatual;
    cout<< "O salário do funcionario "<< n1 << " o aumento é de: "<< reajuste <<" o salario novo é de: "<<salnovo;
    }else if ( QntSal > 10 or QntSal <= 20){
    reajuste= salatual * 0.15;
    salnovo= reajuste+salatual;
    cout<< "O salário do funcionario "<< n1 << " o aumento é de: "<< reajuste <<" o salario novo é de: "<<salnovo;
    }else if ( QntSal > 21){
    reajuste= salatual * 0.10;
    salnovo= reajuste+salatual;
    cout<< "O salário do funcionario "<< n1 << " o aumento é de: "<< reajuste <<" o salario novo é de: "<<salnovo;
    }


   cout<<"\n\n";
   system("Pause");
}
