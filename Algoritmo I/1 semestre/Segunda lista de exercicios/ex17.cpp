/*
Fa�a um algoritmo que leia dois valores para as vari�veis A e B e efetue a troca dos valores de forma
que a vari�vel A passe a possuir o valor da vari�vel B e a vari�vel B passe a possuir o valor da vari�vel
A. Apresente os valores trocados.
*/
  //alterando para o padr�o do sistema operacional - setlocale(LC_ALL,""));
  //alterando para o padr�o da localidade corrente - setlocale(LC_ALL,NULL));
  //alterando para o portugues - setlocale(LC_ALL, "Portuguese");
#include <iostream>
#include <cstdlib>
#include <locale.h> // para usar caracteres em portugues , necessario para usar setlocale
using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    float a, b ,c;
    cout<<"---------Programa Troca Vari�vel A e B---------";
    cout<<"\n";
    cout<<"\n Digite um valor para a vari�vel A: ";
    cin>>a;
    cout<<"\n Digite um valor para a vari�vel B: ";
    cin>>b;
    cout<<"\n O valor da var�vel A � " << a; cout<<" .";
    cout<<"\n O valor da var�vel B � " << b; cout<<" .";
    c = a;
    a = b;
    b = c;
    cout<<"\n O valor foi trocado entre as duas Var�veis!";
    cout<<"\n O valor da var�vel A � " << a; cout<<" .";
    cout<<"\n O valor da var�vel B � " << b; cout<<" .";
    cout<<"\n\n";
    system("pause");
    }
// Sei que daria pra usar for por�m como est� no come�o e pouca pessoa sabe resolvi n�o complicar muito.
