#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, u;

int main() {

    cin >> n;
    int now=1;
    for(int j=n-1; j>=0; j--){
        if(u==0){
            for(int i=n; i>=0; i--){
                a[i][j] = now;
                now++;
            }
            u=1;
        }else{
            for(int i=0; i<n; i++){
                a[i][j] = now;
                now++;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}