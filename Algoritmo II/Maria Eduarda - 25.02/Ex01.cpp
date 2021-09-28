#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<locale.h>
#include <bits/stdc++.h>

using namespace std;
int MDC(int n1, int n2);

main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    cout << "Informe um valor: ";
    cin >> n1;
    cout << "Informe outro valor: ";
    cin >> n2;


    cout << "\n O MDC de ambos os números é: " << MDC(n1,n2);

    cout<< "\n\n";
    system("Pause");
}

int MDC(int n1, int n2){
     if (n1 < n2) {
        return MDC(n2, n1);
    }
    else {
        if (n1 % n2 == 0)
            return n2;
        else
            return MDC(n2, n1 % n2);
    }
}
