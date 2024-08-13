#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin >> n;

    int now=1;

    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int j=0; j<n; j++){
                cout << now++ << " ";
            }
        }else{
            for(int j=0; j<n; j++){
                cout << ++now << " ";
                now++;
            }
        }
        cout<< "\n";
    }

    return 0;
}