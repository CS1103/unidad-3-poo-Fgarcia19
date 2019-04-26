//
// Created by user on 4/24/2019.
//

#ifndef UNTITLED_SIMULADOR_H
#define UNTITLED_SIMULADOR_H


class simulador {
public:
    double x;
    double y;
    double V;
    simulador(double _x, double _y);
    //void potencial(double car, int a, int b);
    void imprimir();
    double setV(double _V);
};


#endif //UNTITLED_SIMULADOR_H
