/*
73)Construa um algoritmo que para uma turma de 10 alunos determine :
a) A Média geral da Turma
b) A quantidade de alunos Aprovados com Media > 7
*/
#include <iostream>

using namespace std;
main ()
{
   float m1=0, n1;
   int i, ap=0, rep=0;

   for (i=1; i<=10; i++){
   cout<< "\n Informe a nota do aluno: ";
   cin>>n1;
   m1= m1+n1;

   if(n1>=7){
    ap++;
   }else
   rep++;
   }
   m1=m1/10;

   cout<< "\n A media geral da turma é de: " <<m1;
   cout<< "\n Os alunos aprovados foram: "<<ap;



}
