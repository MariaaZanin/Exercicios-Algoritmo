/*
Escrever um algoritmo para uma empresa que decide dar um reajuste a seus 584 funcion�rios de acordo com os seguintes crit�rios:
a) 50% para aqueles que ganham menos do que tr�s sal�rios m�nimos;
b) 20% para aqueles que ganham entre tr�s at� dez sal�rios m�nimos;
c) 15% para aqueles que ganham acima de dez at� vinte sal�rios m�nimos;
d) 10% para os demais funcion�rios.

Leia o nome do funcion�rio, seu sal�rio e o valor do sal�rio m�nimo. Calcule o seu novo sal�rio reajustado.
Escrever o nome do funcion�rio, o reajuste e seu novo sal�rio.
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
    cout<< "Informe o seu sal�rio: ";
    cin>> salatual;
    cout<< "Informe o sal�rio m�dio: ";
    cin>> salmin;

        QntSal = salatual / salmin;
    if (QntSal <= 3){
        reajuste = salatual * 0.5;
        salnovo= reajuste+salatual;
        cout<< "O sal�rio do funcionario "<< n1 << " o aumento � de: "<< reajuste <<" o salario novo � de: "<<salnovo;
    }else if ( QntSal > 3 or QntSal <= 10){
    reajuste= salatual * 0.2;
    salnovo= reajuste+salatual;
    cout<< "O sal�rio do funcionario "<< n1 << " o aumento � de: "<< reajuste <<" o salario novo � de: "<<salnovo;
    }else if ( QntSal > 10 or QntSal <= 20){
    reajuste= salatual * 0.15;
    salnovo= reajuste+salatual;
    cout<< "O sal�rio do funcionario "<< n1 << " o aumento � de: "<< reajuste <<" o salario novo � de: "<<salnovo;
    }else if ( QntSal > 21){
    reajuste= salatual * 0.10;
    salnovo= reajuste+salatual;
    cout<< "O sal�rio do funcionario "<< n1 << " o aumento � de: "<< reajuste <<" o salario novo � de: "<<salnovo;
    }


   cout<<"\n\n";
   system("Pause");
}
