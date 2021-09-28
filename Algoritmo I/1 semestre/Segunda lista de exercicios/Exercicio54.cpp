#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;
main ()
{
    setlocale (LC_ALL, "Portuguese");
    float m1, m2, r1;

    cout<< "Informe o consumo de luz em KwH do mês anterior: ";
    cin>> m1;
    cout<< "Informe o consumo de luz em KwH do mês atual: ";
    cin>> m2;

    if (m1)
        if (m1<=70){
            r1=m1*0.09;
    cout<< "O consumo de energia do mês anterior é:"<<r1;

    }else if (m1>=71 or m1<=150){
    r1=m1*0.20;
    cout<< "O consumo de energia do mês anterior é:"<<r1;
    }else if (m1>=151 or m1<=200){
    r1=m1*0.23;
    cout<< "O consumo de energia do mês anterior é:"<<r1;
    }else if (m1>=200){
        r1=m1*0.26;
        cout<< "O consumo de energia do mês anterior é:"<<r1;
    }
     if (m2)
        if (m2<=70){
            r1=m2*0.09;
    cout<< "\n O consumo de energia do mês atual é:"<<r1;

    }else if (m2>=71 or m2<=150){
    r1=m2*0.20;
    cout<< "\n O consumo de energia do mês atual é:"<<r1;
    }else if (m2>=151 or m2<=200){
    r1=m2*0.23;
    cout<< "\n O consumo de energia do mês atual é:"<<r1;
    }else if (m2>=200){
        r1=m2*0.26;
        cout<< "\n O consumo de energia do mês atual é:"<<r1;
    }
    cout<<"\n\n";
    system("Pause");
}
