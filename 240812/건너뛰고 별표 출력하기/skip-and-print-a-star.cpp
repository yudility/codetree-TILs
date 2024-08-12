#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;

int main() {

    cin >> n;

    for(int i=1; i<n*2; i++){
        if(i<n){
            for(int j=0; j<i; j++){
                cout<< "*";
            }
            cout <<"\n";

        }
        else{
            for(int j=i; j<n*2; j++){
                cout<< "*";
            }
            cout <<"\n";

        }
        cout <<"\n";
    }

    return 0;
}