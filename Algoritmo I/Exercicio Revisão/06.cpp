/*
Criar um algoritmo que leia o nome e o total de pontos de três finalistas de um
campeonato de pingue-pongue e exibir a colocação da seguinte forma:
 Vencedor: XXXX ptos
 Segundo colocado: XXXX ptos
 Terceiro colocado: XXXX ptos

*/
#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    float p1, p2, p3, ma, me, mm;
    string nome1, nome2, nome3;

    cout<< "\n Informe o seu nome: ";
    cin>>nome1;
    cout<< "Informe o total de pontos: ";
    cin>>p1;

    cout<< "\n Informe o seu nome: ";
    cin>>nome2;
    cout<< "Informe o total de pontos: ";
    cin>>p2;

    cout<< "\n Informe o seu nome: ";
    cin>>nome3;
    cout<< "Informe o total de pontos: ";
    cin>>p3;

    //primeiro lugar
    /* PODERIA SER FEITO ASSIM:
    if(p1>p2 and p1>p3)
        ma=p1;
    if(p2>p1 and p2>p3)
        ma=p2;
    if(p3>p1 and p3>p2)
        ma=p3;
        MAS ASSIM É MAIS FACIL:
    */
    ma=p1;
    if(p2>ma)
        ma=p2;
    if(p3>ma)
        ma=p3;
    //terceiro lugar
    me=p1;
    if(p2<me)
        me=p2;
    if(p3<me)
        me=p3;

    //segundo lugar
    if(p1<ma and p1>me)
        mm=p1;
    if(p2<ma and p2>me)
        mm=p2;
    if(p3<ma and p3>me)
        mm=p3;

    cout<< "\n Vencedor: " << ma << " ptos.";
    cout<< "\n Segundo colocado: "  << mm << " ptos.";
    cout<< "\n Terceiro colocado: " <<me << " ptos.";
    cout<< "\n\n";
    system("pause");
}
