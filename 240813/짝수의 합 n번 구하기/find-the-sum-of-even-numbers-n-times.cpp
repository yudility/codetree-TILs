#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a, b, sum;

int main() {

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        sum = 0;
        for(int j=a; j<=b; j++){
            if(j%2==0) sum+=j;
        }
        cout << sum <<"\n";
    }

    return 0;
}