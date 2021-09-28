#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>

using namespace std;
main()
{
    setlocale (LC_ALL, "Portuguese");

    int id, mg;
    float peso, r1=0, r2=0;

    cout<< "\n Informe a idade do paciente: ";
    cin>>id;
    cout<< "\n Informe o peso do paciente: ";
    cin>>peso;

    if(id>=12)
    {
        if(peso >= 50)
        {
            mg=1000;
        }
        else if(peso<50)
        {
            mg=875;
        }

    }
    else if(id<12)
    {
        if(peso>=5 and peso<=10)
        {
            mg=125;
        }
        else if(peso>=10.1 and peso<= 17.1)
        {
            mg=250;

        }
        else if(peso>=17.1 and peso<=25)
        {
            mg=357;

        }
        else if(peso>=25.5 and peso<=35)
        {
            mg=500;

        }
        else if(peso>35.1)
        {
            mg=750;

        }
    }

        r1= round(mg/33.33);


    cout<< "\n O paciente deve tomar " << r1 << " gotas.";
}

