#include <iostream>
using namespace std;

int main (){

    /*
    Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o 
valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter.
    */

   float cotacao,reais,dolar,resultado;

   cout <<"qual o valor da cotacao?";
   cin >>cotacao;

   cout << "quantos dolares vc quer?";
   cin >> dolar;

   resultado = dolar * cotacao;

   cout << "seu valor em reais eh \t" << resultado;
}