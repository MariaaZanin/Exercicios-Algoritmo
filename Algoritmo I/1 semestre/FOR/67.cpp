#include <iostream>
using namespace std;
int main()
{
    int x, z, r1;

cout<< "Informe um numero positivo menor ou igual a 10: ";
cin>> x;

for (z=1;z<11; z++){
  r1= x*z;
  cout<< r1 << "\n";
}

    return 0;
}
