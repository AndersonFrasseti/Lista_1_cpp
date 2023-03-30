#include <iostream>
using namespace std;

int main(){

    /*
Leia dois valores inteiros nas variáveis Val1 e Val2, troque os seus conteúdos e escreva o 
resultado. Exemplo: Se o valor lido foi 10 para a variável Val1 e 11 para a variável Val2, depois 
da troca o algoritmo terá que escreva Val1 = 11 e Val2 = 10.
    */

   int val1,val2,val3;

   cout << "digite o valor um\n";
   cin >> val1;
   cout << "digite o valor dois\n";
   cin >> val2;

   val3 = val1;
   val1 = val2;
   val2 = val3;

   cout << "os valores trocados sao " << val1 << " "  << val2;

   cout << "\n\n";
   
   system ("pause");

}