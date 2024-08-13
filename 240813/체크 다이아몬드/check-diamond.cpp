#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    
    cin >> n;

    for(int i=0; i<n; i++){ // 0 1 2 3 4 5 6 7
        for(int j=0; j<n-i-1; j++) cout << " ";  // 3 2 1 0 
        for(int j=0; j<=i; j++ ) cout << "* "; // 1 2 3 4 
        for(int j=i; j<n-i-1; j++) cout << " ";   // 2 1 0 0 
        
        cout << "\n";
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<i+1; j++) cout << " ";   //  0 1 2 
        for(int j=1; j<n-i; j++) cout << "* "; //  3 2 1
        for(int j=1; j<i; j++) cout << " ";   //  0 1 2
        cout << "\n";
  
    }
    return 0;
}