#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;

int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=n-i; j<=n; j++){
            cout << j <<" ";
        }
        cout << "\n";
    }

    return 0;
}