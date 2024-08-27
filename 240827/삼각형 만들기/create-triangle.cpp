#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, ret, a[100][2];

int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i][0] >> a[i][1];
    }


    for(int i=0; i<n; i++){
        for(int j=0; j <n; j++){
            for(int k=0; k<n; k++){
                if(a[i][0]!=a[j][0] || a[i][1] !=a[k][1]) continue;
        
                ret=max(ret, abs(a[i][0]-a[k][0])*abs(a[i][1]-a[j][i]));
            }
        }
    }
    
    cout << ret;
    return 0;
}