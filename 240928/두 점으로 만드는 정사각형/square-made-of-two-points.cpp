#include <iostream>
using namespace std;

int x1, x2, y1, y2;
int a1, a2, b1, b2;
int lx, ly, rx, ry;

int main() {

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;

    lx= min(x1, a1);
    ly= min(y1, b1);
    rx= max(x2, a2);
    ry= max(y2, b2);

    int side = max(rx-lx, ry-ly);

    cout << side*side;
    
    return 0;
}