#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

int quantidade();
void Calcula(int quantidade);

main() {
    setlocale(LC_ALL,"Portuguese");
    int quant = quantidade();
    if(quant == -1)
        return 0;


    Calcula(quant);
}

int quantidade() {
    ifstream arquivo;
    char x;
    int quant = 0;

    arquivo.open("Ex02.txt",ios::in);
    if(arquivo.is_open()){

        while (arquivo.get(x)){
            if(x == ';')
                quant ++;
        }
    } else {
        cout << "Erro ao abrir o arquivo." << endl;
        return -1;
    }

    arquivo.close();

    return quant;
}

void Calcula(int quant) {
    ifstream arquivo;
    string numero;
    char x;
    float numero2, soma, media, maior, menor;
    int line_idx = 0;

    float *parray = new float[quant];

    arquivo.open("Ex02.txt",ios::in);
    if(arquivo.is_open()){

        while (arquivo.get(x)){
            if ( !isalpha(x) && x != ';' && x != ' ' && x != '\t' && x != '\r' && x != '\n' && x != '\x0b'){
                numero += x;

                numero2 = stof(numero);
            }

            if(x == ';'){
                numero = "";
                *(parray + line_idx) = numero2;
                line_idx ++;
            }
        }

        // Calcula soma
        for(int i = 0; i <= quant; i++){
            soma += *(parray + i);
        }

        // Calcula média
        media = soma/quant;

           quant -= 1;
        for(int i = 0; i <= quant;i++){
            if(i == 0) {
                maior = *(parray + i);
                menor = *(parray + i);
            } else {
                if(*(parray + i) > maior)
                    maior = *(parray + i);
                if(*(parray + i) < menor)
                    menor = *(parray + i);
            }

        }

        cout << "Soma dos números do arquivo: " << soma << endl;
        cout << "Média dos números do arquivo: " << media << endl;
        cout << "Maior número do arquivo: " << maior << endl;
        cout << "Menor número do arquivo: " << menor << endl;

    } else
        cout << "Erro ao abrir o arquivo." << endl;

    arquivo.close();
}
