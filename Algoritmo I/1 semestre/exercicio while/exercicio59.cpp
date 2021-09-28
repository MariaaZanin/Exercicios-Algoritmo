/*
João possui R$ 1.800,00. Gostaria de comprar um computador que custa R$ 2.000.
Ele gosta de aplicar seu dinheiro na caderneta de poupança, que paga sempre 1,5% ao
mês. Supondo que o preço do computador não mude, escreva um algoritmo e um
programa que calcule em quantos meses João irá poder comprar o computador,
mostrando a evolução de seu saldo na poupança, conforme o modelo abaixo.
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;
main ()

{
    float s1,j1;
    int mes=0;

    s1 = 1800;

    do{
        mes = mes + 1; //mes++
        j1 = (s1 * 1.5)/100;
        cout<< fixed<< setprecision(2);
        cout<< "\n mes "<< mes << "\t"<< s1;
        s1 = s1 + j1;
        cout<< "\t"<<j1<< "\t" << s1;


    }while (s1 < 2000);
    cout<< "\n\n";
    system("pause");
}
