#include <iostream>
using namespace std;

int main() {
    int a=5, b=6, c=7, t1, t2;

    t1=b;
    b=a;
    t2=c;
    c=t1;
    a=t2;

    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";

    return 0;
}