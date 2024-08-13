#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int now=9;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(now<=0 ) now=9;
            cout << now ;
            now--;
        }
        cout<<"\n";
    }

    return 0;
}