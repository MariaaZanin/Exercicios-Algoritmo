/*
Faça um programa que recebe o número de horas trabalhadas, o valor do salário mínimo e o
número de horas extras trabalhadas, calcule e mostre o salário a receber , seguindo as seguintes
regras:
a) a hora trabalhada vale 1/8 do salário mínimo;
b) a hora extra vale ¼ do salário mínimo;
c) o salário bruto equivale ao numero de horas trabalhada multiplicada pelo valor da hora
trabalhada;
d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas
multiplicada pelo valor da hora extra.
e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.
*/
#include <iostream>
#include <cstdlib>
using namespace std;
main ()
{
    float sal_min,num_hora, ext_hora,r1,r2, sb, r_ext, pago;


    cout<< "Informe o salario minimo: ";
    cin>> sal_min;
    cout<< "Informe o numero de horas trabalhadas: ";
    cin>> num_hora;
    cout<< "Informe o numero de horas extras trabalhadas: ";
    cin>>ext_hora;

    r1 = num_hora + ((sal_min*1/8)/100);
    r2 = ext_hora + ((sal_min*1/4)/100);
    sb = num_hora * r1;
    r_ext = ext_hora * r2;
    pago = r_ext + sb;
    cout<< "\n A hora trabalhada foi: "<<r1;
    cout<< "\n O valor da hora extra foi: "<<r2;
    cout<< "\n O salario bruto e: "<<sb;
    cout<< "\n A quantia a receber das horas extras e: "<< r_ext;
    cout<< "\n O salario final e: "<< pago;
    cout<< "\n\n\n";
    system ("pause");
}
