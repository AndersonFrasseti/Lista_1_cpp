#include <iostream>
using namespace std;
int main (){

int anosFumando, cigDia, precoCarteira,cigCarteira, multi, dividir, soma;

cout << "Quantos anos voce fuma?";
cin >> anosFumando;
cout << "Quantos cigarros por dia voce fuma?";
cin >> cigDia;
cout << "Qual o preco da carteira?";
cin >> precoCarteira;
cout << "quantos cigarros vem na carteira?\n";
cin >> cigCarteira;

multi = anosFumando * precoCarteira;
dividir = precoCarteira / cigCarteira;
soma = multi + dividir;

cout << "voce ja gastou\n" << soma << "\nem cigarros";


}