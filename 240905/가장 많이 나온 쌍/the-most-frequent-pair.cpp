#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, m, a[100], b[100], ret;

int main() {

    cin >> n >> m;

    for(int i=0; i <m; i++){
        cin >> a[i] >> b[i];
    }

    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            int cnt=0;
            for(int k=0; k<m; k++){
                if((a[k]==i && b[k]==j) || a[k]==j && b[k]==i) cnt++;
            }
            ret=max(ret, cnt);
        }
    }
    
    cout << ret;
    return 0;
}