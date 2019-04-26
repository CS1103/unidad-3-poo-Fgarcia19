//
// Created by user on 4/24/2019.
//

#include <iostream>
#include "carga.h"
#include <cmath>

using namespace std;

carga::carga(int _x, int _y) {
    int no;
    x = rand() % (_x)+(rand()%1000)*1.0/1000;
    y = rand() % (_y)+(rand()%1000)*1.0/1000;
    no = rand() % 2;
    if (no == 0) {
        car = 1.6 * pow(10, -19);
    } else { car = -1.6 * pow(10, -19); }
}

void carga::Cimprimir() {
    cout<<"Carga ="<<car<<" ,x: "<<x<<" ,y: "<<y<<endl;
}

double carga::potencial(double _px, double _py) {
    return 9*pow(10,9)*abs(car)/((pow((pow(x-_px,2)+pow(y-_py,2)),0.5)));
}
