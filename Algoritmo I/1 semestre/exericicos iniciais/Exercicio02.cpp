

/*
 Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 10% para o garçom.
 Elabore um algoritmo que após calcular o valor total do consumo, calcule a gorjeta e o total a pagar com a gorjeta.
 */

 #include <iostream>
 #include <cstdlib>

 using namespace std;
 main ()

 {
     //dados
     float precokg, consum, valor, gorj;
     //informacao
     cout<< "\n Informe o valor do KG: ";
     cin>> precokg;
     cout<< "\n Informe o consumo do cliente: ";
     cin>> consum;
     //calcular
     valor = (precokg/1000) * consum;
     gorj = (valor*10)/100;
     //resultado
     cout<< "\n O valor do consumo do cliente e: " << valor;
     cout<< "\n\n";
     cout<< "\n O valor da gorjeta e: " << gorj;
     cout<< "\n\n\n";
     system ("pause");
 }
