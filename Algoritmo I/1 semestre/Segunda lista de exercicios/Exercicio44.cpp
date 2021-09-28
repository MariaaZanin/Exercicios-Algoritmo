#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;
main ()
{
    setlocale(LC_ALL, "Portuguese");
    float h,id,r1,r2,r3,r4,r5,r6,r7,r8;
    string n1,s1;

    cout<< "Informe o seu nome: ";
    cin>> n1;
    cout<< "Informe o seu sexo (f = feminino ou m = masculino): ";
    cin>> s1;
    cout<< "Informe sua altura: ";
    cin>> h;
    cout<< "Informe sua idade: ";
    cin>> id;

    if (s1=="m")
    {
        if (h>1.7)
        {
            if (id<=20){
                r1=(72.7*h)-58;
            cout<< "\n O peso ideal de acordo com suas características é: "<<r1;}
            else
            {
                if (id>=21 or id<=39)
                {
                    r2=(72.7*h)-53;
                    cout<< "\n O peso ideal de acordo com suas características é: "<<r2;
                }
                else
                {
                    if (id>=40)
                    {
                        r3=(72.7*h)-45;
                        cout<< "\n O peso idel de acordo com suas caracteristicas é: "<<r3;
                    }
                }

            }
        }
        else
        {

            if (id<=40)
            {
                r4=(72.7*h)-50;
                cout<< "\n O peso ideal de acordo com suas características é: "<<r4;
            }
            else
            {
                if (id>40)
                {
                    r5= (72.7*h)-58;
                    cout<< "\n O peso ideal de acordo com suas características é: "<<r5;
                }

            }
        }
    }

    {
        if (s1=="f")
        {
            if (h>1.5)

                r6= (62.1*h)-45;
            cout<< "\n O peso ideal de acordo com suas características é: "<<r6;

        }
        else
        {
            if (h<=1.5)
            {
                if (id>=35)
                {
                    r7=(62.1*h)-45;
                    cout<< "\n O peso ideal de acordo com suas características é: "<<r7;
                }
                else
                {
                    if (id<35)
                    {
                        r8=(62.1*h)-49;
                        cout<< "\n O peso ideal de acordo com suas características é: "<<r8;
                    }
                }

            }
        }
        cout<< "\n\n";
        system("pause");
    }
}


