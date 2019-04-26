#include <iostream>
#include "carga.h"
#include <stdlib.h>
#include "simulador.h"
#include <time.h>
using namespace std;
int main() {
    int c,x,y,m,n;
    double m0,n0,V0=0;
    cin>>c;
    cin>>x;
    cin>>y;
    cin>>m;
    cin>>n;
    m0=1.0*x/(m);
    n0=1.0*y/(n);
    carga* total[c];
    simulador* puntos[(m-1)][(n-1)];
    srand(time(NULL));
    for(int i=0;i<c;i++){
        total[i]=new carga(x,y);
    }
    for(int i=0;i<m-1;i++){
        for(int j=0;j<n-1;j++){
            puntos[i][j]=new simulador(m0,n0);
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
//    for(int i=0;i<m-1;i++){
//        for(int j=0;j<n-1;j++){
//            puntos[i][j]->imprimir();
//        }
//    }
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
    return 0;
}
