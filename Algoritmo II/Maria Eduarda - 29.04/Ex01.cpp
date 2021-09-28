#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;
void leitura();
void adiciona(string texto);

main()
{
    setlocale(LC_ALL, "Portuguese");

    leitura();

    cout<< "\n\n";
    system("pause");
}

void leitura(){
    ifstream arquivo;
    string texto, cidade;
    char texto1[150];
    bool cons= false;

    cout << "Informe o nome que deseja consultar: ";
    getline(cin, texto);
    fflush(stdin);

    arquivo.open("cidade.txt",ios::in);
    if(arquivo.is_open()){
        while(getline(arquivo, cidade)){
            if(texto == cidade){
                cons = true;
            }
        }
    if(cons==true)
        cout << "A cidade " << texto << " foi encontrado no arquivo!";
    else
        cout << "A cidade não foi encontrado no arquivo!";
        adiciona(texto);
    }else{
    cout<< "\n Erro ao encontrar o arquivo;";
    }
    arquivo.close();
}

void adiciona(string texto){
ofstream arquivo;
arquivo.open("cidade.txt",ios::app);
    if(arquivo.is_open()){
    arquivo<< "\n" <<texto;
    }else{
    cout<< "\n Erro ao encontrar o arquivo" << endl;
    }
    arquivo.close();
}
