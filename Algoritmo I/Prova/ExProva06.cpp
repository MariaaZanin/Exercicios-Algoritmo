#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;
main()
{
    setlocale (LC_ALL, "Portuguese");

    char sexo;
    int id, p, i, masc=0, fem=0, a=0, b=1000;
    float sal, mediaid, r3,r2,r1, idmasc=0, idfem=0, r4, r5;

    cout<< "\n Informe a quantidade de pessoas participantes: ";
    cin>> p;

    for(i=0; i<p; i++){
    cout<< "\n Informe o sal�rio: ";
    cin>> sal;
    cout<< "\n Informe a idade: ";
    cin>>id;
    cout<< "\n Informe o sexo M/F: ";
    cin>> sexo;

    if(sexo == 'M' or sexo== 'm'){
        masc=masc+1;
        idmasc=idmasc+id;
    } else if(sexo=='F' or sexo=='f'){
        fem=fem+1;
        idfem=idfem+id;
    }

    mediaid= mediaid+id;

    //maior idade
    if(id>a){
        a=id;
    }
    //menor idade
    if(id<b){
        b=id;
    }
    }

    cout<< "\n O n�mero de participante �: "<< p;

    r1= (masc*100)/p;
    r2=(fem*100)/p;
    cout<< "\n A quantidade de pessoas do sexo masculino �: "<< r1 << "%";
    cout<< "\n A quantidade de pessoas do sexo feminino �: "<< r2 << "%";

    r3=mediaid/p;
    cout<< "\n A m�dia de idade dos participantes � de: "<< r3;

    cout<< "\n A maior idade �: "<< a;
    cout<< "\n A menor idade �: "<< b;

    r4 =idmasc/masc;
    r5=idfem/fem;

    cout<< "\n A m�dia de idade do sexo Masculino � de: "<< r4;
    cout<< "\n A m�dia de idade do sexo Feminino � de: "<< r5;

cout<< "\n\n";
system("pause");
}
