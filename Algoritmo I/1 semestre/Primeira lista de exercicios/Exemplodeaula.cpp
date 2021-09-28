#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
main ()
{
    setlocale (LC_ALL, "Portuguese");
    int m1,m2,m5,m10,m20,m50,m100, saque, resto;

    cout<< "Informe o valor do saque: ";
    cin>> saque;

    m100=saque/100;
    resto=saque%100;
    m50=resto/50;
    resto=resto%50;
    m20=resto/20;
    resto=resto%20;
    m10=resto/10;
    resto=resto%10;
    m5=resto/5;
    resto=resto%5;
    m2=resto/2;
    resto=resto%2;
    m1=resto;

    cout<< "\n Número de cédulas: ";
    if(m100>0){
    cout<< "\n Cédulas de 100: " <<m100;
    }
    if(m50>0){
    cout<< "\n Cédulas de 50: " <<m50;
    }
    if(m20>0){
    cout<< "\n Cédulas de 20: " <<m20;
    }
    if(m10>0){
    cout<< "\n Cédulas de 10: " <<m10;
    }
    if(m5>0){
    cout<< "\n Cédulas de 5: " <<m5;
    }
    if(m2>0){
    cout<< "\n Cédulas de 2: " <<m2;
    }
    if(m1>0){
    cout<< "\n Cédulas de 1: " <<m1;
    }
    cout<< "\n\n\n";
    system ("pause");






}
