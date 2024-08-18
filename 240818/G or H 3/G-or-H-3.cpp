#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, k, ret=0;
char a[10002];

int main() {

    cin >> n >> k;

    for(int i=0; i <n; i++){
        int p;
        char al;
        cin >> p >> al;
        a[p]=al;
    }

    for(int i=1; i<=10002-k; i++){
        int cnt=0;
        for(int j=0; j<=k; j++){
            if(a[i+j]=='G') cnt++;
            else if(a[i+j]=='H') cnt+=2;
        }
        ret=max(ret, cnt);
    }

    cout << ret;

    return 0;
}