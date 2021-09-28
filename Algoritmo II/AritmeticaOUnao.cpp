#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;
main()
{
    int i;
    int *vet = new int[10];

    for(i=0;i<10;i++){
        vet[i] = rand()%50;
    }
    for(i=0;i<10;i++){
        cout<< vet[i] << "\t";
        cout<< &vet[i] << endl;
    }

    cout<< "\n ----------- \n";

    for(i=0;i<10;i++){
        *vet = rand() % 40;
        vet++;
    }
    for(i=0;i<10;i++){
        cout << *vet << "\t";
        cout<< vet << endl;
        vet++;
    }
}
