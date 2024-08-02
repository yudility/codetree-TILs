#include <iostream>
using namespace std;

int main() {
    
    int a1, a2;
    char s1, s2;

    cin >> a1 >> s1;
    cin >> a2 >> s2;

    if( (a1 >= 19 && s1=='M') || (a2 >= 19 && s2=='M') ) cout << 1 << "\n";
    else cout << 0 << "\n";

    return 0;
}