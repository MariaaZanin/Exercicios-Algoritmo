#include<iostream>


using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    float h, peso,pesoideal;
    char sexo;

    cout<< "\n Informe a sua altura: ";
    cin>> h;
    cout<< "\n Informe seu peso atual: ";
    cin>> peso;
    cout<< "\n Informe o seu sexo (F/M): ";
    cin>> sexo;
    sexo = toupper(sexo);
    if(sexo!='M' && sexo!='F'){
      do{
        cout<< "\n Sexo inv�lido, insira novamente (F/M):  ";
        cin>> sexo;
        sexo = toupper(sexo);
    }while(sexo!='M'&&sexo!='F');
    }

    if(sexo == 'M')
    {
        pesoideal = (72.7 * h) - 58;
    }
    else if(sexo == 'F')
    {
        pesoideal = (62.1*h)-44.7;
    }


    if(peso<pesoideal-3)
    {
        cout<< "\n Voc� est� ABAIXO do peso ideal.";
    }
    else if(peso>pesoideal+3)
    {
        cout<< "\n Voc� est� ACIMA do peso ideal.";
    }
    else if((peso>= pesoideal-3) or (peso<=pesoideal+3))
    {
        cout<< "\n Voc� est� no peso IDEAL.";
    }

    cout<< "\n\n";
    system("pause");
}
