#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a[100][2], ret=1600000001;


int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i][0] >> a[i][1];
    }

    for(int i=0; i<n; i++){

        int ex = 0;
        int lx=40000, ly=40000, rx=0, ry=0;

        for(int j=0; j<n; j++){
            if(j==i) continue;
            lx=min(lx, a[j][0]);
            ly=min(ly, a[j][1]);
            rx=max(rx, a[j][0]);
            ry=max(ry, a[j][1]);
        }
        ex= (rx-lx)*(ry-ly);
        ret = min(ret, ex );

    }

    cout << ret;
    
    return 0;
}