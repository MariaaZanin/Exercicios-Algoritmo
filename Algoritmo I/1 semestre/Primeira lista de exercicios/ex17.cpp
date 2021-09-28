/*
Faça um algoritmo que leia dois valores para as variáveis A e B e efetue a troca dos valores de forma
que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável
A. Apresente os valores trocados.
*/
  //alterando para o padrão do sistema operacional - setlocale(LC_ALL,""));
  //alterando para o padrão da localidade corrente - setlocale(LC_ALL,NULL));
  //alterando para o portugues - setlocale(LC_ALL, "Portuguese");
#include <iostream>
#include <cstdlib>
#include <locale.h> // para usar caracteres em portugues , necessario para usar setlocale
using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    float a, b ,c;
    cout<<"---------Programa Troca Variável A e B---------";
    cout<<"\n";
    cout<<"\n Digite um valor para a variável A: ";
    cin>>a;
    cout<<"\n Digite um valor para a variável B: ";
    cin>>b;
    cout<<"\n O valor da varável A é " << a; cout<<" .";
    cout<<"\n O valor da varável B é " << b; cout<<" .";
    c = a;
    a = b;
    b = c;
    cout<<"\n O valor foi trocado entre as duas Varáveis!";
    cout<<"\n O valor da varável A é " << a; cout<<" .";
    cout<<"\n O valor da varável B é " << b; cout<<" .";
    cout<<"\n\n";
    system("pause");
    }
// Sei que daria pra usar for porém como está no começo e pouca pessoa sabe resolvi não complicar muito.
