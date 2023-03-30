#include <iostream>
using namespace std;
int main (){

/*
Leia o tempo de duração de um evento expresso em segundos, converta-o e mostre-o expresso 
em horas, minutos e segundos.
*/
    float tempoSegundos, minutos, horas, Segundos;

    cout << "digite o tempo em segundos";
    cin >> tempoSegundos;

    horas = tempoSegundos/3600;
    minutos = tempoSegundos/60;
    
    cout << "\nseu tempo em horas eh " << horas;
    cout << "\nseu tempo em minutos eh " << minutos;
    cout << "\nseu tempo em segundos eh " << tempoSegundos;

    system ("pause");




}