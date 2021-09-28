#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;
void leitura();

main()
{
    setlocale(LC_ALL,"Portuguese");

    leitura();

    cout<< "\n\n";
    system("pause");
}

void leitura()
{
    ifstream arquivo;
    string texto;
    char x;
    int soma = 0;

    cout << "\n Informe o nome do arquivo que deseja abrir: ";
    getline(cin, texto);
    fflush(stdin);
    texto += ".txt";
    arquivo.open(texto, ios::app);

    if(arquivo.is_open())
    {
        cout<< "\n Você encontrou o arquivo";
        cout<< "\n O conteúdo do arquivo: "<< endl;
       while(arquivo.get(x))
        {
            cout << x;
            if(x != '\n')
            {
                soma++;
            }
        }
        cout<< "\n Existem " << soma << " caracteres no arquivo";
    }
    else
    {
        cout << "Erro ao abrir o arquivo.";
    }
}
