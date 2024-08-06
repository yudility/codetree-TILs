#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a, b, ret=1; 

int main() {

    cin >> a >> b;

    for(int i=1; i<=b; i++){
        if(i%a==0) ret*=i;
    }

    cout << ret;

    return 0;
}