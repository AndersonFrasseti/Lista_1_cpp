#include <iostream>
using namespace std;
int main (){

int anosFumando, cigDia, precoCarteira, multi, dividir, soma;

cout << "Quantos anos voce fuma?";
cin >> anosFumando;
cout << "Quantos cigarros por dia voce fuma?";
cin >> cigDia;
cout << "Qual o preco da carteira?";
cin >> precoCarteira;

multi = anosFumando * precoCarteira;
dividir = precoCarteira / cigDia;
soma = multi + dividir;

cout << "voce ja gastou\n" << soma << "\nem cigarros";


}