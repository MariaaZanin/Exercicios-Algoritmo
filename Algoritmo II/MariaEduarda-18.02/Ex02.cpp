#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<locale>
#include<iomanip>

using namespace std;

float salfinal(float sal,float val,float por,float inss);

main()
{
    setlocale(LC_ALL, "Portuguese");
    float  sal, val, por, inss;
    char aux;

    cout<< "\n Informe o seu salário fixo: ";
    cin>> sal;
    cout<< "\n Informe o valor vendido: ";
    cin>> val;
    cout<< "\n Deseja informar valores diferentes que 5% para comissão e 11% para INSS (S/N)?";
    cin>> aux;
    if(aux == 's' or aux == 'S'){
    cout<< "\n Informe a porcentagem  de comissão do valor: ";
    cin>> por;
    cout<< "\n Informe o valor dos descontos do INSS: ";
    cin>> inss;
    } else {
    por = 5;
    inss= 11;
    }

    salfinal(sal,val,por,inss);

    cout<< "\n\n";
    system("pause");
}

float salfinal(float sal,float val,float por,float inss)
{
    float resultado, soma, desconto, resultado2;

    soma = (val*por)/100;
    desconto = (sal*inss)/100;
    resultado = sal - desconto;
    resultado = resultado + soma;

    cout << fixed;
    cout << setprecision(2);
    cout<< "\n O salário final é: R$"<< resultado ;

    resultado2 = resultado/1100;

    cout << fixed;
    cout << setprecision(2);
    cout<< "\n O salário final é referente a " << resultado2 << " do salário mínimo. ";
}



