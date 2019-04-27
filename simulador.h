//
// Created by user on 4/24/2019.
//

#ifndef UNTITLED_SIMULADOR_H
#define UNTITLED_SIMULADOR_H

#include "carga.h"
struct punto{
    double x;
    double y;
    double V;
    punto(double _x, double _y);
    //void potencial(double car, int a, int b);
    void imprimir();
    double setV(double _V);
};

class simulador{
private:
    int x;
    int y;
    int m;
    int n;
    int c;
    //carga* total;
public:
    simulador(int _x,int _y, int _m,int _n,int _c);
    void simular();




};

#endif //UNTITLED_SIMULADOR_H
