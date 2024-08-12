#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;

int main() {

    cin >> n; 

    for(int i=0; i<n; i++){
        for(int j=n; j>i; j--){
            cout << "*";
        }
        for(int j=0; j<i*2; j++){ // 0 2 4 6
            cout << " ";
        }
        for(int j=n; j>i; j--){
            cout << "*";
        }
        cout << "\n"; 
    }

    return 0;
}