#include <iostream>
using namespace std;
int main(){

int ano, mes, dia, anoAtual, idadeAnos, idadeDias;

cout << "qual o ano atual?\n";
cin >> anoAtual;
cout << "qual a sua data de nascimento?\n";
cout <<"dia\n";
cin >> dia;
cout << "mes\n";
cin >> mes;
cout << "ano\n";
cin >> ano;

idadeAnos = anoAtual - ano;
idadeDias = idadeAnos * 365;

cout << "seu tempo em dias eh " << idadeDias;




}