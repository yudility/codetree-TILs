#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;

int main() {

    cin >> n;

    for(int k=0; k<2; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << "*";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    

    return 0;
}