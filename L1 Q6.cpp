#include <iostream>
using namespace std;

int main (){

    /*
    O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do 
distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Supondo que a percentagem 
do distribuidor seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de 
fábrica de um carro e escreva o custo ao consumidor.
  */

 int custoFabrica, distribuidor, impostos, resultadoD, resultadoI, consumidor;

 cout << "quato custa o custo de fabrica?\n";
 cin >> custoFabrica;

 resultadoD = custoFabrica/100 * 28;
 resultadoI = custoFabrica/100 * 45;

 consumidor = custoFabrica + resultadoD + resultadoI;

 cout << "o carro custa \t" << consumidor;

 system ("pause");



}

