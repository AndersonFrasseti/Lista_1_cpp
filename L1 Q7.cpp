#include <iostream>
using namespace std;

int main(){

    /*
Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A 
fórmula de conversão é F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura 
em Celsius.
    */

   float celsius,fahrenheit;

   cout << "digite a temperatura em celsius\n";
   cin >> celsius;

   fahrenheit = (9*celsius+160)/5;

   cout << "sua temperatura eh " << fahrenheit;
}