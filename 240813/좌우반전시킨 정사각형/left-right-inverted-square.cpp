#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++) {
            cout << n*i-j*i <<" ";
        }
        cout << "\n";
    }

    return 0;
}