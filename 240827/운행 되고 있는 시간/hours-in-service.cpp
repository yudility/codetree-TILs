#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a[100][2], rt[1000], ret;

int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i][0] >> a[i][1];
    }

    for(int i=0; i<n; i++){
        memset(rt, 0, sizeof(rt));
        for(int j=0; j<n; j++){
            if(j==i) continue;
            
            int s = a[j][0], e = a[j][1];
            for(int k= s; k<e; k++){
                rt[k]++;
            }
        }

        int cnt=0;
        for(int j=0; j<1000; j++){
            if(rt[j]>=1) cnt++;
        }
        ret = max(ret, cnt);
    }

    cout << ret;

    
    return 0;
}