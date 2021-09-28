/*
O sistema de avaliação de determinada disciplina, é composto por três provas. Faça
um algoritmo para calcular a média final de um aluno desta disciplina. Conforme
tabela abaixo classifique o aluno quanto ao seu conceito:
0 - 59 => I 60 - 69 => S 70 - 89 => B 90 - 100 => O
*/
#include <iostream>
#include <cstdlib>


using namespace std;
main ()
{


 float n1, n2, n3, r1;

 cout<< "Informe a primeira nota: ";
 cin>> n1;
 cout<< "Informe a segunda nota: ";
 cin>>n2;
 cout<< "Informe a terceira nota: ";
 cin>>n3;

 r1 = (n1+n2+n3)/3;

 if (r1>=0 or r1<=59)
 {
     cout<< "O seu resultado e I";
 } else if (r1>=60 or r1<=69)
 {
     cout<< "O resultado e S";
 } else if (r1>=70 or r1<=89)
    {
        cout<< "O resultado e B";
    } else if (r1>=90 or r1<=100)
    {
        cout<< "O resultado e O";
    }
    cout<< "\n\n\";
    system("pause");
}

