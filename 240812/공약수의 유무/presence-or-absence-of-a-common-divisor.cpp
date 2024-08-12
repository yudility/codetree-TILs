#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a, b;

int main() {

    cin >> a >> b;
    bool flag=false;
    for(int i=a; i<=b; i++){
        if(1920%i==0 && 2880%i==0) {
            flag=true;
            break;
        }
    }

    if(flag) cout << 1;
    else cout << 0;

    return 0;
}