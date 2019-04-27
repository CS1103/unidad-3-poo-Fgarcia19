#include <iostream>
#include "simulador.h"

using namespace std;
int main() {
    int c,x,y,m,n;
    cin>>c;
    cin>>x;
    cin>>y;
    cin>>m;
    cin>>n;
    simulador s(x,y,m,n,c);
    s.simular();

    return 0;
}
