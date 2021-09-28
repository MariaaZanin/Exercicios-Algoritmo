/*
Escrever umalgoritmo que lê o
a. número de um vendedor,
b. o seu salário fixo,
c. o total de vendas por ele efetuadas e
d. o percentual que ganha sobre este total de
vendas.
 Calcule e mostre o salário total do vendedor
 */

 #include <iostream>
 #include <cstdlib>

 using namespace std;
 main ()
 {
    setlocale(LC_ALL, "Portuguese");

     float nvend, sal,vend,per, sal2;

     cout<< "Informe o numero do vendedor: ";
     cin>> nvend;
     cout<< "Informe o salário fixo do vendedor: ";
     cin>> sal;
     cout<< "Informe o total de vendas efetuadas do vendedor: ";
     cin>> vend;
     cout<< "Informe o percentual que ganha sobre o total de vendas: ";
     cin>> per;

     sal2= sal +((vend*per)/100);
     cout<< "\n O novo salario do vendedor" << nvend << " é de: "<< sal2;
 }
