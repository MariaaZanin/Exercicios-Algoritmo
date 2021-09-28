#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    int mes;
    string mesext;
    cout<< "Informe o número referente ao mês desejado: ";
    cin>> mes;

     if( mes < 1 or mes > 12)
    {
     cout<< "Número invalido!";
    }else if (mes==1)
    {
        mesext= "Janeiro";
    }else if (mes==2)
    {
        mesext= "Fevereiro";
    } else if (mes==3)
    {
        mesext= "Março";
    } else if (mes==4)
    {
        mesext= "Abril";
    } else if (mes==5)
    {
        mesext= "Maio";
    }else if (mes==6)
    {
        mesext= "Junho";
    }
     if (mes==7)
    {
        mesext= "Julho";
    }else if (mes==8)
    {
        mesext= "Agosto";
    }else if (mes==9)
    {
        mesext= "Setembro";
    }else if (mes==10)
    {
        mesext= "Outubro";
    }else if (mes==11)
    {
        mesext= "Novembro";
    }else if (mes==12)
    {
        mesext= "Dezembro";
    }

    cout<< " O número é referente ao mês: " <<mesext;

    cout<< "\n\n";
    system("Pause");

}
