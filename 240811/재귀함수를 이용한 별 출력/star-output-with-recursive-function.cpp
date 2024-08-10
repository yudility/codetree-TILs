#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;

void stars(int n){

    if(n==0) return;
    stars(n-1);

    for(int i=0; i<n; i++){
        cout <<"*";
    }
    cout << "\n";

}

int main() {
    cin >> n; 

    stars(n);
   
    return 0;
}