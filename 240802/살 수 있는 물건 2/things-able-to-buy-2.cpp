#include <iostream>
using namespace std;

int main() {
    
    int n; 
    cin >> n;

    if(n>=3000) cout << "book";
    else if( n<3000 && n>=1000) cout << "mask";
    else if( n<1000 && n>=500) cout << "pen";
    else cout << "no";

    return 0;
}