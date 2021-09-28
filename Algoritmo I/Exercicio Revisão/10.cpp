/*
Faça um programa que receba a idade, sexo de uma turma de quinze alunos,
calcule e mostre :
a. A médias de idade das pessoas do sexo masculino
b. A médias de idade das pessoas do sexo Feminino
c. A média geral de idade de todas as pessoas.
*/
#include <iostream>
#include <cstdlib>
#include <locale>
#include <ctime>

using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    char sexo;
    int id, i, masc = 0, fem = 0;
    float media = 0, mediamasc = 0, mediafem = 0, r1, r2, r3;


    for(i=1; i<=5; i++)
    {
        cout<< "\n Informe a idade do aluno: ";
        cin>>id;
    media= id+media;
        do
        {
            cout<< "\n Informe o sexo do aluno (F/M): ";
            cin>>sexo;
            sexo = toupper(sexo); // deixa a letra maiuscula
        }
        while(sexo != 'F' and sexo != 'M');

        if(sexo == 'M')
        {
            masc++;
            mediamasc= id + mediamasc;

        }
        else if(sexo == 'F')
        {
            fem++;
            mediafem= id + mediafem;

        }
    }

    r1= mediamasc/masc;
    r2= mediafem/fem;
    r3= media/5;

    cout<< "\n A média das idades entre os alunos é de: " <<r3;
    cout<< "\n A média da idade do sexo masculino é: "<<r1;
    cout<< "\n A média da idade do sexo feminino é: "<<r2;
    cout<< "\n\n";
    system("pause");
}
