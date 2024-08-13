#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        if(i==0){
            for(int j=0; j<n; j++){
                cout << "* ";
            }
            cout << "\n";
            continue;
        }

        for(int j=0; j<i; j++) cout << "* ";
        for(int j=0; j<n-i-1; j++) cout << "  ";
        cout << "* \n";
    }

    return 0;
}