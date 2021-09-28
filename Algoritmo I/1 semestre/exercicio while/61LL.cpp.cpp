/*
) Supondo que a população de uma cidade “A” seja de 90.000, com taxa de
crescimento de 3,1% ao mês, e que a população de uma cidade “B” seja de 200.000,
com taxa de crescimento de 1,5% aos mês. Escrever um algoritmo e um programa
que calcule e escreva com quantos meses a cidade “A” ultrapassaria em população da
cidade “B”, mantendo as taxas atuais de crescimento. Mostrar as populações das
cidades
*/
#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    float a=90000, b= 200000;
    int mes;

    while (a < b){

        mes++;
        a = a * 1.031;
        b = b * 1.015;


    }
    cout<<fixed<<setprecision(2);
    cout<< mes << "\t meses, para a cidade A "<< a << "\t ter mais habitantes que a cidade B "<<b;



}
