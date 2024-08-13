#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a[10], ret=987654321;

int main() {

    cin >> n;

    for(int i=0; i < n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            ret = min(ret, abs(a[i]-a[j]));
        }
    }

    cout << ret ;

    return 0;
}