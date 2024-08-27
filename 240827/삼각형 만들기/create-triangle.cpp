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
        for(int j=i+1; j <n; j++){
            for(int k=j+1; k<n; k++){
                int lx=10000, ly=10000,rx=-10000, ry=-10000;
                
                lx=min(a[i][0], min(a[j][0],a[k][0]));
                ly=min(a[i][1], min(a[j][1],a[k][1]));
                rx=max(a[i][0], max(a[j][0],a[k][0]));
                ry=max(a[i][0], max(a[j][1],a[k][1]));

                ret=max(ret, (rx-lx)*(ry-ly));
            }
        }
    }
    
    cout << ret;
    return 0;
}