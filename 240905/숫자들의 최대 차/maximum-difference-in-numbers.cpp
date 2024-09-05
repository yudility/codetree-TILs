#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, k, a[1001], ret;

int main() {

    cin >> n >> k;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a+n);

    for(int i=0; i<n; i++){
        int cnt=1; 
        for(int j=i+1; j<n; j++){
            if(a[j]-a[i]<=k) cnt++;
            else break;
        }
        ret = max(ret, cnt);
    }

    cout << ret;


    return 0;
}