#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a[21][21], ret;

int main() {

    cin >> n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n-2; j++){
            int coins=0;
            coins = a[i][j] +a[i][j+1]+a[i][j+2];
            ret = max(ret, coins);
        }
    }

    cout << ret;
    


    return 0;
}