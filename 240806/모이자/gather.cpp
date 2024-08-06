#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
int n, a[MAX], ret=987654321;

int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        int d=0;

        for(int j=0; j<n; j++){
            d+=(a[j]*abs(i-j));
        }
        ret=min(ret, d);
    }

    cout << ret;

    return 0;
}