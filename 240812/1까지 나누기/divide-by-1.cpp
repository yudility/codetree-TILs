#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, cnt;

int main() {

    cin >> n;
    for(int i=1; i<=n; i++){
        cnt++;
        n=(n/i); 
        if(n/i<=1) {
            cnt++;
            break;
        }
    }

    cout << cnt ;

    return 0;
}