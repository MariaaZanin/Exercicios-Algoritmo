
/*
Faça um algoritmo que leia três notas, calcule e mostre a média ponderada dessas notas,
 considerando peso 3 para a primeira nora, também peso 3 para a segunda nota e peso 4 para a terceira nota.
 */

 #include <iostream>
 #include <cstdlib>
 using namespace std;
 main ()

  {
      //dado
      float n1, n2, n3, media;
      //informacao
      cout<< "\n Informe o primeiro numero: ";
      cin>> n1;
      cout<< "\n Informe o segundo numero: ";
      cin>> n2;
      cout<< "\n Informe o terceiro numero: ";
      cin>> n3;

      //calculo
      media = ((n1*3) + (n2*3) + (n3*4))/ n1+n2+n3;
      //resultado
      cout<< "\n O resultado da media ponderada e: " << media;
      cout<< "\n\n\n";

      system ("pause");


  }

