#include <iostream>
using namespace std;

int main(){

    /*
. Leia dois valores inteiros para as variáveis A e B e efetue as operações de adição, subtração, 
multiplicação e divisão de A por B, apresentando ao final os resultados obtidos. Em seguida leia
dois valores lógicos C e D e efetue as operações de negação (de cada um dos valores), conjunção 
(E) e disjunção (OU), apresentando ao final os resultados obtidos
    */

int A,B,C,D;

cout << "digite o valor de A\n";
cin >> A;
cout << "digite o valor de B\n";
cin >> B;
cout << "\n\n";
cout << A + B ;
cout << "\n\n";
cout << A - B ;
cout << "\n\n";
cout << A * B ;
cout << "\n\n";
cout << A / B ;
cout << "\n\n";

cout << "digite dois valores logicos\n";
cin >> C >> D;

cout << "\n\n";
cout << C && D;
cout << "\n\n";
cout << C || D;
    
}