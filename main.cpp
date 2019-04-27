#include <iostream>
#include "simulador.h"

using namespace std;
int main() {
    int c,x,y,m,n;
    //donde c=cantidad de cargas, x=longitud del eje x del plano, y=logintud del eje y del plano, m=cantidad de particiones del eje x, n=cantidad de particiones del eje y;
    cin>>c;
    cin>>x;
    cin>>y;
    cin>>m;
    cin>>n;
    simulador s(x,y,m,n,c);
    s.simular();

    return 0;
}
