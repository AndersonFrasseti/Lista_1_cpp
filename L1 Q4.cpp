#include <iostream>
using namespace std;
int main(){

    /*
Leia um número inteiro N e um percentual qualquer e escreva qual o valor do percentual 
aplicado ao número.

    */

   float numero,porcento, resultado;

   cout << "qual numero voce quer?";
   cin >> numero;
   cout << "quantos porcento?";
   cin >> porcento;

  resultado = numero/100 * porcento;

   cout << "o resultado eh\t" << resultado;
  system ("pause");
}