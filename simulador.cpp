//
// Created by user on 4/24/2019.
//
#include <iostream>
#include <cmath>
#include "simulador.h"
using namespace std;

simulador::simulador(double _x, double _y) {
    x=_x;
    y=_y;
    V=0;
}

//void simulador::potencial(double car, int a, int b) {
  //  V= V +(car * 9 * pow(10, 9) / pow((pow(a - x, 2) + pow(b - y, 2)), 1 / 2));
//}

void simulador::Simprimir() {
    cout<<x<<" "<<y<<endl;
}
void simulador::Cimprimir() {
    cout<<V<<endl;
}
double simulador::setV(double _V) {
    V=_V;
}