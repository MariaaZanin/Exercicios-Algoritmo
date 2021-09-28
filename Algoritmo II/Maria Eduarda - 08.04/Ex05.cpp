#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<iostream>

using namespace std;

void gerar_matriz(float (*notas)[3], int tam);
void mostrar_matriz(float (*notas)[3], int tam);
void Maior_Menor(float (*notas)[3], int tam);
void Media_notas(float (*notas)[3], int tam);


main()
{
    setlocale(LC_ALL, "Portuguese");
    int tam;
    float (*notas)[3];
    int menu = -1, indice = 0;

    do{
        system("cls");
        cout << "*****MENU*****" << endl;
        cout << "0 - Sair" << endl;
        cout << "1 - Ler Matriz" << endl;
        cout << "2 - Mostrar Matriz" << endl;
        cout << "3 - Maior e menor média" << endl;
        cout << "4 - Média superior ou inferior a 6" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);//limpa o buffer do teclado

        switch(menu)
        {
            case 0 :
                system("cls");
                cout << "PROGRAMA FINALIZADO";
                getchar();
                break;
            case 1 :
                system("cls");
                indice++;
                cout<<"Digite quantos alunos você deseja registrar: ";
                cin>>tam;
                notas = new float[tam][3];
                gerar_matriz(notas, tam);
                getchar();
                break;
            case 2 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler valores de v3";
                else{
                    mostrar_matriz(notas, tam);
                }
                getchar();
                break;
            case 3 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler valores de v3";
                else
                    Maior_Menor(notas, tam);
                getchar();
                break;

            case 4 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler valores primeiro";
                else
                    Media_notas(notas, tam);
                getchar();
                break;
        };
    }while(menu != 0);
    cout<< "\n\n";
    system("pause");
}

void gerar_matriz(float (*notas)[3], int tam){
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < 3; j++){
            cout<<"Digite as notas do aluno "<<i<<": ";
            cin>>notas[i][j];
        }
    }
}

void mostrar_matriz(float (*notas)[3], int tam){
    for(int i = 0; i < tam; i++){
         cout << "Aluno "<<i<<": ";
        for(int j = 0; j < 3; j++){
            cout << notas[i][j] << "\t";
        }
       cout<<endl;
    }
}

void Maior_Menor(float (*notas)[3], int tam){
    float maior=0, menor=0;
    for(int i = 0; i < tam; i++){
        float media=0;
        for(int j = 0; j < 3; j++){
            media+= notas[i][j];
        }
        if(i==0 || media> maior){
            maior = media;
        }
        if(i==0 || media< maior){
            menor = media;
        }
    }

    cout<<"A maior média foi: "<<maior/3 << endl;
    cout<<"A menor média foi: "<<menor/3 << endl;
}

void Media_notas(float (*notas)[3], int tam){
    int maior=0, menor=0;
    for(int i = 0; i < tam; i++){
        float media=0;
        for(int j = 0; j < 3; j++){
            media += notas[i][j];
        }
        media = media/3;
        if(media >= 6){
            maior++;
        }else{
            menor++;
        }
    }
    cout<<"Alunos com média maior ou igual a 6: "<<maior << endl;
    cout<< "Alunos com média menor que 6: "<<menor<< endl;
}
