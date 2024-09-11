#include <iostream>
using namespace std;

int x1, x2, y1, y2;
int a1, a2, b1, b2;

int main() {
    
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;

    bool flag=true;

    if(x2 < a1 || x1 > a2 || y1 > b2 || b1 > y2){
        flag=false;
    }


    if(flag){
        cout << "overlapping";
    }else{ 
        cout << "nonoverlapping";
    }


    return 0;
}