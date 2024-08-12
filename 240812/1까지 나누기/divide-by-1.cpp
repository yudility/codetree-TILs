#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, cnt, t;

int main() {

    cin >> n;
    t=n;
    for(int i=1; i<=n; i++){
        if(t<=1) break;
        cnt++;
        t=(t/i); 
    }
    

    cout << cnt ;

    return 0;
}