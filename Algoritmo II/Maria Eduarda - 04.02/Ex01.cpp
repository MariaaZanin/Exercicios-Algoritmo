#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");

    char resp;
    int cod, quant, q1=0,q2=0,q3=0,q4=0,q5=0,q6=0,q7=0,q8=0;
    double total, v1, v2,v3,v4,v5, v6, v7, v8;


    cout.width(15);
    cout << "DESCRIÇÃO";
    cout.width(15);
    cout << "CÓDIGO";
    cout.width(20);
    cout << "VALOR R$" << endl;

    cout.width(15);
    cout << "Cachorro quente";
    cout.width(15);
    cout << "10";
    cout.width(20);
    cout << "12.00" << endl;

    cout.width(15);
    cout << "Bauru Simples";
    cout.width(15);
    cout << "11";
    cout.width(20);
    cout << "16.50" << endl;

    cout.width(15);
    cout << "Bauru com ovo";
    cout.width(15);
    cout << "12";
    cout.width(20);
    cout << "18.00" << endl;

    cout.width(15);
    cout << "Hambúguer";
    cout.width(15);
    cout << "13";
    cout.width(20);
    cout << "22.00" << endl;

    cout.width(15);
    cout << "Cheeseburguer";
    cout.width(15);
    cout << "14";
    cout.width(20);
    cout << "20.00" << endl;

    cout.width(15);
    cout << "Torrada";
    cout.width(15);
    cout << "15";
    cout.width(20);
    cout << "10.00" << endl;

    cout.width(15);
    cout << "Refrigerante";
    cout.width(15);
    cout << "1";
    cout.width(20);
    cout << "8.00" << endl;

    cout.width(15);
    cout << "Suco Natural";
    cout.width(15);
    cout << "2";
    cout.width(20);
    cout << "10.50" << endl;

    resp = 'n';
    total = 0;
    do
    {
        cout<< "\n Informe o código da comida que deseja comprar: ";
        cin>> cod;
        cout<< "\n Informe a quantidade: ";
        cin>> quant;

        switch(cod)
        {
        case 10:
            v1 = 12 * quant;
            q1 = q1+quant;
            total = total+v1;
            break;
        case 11:
            v2 = 16.5 * quant;
            q2 = q2+quant;
            total = total+v2;
            break;
        case 12:
            v3 = 18 * quant;
            q3 = q3+quant;
            total = total+v3;
            break;
        case 13:
            v4 = 22* quant;
            q4 = q4+quant;
            total = total+v4;
            break;
        case 14:
            v5 = 20 * quant;
            q5 = q5+quant;
            total = total+v5;
            break;
        case 15:
            v6 = 10 * quant;
            q6 = q6+quant;
            total = total+v6;
            break;
        case 1:
            v7= 8 * quant;
            q7 = q7+quant;
            total = total+v7;
            break;
        case 2:
            v8 = 10.5 * quant;
            q8 = q8+quant;
            total = total+v8;
            break;
        default:
            cout<< "Código inválido, tente novamente!";
        }
        cout<< "\n Deseja comprar novamente (S/N): ";
        cin>>resp; // usar o TOUPPER
    }
    while((resp == 'S') or (resp == 's'));
    cout<< "\n\n";

    cout.width(15);
    cout << "DESCRIÇÃO";
    cout.width(15);
    cout << "QNT";
    cout.width(20);
    cout << "VALOR DO ITEM" << endl;

    if((v1>0) and (q1>0))
    {
        cout.width(15);
        cout << "Cachorro quente";
        cout.width(15);
        cout << q1;
        cout.width(20);
        cout << v1 << endl;

    }

    if((v2 > 0) and (q2>0))
    {
        cout.width(15);
        cout << "Bauru Simples";
        cout.width(15);
        cout << q2;
        cout.width(20);
        cout << v2 << endl;
    }

    if((v3 > 0) and (q3>0))
    {
        cout.width(15);
        cout << "Bauru com Ovo";
        cout.width(15);
        cout << q3;
        cout.width(20);
        cout << v3 << endl;
    }

    if((v4 > 0) and (q4>0))
    {
        cout.width(15);
        cout << "Hambúguer";
        cout.width(15);
        cout << q4;
        cout.width(20);
        cout << v4 << endl;
    }

    if((v5 > 0) and (q5>0))
    {
        cout.width(15);
        cout << "Cheeseburguer";
        cout.width(15);
        cout << q5;
        cout.width(20);
        cout << v5 << endl;
    }

    if((v6 > 0) and (q6>0))
    {
        cout.width(15);
        cout << "Torrada";
        cout.width(15);
        cout << q6;
        cout.width(20);
        cout << v6 << endl;
    }

    if((v7 > 0) and (q7>0))
    {
        cout.width(15);
        cout << "Refrigerante";
        cout.width(15);
        cout << q7;
        cout.width(20);
        cout << v7 << endl;
    }

    if((v8 > 0) and (q8>0))
    {
        cout.width(15);
        cout << "Suco Natural";
        cout.width(15);
        cout << q8;
        cout.width(20);
        cout << v8 << endl;
    }
    cout<< "\n Total do Pedido: " << total;

    cout<< "\n\n";
    system("pause");
}

