/*
) Supondo que a popula��o de uma cidade �A� seja de 90.000, com taxa de
crescimento de 3,1% ao m�s, e que a popula��o de uma cidade �B� seja de 200.000,
com taxa de crescimento de 1,5% aos m�s. Escrever um algoritmo e um programa
que calcule e escreva com quantos meses a cidade �A� ultrapassaria em popula��o da
cidade �B�, mantendo as taxas atuais de crescimento. Mostrar as popula��es das
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
