//
// Created by user on 4/24/2019.
//
#include <iostream>
#include <cmath>
#include "simulador.h"
#include <time.h>
#include <stdlib.h>
using namespace std;

punto::punto(double _x, double _y) {
    x=_x;
    y=_y;
    V=0;
}

//void simulador::potencial(double car, int a, int b) {
  //  V= V +(car * 9 * pow(10, 9) / pow((pow(a - x, 2) + pow(b - y, 2)), 1 / 2));
//}

void punto::imprimir() {
    cout<<"x: "<<x<<", y: "<<y<<", V: "<<V<<endl;
}
double punto::setV(double _V) {
    V=_V;
}

simulador::simulador(int _x, int _y, int _m, int _n,int _c) {
    x=_x;
    y=_y;
    m=_m;
    n=_n;
    c=_c;
}

void simulador::simular() {
    double m0,n0,V0=0;
    m0=1.0*x/(m);
    n0=1.0*y/(n);
    carga* total[c];
    punto* puntos[(m-1)][(n-1)];
    srand(time(NULL));
    for(int i=0;i<c;i++){
        total[i]=new carga(x,y);
    }
    for(int i=0;i<m-1;i++){
        for(int j=0;j<n-1;j++){
            puntos[i][j]=new punto(m0,n0);
            n0=n0+1.0*y/(n);
            if(j==n-2) {
                n0 = 1.0 * y / (n);
            }
        }
        m0=m0+1.0*x/(m);
    }
    cout<<"Las cargas son: \n";
    for(int i=0;i<c;i++){
        total[i]->Cimprimir();
    }
    cout<<"Los puntos son \n";
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            for(int k=0;k<c;k++){
                V0=V0+total[k]->potencial(puntos[i][j]->x,puntos[i][j]->y);
                if(k==c-1){
                    puntos[i][j]->setV(V0);
                    V0=0;
                }
            }
        }
    }

    for(int i=0;i<m-1;i++){
        for(int j=0;j<n-1;j++){
            puntos[i][j]->imprimir();
        }
    }
}