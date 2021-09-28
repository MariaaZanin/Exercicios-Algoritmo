#include <iostream>

using namespace std;
int main ()
{
    int n;
n=0;
    while (n<20){  //pode usar o n++ ou n-- entra os parenteses no while, apenas com 1+1!
        cout<< "Maria Linda - " << n <<"\n";
        n++; // 2 + 2, e por ai vai, pode ser alterado o numero
 //n++; // n + 1 = n++ ou n - 1 = n--
 if (n == 10){
    break;
 }

    }
cout<< "\n Rotina finalizada \n";

    return 0;
}
