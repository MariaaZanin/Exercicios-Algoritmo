#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<locale>

using namespace std;


float funcSaque(float valor);

main()
{
    setlocale (LC_ALL, "Portuguese");

    int menu;
    float valor;

    do
    {
        system("cls");
        cout << "******MENU******" << endl;
        cout << "* 0 - Sair     *" << endl;
        cout << "* 1 - Saque    *" << endl;
        cout << "****************"<< endl;
        cout << "Sua escolha: ";
        cin >> menu;


        switch(menu)
        {
        case 0 :
            system("cls");
            cout << "PROGRAMA FINALIZADO";
            getchar();
            break;
        case 1 :
            getchar();
            cout<< "\n Informe o valor que deseja sacar: ";
            cin>> valor;
            funcSaque(valor);

        default:
            cout<< "Opção inválida!";
            getchar();
            break;

        }
    }
    while(menu != 0);
}

float funcSaque(float valor)
{
    int aux;
    int n100=0, n50=0, n20=0, n10=0, n5=0, n2=0;
    int resto, i;
    resto = valor;

    aux = valor;

    if(aux != valor)
    {
        cout<< "\n O valor é inválido, informe outro valor. ";
    }
    else  if(valor == 3)
    {
        cout<< "\n O valor é inválido, informe outro valor. ";
    }
    else
    {
        if(resto%2 != 0)
        {
            if(resto % 5 == 0){
                while(resto>0){
                    n5++;
                    resto -=5;
                }
            } else {
            while((resto - 2) >=5 && (resto - 2)%2 != 0){
                n5++;
                resto -=5;
            }
            }
        } while (resto >= 2){
        n2++;
        resto -= 2;
        }
        while(n2 >= 5){
            n2 -=5;
            n10++;
        }
        while(n5 >= 2){
            n5 -=2;
            n10++;
        }
        while(n10 >= 2){
            n10 -= 2;
            n20++;
        }
        while(n20 >= 2 && n10 >= 1){
            n20 -= 2;
            n10 -= 1;
            n50++;
        }
        while(n20 >= 5){
            n20 -= 5;
            n100++;
        }
        while(n50 >= 2){
            n50 -= 2;
            n100++;
        }
        cout<< "\n Foi sacado no total: ";
    }

    if(n100 >0)
    {
        cout<< "\n " << n100 << " de R$100,00";
    }
    if(n50 >0)
    {
        cout<< "\n " << n50 << " de R$50,00";
    }
    if(n20 >0)
    {
        cout<< "\n " << n20 << " de R$20,00";
    }
    if(n10 >0)
    {
        cout<< "\n " << n10 << " de R$10,00";
    }
    if(n5 >0)
    {
        cout<< "\n " << n5 << " de R$5,00";
    }
    if(n2 >0)
    {
        cout<< "\n " << n2 << " de R$2,00";
    }

    cout<< "\n\n";
    system("pause");
}
