#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<locale>

using namespace std;

void leitura(float &b1, float &b2, float &altura);
float calcula(float b1, float b2, float altura);
void mostra(float b1, float b2, float altura);

main()
{
    setlocale(LC_ALL, "Portuguese");
    int menu = -1, aux = 0;
    float  b1, b2, altura;

    do
    {
        system("cls");
        cout << "******MENU******" << endl;
        cout << "* 0 - Ler      *" << endl;
        cout << "* 1 - Calcular *" << endl;
        cout << "* 2 - Mostrar  *" << endl;
        cout << "* 3 - sair     *" << endl;
        cout << "****************"<< endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);//limpa o buffer do teclado

        switch(menu)
        {
        case 0 :
            system("cls");
            leitura(b1,b2,altura);
            aux = 1;
            break;

        case 1 :
            system("cls");
            if(aux == 0)
                cout << "\n É necessário informar os valores primeiro.";
            else
            {
                cout << "Resultado da área do trapézio é: " << calcula(b1, b2, altura) << endl;
            }
            getchar();
            break;

        case 2 :
            system("cls");
            if(aux == 0)
                cout << "É necessário informar os valores primeiro.";
            else
                mostra(b1, b2,altura);
            getchar();
            break;
        case 3 :
            system("cls");
            cout << "PROGRAMA FINALIZADO";
            getchar();
            break;
        };

    }
    while(menu != 3);

    cout<< "\n\n";
    system("pause");
}

void leitura(float &b1, float &b2, float &altura)
{
    cout<< "Digite o valor da base maior: ";
    cin>> b1;
    cout<< "Digite o valor da base menor: ";
    cin>>b2;
    cout<< "Digite a altura: ";
    cin>> altura;
}

float calcula(float b1, float b2, float altura)
{
    float resultado;

    resultado = ((b1+b2)*altura)/2;

}

void mostra(float b1, float b2, float altura)
{
    cout << "Base maior: " << b1 << endl;
    cout << "Base menor: " << b2 << endl;
    cout<< "Altura: " << altura << endl;
}

