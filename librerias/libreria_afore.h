#ifndef SAT_H
#define SAT_H
#include <iostream>
#include <string>

using namespace std;

float ahorros(int edad, float sueldo){ //operaciones para los ahorros 
    float total = 0;
    float ahorro = sueldo * 0.10;
    for (int i = 0; i < 60 - edad; ++i){
        total += ahorro;
    }
    return total;
}
int años(int edad){ //operaciones para el tiempo que falta en jubilarse
    int restante;
    restante = 60 - edad;
    return restante;
}
#endif
