
#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
main ()
{
    setlocale(LC_ALL,"Portuguese");

    int  vmax[12], vmin[12], vdif[12];
    int i, mesmax, tempmax, mesmin, tempmin, contmin, contmax;
    float media;


    //TEMPERATURA MAXIMA:
    media=0;
    tempmax=0;
    mesmax=0;
    contmax=0;

    for(i=0; i <12; i++)
    {

        cout<< "\n Informe a maior temperatura do m�s [" << i << "]: ";
        cin>> vmax[i];
        media= media+vmax[i];

        if(vmax[i] > tempmax)
        {
            tempmax=vmax [i];
            mesmax=i;
        }
    }
    media = media/12;
    for (i=0; i<12; i++)
    {
        if(vmax[i] >= media)
        {
            contmax++;
        }
    }
    cout<< "\n A maior temperatura foi:  "<< tempmax << "\t no m�s: "<< mesmax;
    cout<< "\n A m�dia anual das temperaturas m�ximas � de: " << media;
    cout<< "\n Teve " << contmax << " temperaturas acima da m�dia \n\n";

    //TEMERATURA MINIMA:
    mesmin=0;
    tempmin=0;
    contmin=0;
    for(i=0; i<12; i++)
    {
        cout<< "\n Informe a menor temperatura m�s [" << i << "]: ";
        cin>>vmin[i];

        if(vmin[i] < tempmin)
        {
            tempmin=vmin[i];
            mesmin=i;
        }
        if(vmin[i]<0)
        {
            contmin++;
        }

    }
    cout<< "\n A menor temperatura foi:  "<< tempmin << "\t no m�s: "<< mesmin;
    cout<< "\n No ano teve: " << contmin <<  " temperaturas negaivas. \n\n" ;


    //DIFEREN�A DAS TEMPERATURAS:
    for(i=0; i<12; i++)
    {
        if (vmin[i]< 0){
            vdif[i]= vmax[i]+vmin[i];
        }else
        vdif[i]= vmax[i] - vmin[i];
        cout << "\n A diferen�a entre as temperaturas no m�s: " << i << " � de: " << vdif[i];
    }
    cout<< "\n\n";
    system("pause");



}
