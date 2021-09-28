
#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    string c1;
    float q1,r1,r2,r3,r4,r5,r6;

    cout<< "Informe o tipo de combustível (álcool=a ou gasolina=g): ";
    cin>> c1;
    cout<< "Informe a quantidade em litros: ";
    cin>> q1;

    if (c1=="a")
    {
            if (q1<=20){
                r1= q1*1.65;
            r2= r1 - ((r1*3)/100);
            cout<< "\n O valor total a ser pago do álcool com 3% de desconto é: "<<r2;
        }
        else if(q1>20){
                r1=q1*1.65;
                r3= r1-((r1*5)/100);
            cout<< "\n O valor total a ser pago do álcool com 5% de desconto é: " <<r3;

        }
    }
    else if (c1=="g")
        {
            if (q1<=15){
                r4=q1*2.85;
            r5= r4-((r4*3.5)/100);
            cout<< "\n O valor total a ser pago da gasolina com 3.5% de desconto é: "<<r5;
        }
        else
        {
            if (q1>15)
                 r4=q1*2.85;
                r6=r4-((r4*6)/100);
            cout<< "\n O valor total a ser pago da gasolina com 6% de desconto é: "<<r6;
        }

    }
    cout<< "\n\n";
    system ("pause");



}
