#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;
struct estoque
{
    int cod;
    char nome[50];
    char unidade[50];
    float preco;
    int quant;
};

void cadastrar(estoque *x, int i);
void mostra(estoque *x,int i);
void consultar(estoque *x,int i);
void vender(estoque *x,int i,int quant2);

main()
{
    setlocale(LC_ALL,"Portuguese");
    estoque *x=new estoque[20];
    int menu = -1, indice = 0, cod2, aux, quant2;
    do
    {
        cout<< "*****MENU******" << endl;
        cout<< "0 - Sair" << endl;
        cout<< "1 - Cadastar produto" << endl;
        cout<< "2 - Listar produtos cadastrados" << endl;
        cout<< "3 - Consultar produto pelo  código"<< endl;
        cout<< "4 - Vender produto" << endl;
        cout<< "O que deseja fazer: ";
        cin>> menu;
        fflush(stdin);
        switch(menu){
        case 0:
            system("cls");
            cout << "PROGRAMA FINALIZADO";
            getchar();
            break;
        case 1:
            system("cls");
            if(indice == 20){
                cout << "Limite maximo de produtos ja cadastrados";
            }else{
            cadastrar(x, indice);
            indice++;
            }
            getchar();
            break;
        case 2:
            system("cls");
            if(indice <= 0){
                cout << "É necessário cadastrar produto primeiro";
                getchar();
                break;}
            else
                mostra(x, indice);
                getchar();
                break;
        case 3:
            system("cls");
            if(indice <= 0){
                cout << "É necessário cadastrar produto primeiro";
                getchar();
                break;}
            else{
            aux=0;
            cout<<"Digite o codigo: ";
            cin>>cod2;
            for(int i = 0; i<=indice; i++)
            {
                if(x[i].cod == cod2)
                {
                    consultar(x, i);
                    aux++;
                }
            }}
            if(aux == 0)
            {
                cout<<"Nao existe produto com este codigo no estoque!\n";
                getchar();
            }
                getchar();
                break;
        case 4:
            system("cls");
            if(indice <= 0){
                cout << "E necessario cadastrar produto primeiro";
                getchar();
                break;}
            else
                aux=0;
            cout<<"Digite o codigo: ";
            cin>>cod2;
            cout<<"Digite o quantidade: ";
            cin>>quant2;
            for(int i = 0; i<=indice; i++)
            {
                if(x[i].cod == cod2)
                {
                    vender(x, i, quant2);
                    aux++;
                }
            }
            if(aux == 0)
            {
                cout<<"Nao existe produto com este codigo no estoque!";
                getchar();
            }
            getchar();
            break;
        }}while(menu!=0);
}

 void cadastrar(estoque *x, int i){
    cout << "\n\nInforme o codigo do produto: ";
    cin >> x[i].cod;
    fflush(stdin);

    cout << "Informe o nome do produto: ";
    gets(x[i].nome);
    fflush(stdin);

    cout << "Informe a unidade do produto: ";
    gets(x[i].unidade);
    fflush(stdin);

    cout << "Informe o preco do produto: ";
    cin>> x[i].preco;
    fflush(stdin);

    cout << "Informe a quantidade de produto: ";
    cin >> x[i].quant;
    fflush(stdin);
 }

 void mostra(estoque *x,int i){
 int j;
 for(j=0;j<i;j++){
        cout << "Codigo: " << x[j].cod << endl;
        cout << "Nome: " << x[j].nome << endl;
        cout << "Unidade: " << x[j].unidade << endl;
        cout << "Preco: " << x[j].preco << endl;
        cout << "Quantidade: " << x[j].quant << endl;
        cout << "\n\n";
 }
 }

void consultar(estoque *x,int i){
    cout << "Codigo: " << x[i].cod << endl;
    cout << "Nome: " << x[i].nome << endl;
    cout << "Unidade: " << x[i].unidade << endl;
    cout << "Quantidade: " << x[i].quant << endl;
    cout << "Preco: " << x[i].preco << endl;
    cout << "\n\n";
    getchar();
}

void vender(estoque *x,int i,int quant2){
    if(x[i].quant >= quant2){
        cout<<"\n Quantidade do produto vendida!";
        x[i].quant -= quant2;}
    else
    {
        cout<<"Nao temos esta quantidade de produto!";
    }
    getchar();
}
