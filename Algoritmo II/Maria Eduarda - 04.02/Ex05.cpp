#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;
main()
{
    setlocale(LC_ALL, "");

    float pao, broa, total, doacao;

    cout<< "\n Informe a quantidade de p�o vendida no dia:";
    cin>> pao;
    cout<< "\n Informe a quantidade de broa vendida no dia: ";
    cin>>broa;

    pao= pao * 0.41;
    broa = broa * 3.5;

    total = pao + broa;
    cout<< "\n O lucro di�rio foi de: "<< total;
    doacao = total*0.05;
    cout<< "\n A arrecada��o di�ria de 5%: "<< doacao;

    cout<< "\n\n";
    system("pause");
}
